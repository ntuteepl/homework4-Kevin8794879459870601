#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#define ARRAYSIZE 50
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int input[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&input[i]);
    }

    bool isPrime  = true;
    for(j=0;j<n;j++){
        if(input[j]<=1){
                isPrime=false;

        }
        else{
            for(int i=2;i*i<=input[j];i++){
                if(input[j]%i==0){
                    isPrime=false;
                    break;
                }
            }

        }
        if(isPrime){
            printf("YES ");

        }
        else{
            printf("NO ");
        }
        isPrime=true;
    }

    }


