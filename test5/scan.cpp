#include "widget.h"
#include "scan.h"

void quicksort(int num[],int count,int left,int right) //快排
{
    if (left >= right){
        return ;
    }
    int key = num[left];
    int lp = left;
    int rp = right;
    while (lp < rp) {
        if (num[rp] < key) {
            int temp = num[rp];
            for (int i = rp - 1; i >= lp; i--) {
                num[i + 1] = num[i];
            }
            num[lp] = temp;
            lp ++;
            rp ++;
        }
        rp --;
    }
    quicksort(num,count,left,lp - 1);
    quicksort(num,count,rp + 1,right);
}

int scan(char *ch,int start)
{
    int k=0;
    len=0;
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
    quicksort(temp_list,disk_num,0,disk_num-1); //将磁道序列排序
    int index=disk_num-1;
    int last=start;
    for(int i=0;i<disk_num;i++) //寻找距离起点最近的磁道号
    {
        if(temp_list[i]>last)
        {
            index=i;
            break;
        }
    }
    int dir=1;//方向变量，1为磁道号增加方向，0为减小方向。
    int flag[disk_num];//定义数组，标志磁道是否被访问过了
    for(int i=0;i<disk_num;i++)
        flag[i] = 0;

    int n=disk_num;
    int result_index=0;
    while(n)//存在没有访问过的磁道号
    {
        if(dir)
        {
            while(index<=disk_num-1&&flag[index]==0)
            {
                list_res[result_index]=temp_list[index];
                dis_list[result_index] = abs(temp_list[index]-last); //记录距离
                len += dis_list[result_index];
                last=temp_list[index];

                flag[index]=1;//标记已被访问过的磁道号
                index++;
                result_index++;
                n--; //磁道号数目减1
            }
            if(index==disk_num)
            {
                dir=0; //方向取反
                index--;
            }
        }else
        {
            while(index>=0&&flag[index]==0)
            {
                list_res[result_index]=temp_list[index];
                dis_list[result_index] = abs(temp_list[index]-last); //记录距离
                len += dis_list[result_index];
                last=temp_list[index];
                flag[index]=1;//标记已被访问过的磁道号
                index--;
                result_index++;
                n--;
            }
            index--;
        }
    }
    return disk_num;
}
