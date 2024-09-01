#include<stdio.h>
#include<stdbool.h>
int main(){
    char chack = false;
    char num;
    printf("enter a number which are you seek:-");
    scanf("%c",&num);
    char arr[10]={'a','n.','u','r','a','g','w','x','y','z',};
    for (int i=0;i<(sizeof(arr)/sizeof(char));i++){
        if(arr[i]==num){
            printf("Element is founded at index is:-%d",i);
            chack=true;
            break;
        }
    }
    if(chack==false){
        printf("element is not founded in array ");
    }
}
