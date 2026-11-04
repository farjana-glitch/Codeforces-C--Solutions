#include<stdio.h>
int main ()
   {
       int a[3],i,t,cnt=0,sum ;
       scanf("%d",&t);
       while(t--)
       {
           sum=0;
           for(i=0;i<3;i++);
           {
               scanf("%d",&a[i]);
               sum=sum+a[i];
           }
           if(sum>=0)
           {
               cnt++;
           }
       }
       printf("%d\n",cnt);

       return 0;
   }
