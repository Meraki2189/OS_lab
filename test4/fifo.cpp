#include "fifo.h"
#include "widget.h"


int in_mem(int n,PBlock *pb,int m) //判断页面n是否在物理块中
{
  int a = 0;
  for(int i=0;i<m;i++){
      if(pb[i].num == n){
        a = 1;
        break;
      }
  }
  return a;
}


void fifo(char *ch, PBlock *pb)
{
    int index =0;  //页面号索引
    int j=0;
    lps = 0;
    lpp = 0;
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]!=' ')
        {
            pages[j] = ch[i] - '0';
            j++;
        }
    }
    PAGES = j;
    while(index<PAGES){
        if(!in_mem(pages[index],pb,pnum)){    //如果该页面不在物理块中
            for(int i=pnum-1;i>=1;i--)
            {
                pb[i]= pb[i-1];
            }
            pb[0].num = pages[index];      //将该页面放入物理块中
            lps++;                         //缺页次数加1
            for(int i=0;i<pnum;i++){ //结果矩阵赋值
                ans[i][index] = pb[i].num;
            }
            judge[index] = 'F';
        }
        else{
            for(int i=0;i<pnum;i++){ //结果矩阵赋值
                ans[i][index] = ans[i][index-1];
            }
            judge[index] = 'T';
        }
        index++;
      }
    lpp = (double)lps/PAGES;
    printf("lps:%d,lpp:%.1f\n",lps,lpp);
    fflush(stdout);
    printf("page array:\n");
    fflush(stdout);
    for(int i=0;i<PAGES;i++){
        printf("%d ",pages[i]);
        fflush(stdout);
    }
    printf("\n");
    fflush(stdout);

    printf("result array:\n");
    fflush(stdout);
    for(int i=0;i<pnum;i++){
        for(int j=0;j<PAGES;j++){
          if(ans[i][j]==0)
          {
              printf("_ ");
              fflush(stdout);
          }
          else
          {
              printf("%d ",ans[i][j]);
              fflush(stdout);
          }
        }
    }
        printf("\n");
        fflush(stdout);
}
