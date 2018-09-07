#include<stdio.h>
int main(int argc , char *argv[])
{ 
    int average;int i;int sum=0;
    
    if(argc==1)
    {
        printf("Enter any no");
        exit(1);
    }
    else{
        for(i=1;i<=argc-1;i++)
    {
        sum+=atoi(argv[i]);
        
    }
    int average=sum/(argc-1);
    printf("%d",average);
    }
}