#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[]){
    int a[100];
    int i = 1;
    int j = 0;
    int temp;
    int x = 0;
    if(argc == 1){
        printf("The program needs at least one integer parameter to run!\n");
    }
    else{
    for(;i < argc;++j,++i){
        if(*argv[i] >= '0' && *argv[i] <= '9')
        {
            a[j] = atof(argv[i]);
            }else{
               printf("The program has to be an integer format!\n");
               return 0;  
            }
    }
    for(;x < argc-2;x++){
     if(a[x] < a[x + 1]) 
{
temp = a[x];
a[x] = a[x + 1];
a[x + 1] = temp;}
}
printf("Min parameter is %d\n",a[argc-2]);
return 0;
}
}