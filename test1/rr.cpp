#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include "rr.h"
int rr(char *ch)
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
                pcb1[k].lef_time = pcb1[k].ser_time;
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
    int ready1[10];
    for(int i=0;i<k;i++){
        ready1[i]=ready[i];
    }
    int time = order[0];
    int temp_p,l=0;
    while(l<n){
        // 判断time前到达的进程数
        for(int i=0;i<n&&pcb1[ready[i]].arr_time<=time;i++)
            temp_p = i+1;
        if(time!=order[0]) //将第一个进程移到队尾
        {
            for(int i=1;i<temp_p;i++){
                int temp = ready1[i-1];
                ready1[i-1] = ready1[i];
                ready1[i] = temp;
            }
        }
        if(pcb1[ready1[0]].state != 'F') //若当前队首进程未执行完
        {
            time += 1;
            pcb1[ready1[0]].lef_time -= 1;
            pcb1[ready1[0]].use_time += 1;
            if(pcb1[ready1[0]].lef_time <=0){ //判断进程是否结束
                l++;
                ready_t[l] = ready1[0];
                printf("%d\n",time);
                fflush(stdout);
                pcb1[ready_t[l]].fin_time = time;
                pcb1[ready_t[l]].run_time = time - pcb1[ready1[0]].arr_time;
                pcb1[ready_t[l]].avg_run_time = (float)pcb1[ready_t[l]].run_time / pcb1[ready1[0]].ser_time;
                pcb1[ready1[0]].state = 'F';
                printf("%d %d %.1f\n",pcb1[ready_t[l]].fin_time,pcb1[ready_t[l]].run_time,pcb1[ready_t[l]].avg_run_time);
                fflush(stdout);
            }
        }

    }
    return n;

}
