#include<stdio.h>
int main(int argc , char *argv[])
{ 
    int sum=0;int i;
    
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
    printf("%d",sum);
    }
}