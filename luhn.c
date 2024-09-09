#include<stdio.h>
#include<string.h>

void luhn_algh(char num[]);

int main(){
  
    char num[20];

    printf("Enter card or IMEI number: ");
    scanf("%19s", num);

    luhn_algh(num);

    return 0;
}


void luhn_algh(char num[]){
    
    int sum=0;
    int len=strlen(num);

    for(int i=len-1;i>=0;i--){
        int n=(num[i]-'0');

        if((len-i)%2==0){
            n*=2;
            if(n>9){
                n-=9;
            }
        }
        sum+=n;
      
    }

    if(sum % 10==0){
        printf("card or IMEI number is valid.\n");
    } 
    else{
        printf("card or IMEI number is invalid.\n");
    } 
}

