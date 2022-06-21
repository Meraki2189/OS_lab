#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include "fcfs.h"
int fcfs(char *ch)
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
    int temp = pcb1[ready[0]].arr_time;
    for(int i=0;i<k;i++){
        temp += pcb1[ready[i]].ser_time;
        pcb1[ready[i]].fin_time = temp;
        pcb1[ready[i]].run_time = temp - pcb1[ready[i]].arr_time;
        pcb1[ready[i]].avg_run_time = (float)pcb1[ready[i]].run_time / pcb1[ready[i]].ser_time;
        printf("%d %d %.1f\n",pcb1[ready[i]].fin_time,pcb1[ready[i]].run_time,pcb1[ready[i]].avg_run_time);
        fflush(stdout);
    }
    return n;
}
