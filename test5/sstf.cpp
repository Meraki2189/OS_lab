#include "widget.h"
#include "sstf.h"

int sstf(char *ch,int start)
{
    int k=0;
    len = 0;
    for(int i=0;ch[i]!='\0';i++) //提取序列
    {
        if(ch[i]!=' ')
        {
            int temp = 0;
            list[k] = ch[i] - '0';
            while(ch[i+1]!=' '&& ch[i+1]!='\0')
            {
                i++;
                temp = ch[i] - '0';
                list[k] = 10*list[k] + temp;
            }
            k++;
        }
    }
    disk_num = k;
    int temp_list[disk_num];
    for(int i=0;i<disk_num;i++)
        temp_list[i]=list[i];
    int last=start; //上一次到达磁盘的序列号
    int flag[disk_num]; //标志磁道是否被访问
    for(int i=0;i<disk_num;i++)
        flag[i]=0;
    for (int i=0;i<disk_num;i++)
    {
        int dis=9999;
        int min_dis=9999; //最短距离
        int min_t=0; //最短距离的序列号
        for(int t=0;t<disk_num;t++) //寻找最小距离的序列号
        {

            if(flag[t]==0)
            {
                dis=abs(last-list[t]);
                if(dis<min_dis)
                {
                    min_dis=dis;
                    min_t=t;
                 }
            }
        }
        list_res[i]=list[min_t]; //记录寻道结果
        last=list[min_t];
        dis_list[i] = min_dis; //记录最短距离
        len += dis_list[i];
        flag[min_t]=1; //标志磁道号已经被访问过
    }
    return disk_num;
}
