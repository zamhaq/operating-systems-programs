#include<stdio.h>

int main(){
    int d[20],art[20],t[20],n,h,p,i,j,k,temp,sum=0;
    printf("Enter the no. of tracks\n");
    scanf("%d",&n);
    printf("Enter the head position\n");
    scanf("%d",&h);
    t[0]=0;
    t[1]=h;
    printf("Enter the tracks\n");
    for(i=2;i<n+2;i++)
        scanf("%d",&t[i]);
    for(i=0;i<(n+2);i++)
        for(j=0;j<(n+2)-i-1;j++)
            if(t[j]>t[j+1])
            {
                temp=t[j];
                t[j]=t[j+1];
                t[j+1]=temp;
            }
    for(i=0;i<n+2;i++)
    {
        if(t[i]==h){
            j=i;
            k=i;
        }
    }
    p=0;
    while(t[j]!=0){
        art[p]=t[j];
        j--;
        p++;
    }
    art[p]=t[j];
    for(p=k+1;p<(n+2);p++,k++){
        art[p]=t[k+1];
    }
    for(j=0;j<n+1;j++){
        if(art[j]>art[j+1])
            d[j]=art[j]-art[j+1];
        else
            d[j]=art[j+1]-art[j];
        sum+=d[j];
    }
    printf("sum = %d and avg head movements = %f",sum,(float)(sum/n));
    return 0;
}