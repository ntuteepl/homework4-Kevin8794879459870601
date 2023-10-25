#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input[6][3]={{123,456,9000},{456,789,5000},{789,888,6000},{336,558,10000},{775,666,12000}
,{556,221,7000}};
int a,b,c;
scanf("%d",&a);
for(int d=0;d<a;d++){
    scanf("%d%d",&b,&c);
    if (b==input[0][0]&&c==input[0][1]){
        printf("9000");}
        else if(b==input[1][0]&&c==input[1][1]){
        printf("5000");}
        else if(b==input[2][0]&&c==input[2][1]){
        printf("6000");}
        else if(b==input[3][0]&&c==input[3][1]){
        printf("10000");}
        else if(b==input[4][0]&&c==input[4][1]){
        printf("12000");}
        else if(b==input[5][0]&&c==input[5][1]){
        printf("7000");}
        else{
            printf("error");
        }
}



return 0;
}
