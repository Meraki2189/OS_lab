#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include "hrn.h"
int hrn(char *ch)
{
    for(int i=0;i<10;i++){
        pcb1[i].state = 'N';
        pcb1[i].lef_time = 0;
        pcb1[i].use_time = 0;
    }
    int n=0;
    int j=0,k=0;
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]!=' ')
        {
            if(j==0){
                pcb1[k].id = ch[i];
                j++;
            }
            else if(j==1){
                int temp = 0;
                pcb1[k].arr_time = ch[i] - '0';
                while(ch[i+1]!=' '&& ch[i+1]!='\0')
                {
                    i++;
                    temp = ch[i] - '0';
                    pcb1[k].arr_time = 10*pcb1[k].arr_time + temp;
                }
                j++;
            }
            else if(j==2){
                int temp = 0;
                pcb1[k].ser_time = ch[i] - '0';
                while(ch[i+1]!=' ' && ch[i+1]!='\0')
                {
                    i++;
                    temp = ch[i] - '0';
                    pcb1[k].ser_time = 10*pcb1[k].ser_time + temp;
                }
                j=0;
                k++;
            }
        }
    }
    n = k;
    for(int i=0;i<k;i++){
        order[i] = pcb1[i].arr_time;
        ready[i] = i;
    }
    for(int i=0;i<k;i++)
        for(j=i+1;j<k;j++){
            if(order[i]>order[j])
            {
                int temp = order[i];
                order[i] = order[j];
                order[j] = temp;
                temp = ready[i];
                ready[i] = ready[j];
                ready[j] = temp;
            }

        }
    int ready1[10]; //按照优先权排序的进程在pcb1的位置
    float order1[10]; //记录优先权的排序
    for(int i=0;i<n;i++){
        order1[i]=1;
        ready1[i]=ready[i];
    }
    int time = order[0];
    int temp_p; //存储到达的进程数
    for(int l=0;l<n;l++){
        // 判断time前到达进程数
        for(int i=0;i<k&&pcb1[ready[i]].arr_time<=time;i++)
        {
            temp_p = i+1;
        }
        // 计算这些进程的优先权
        for(int i=0;i<temp_p;i++){
            if(order1[i])
                order1[i]=(time-pcb1[ready1[i]].arr_time+pcb1[ready1[i]].ser_time)/pcb1[ready1[i]].ser_time;
        }
        // 按优先权排序
        for(int i=0;i<temp_p;i++){
            for(int j=i+1;j<temp_p;j++){
                if(order1[i]<order1[j])
                {
                    int temp1 = order1[i];
                    order1[i] = order1[j];
                    order1[j] = temp1;
                    float temp2 = ready1[i];
                    ready1[i] = ready1[j];
                    ready1[j] = temp2;
                }
            }
        }
        // pcb1中第ready1[0]项为当前处理的进程，计算三种时间
        ready_t[l] = ready1[0];
        time += pcb1[ready1[0]].ser_time; //time更新
        pcb1[ready_t[l]].fin_time = time;
        pcb1[ready_t[l]].run_time = time - pcb1[ready1[0]].arr_time;
        pcb1[ready_t[l]].avg_run_time = (float)pcb1[ready_t[l]].run_time / pcb1[ready1[0]].ser_time;
        order1[0]=0; //将执行结束的order1赋0
        printf("%d %d %.1f\n",pcb1[ready_t[l]].fin_time,pcb1[ready_t[l]].run_time,pcb1[ready_t[l]].avg_run_time);
        fflush(stdout);
    }
    return n;
}
