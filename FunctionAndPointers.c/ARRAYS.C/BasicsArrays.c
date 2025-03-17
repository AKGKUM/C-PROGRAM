#include<stdio.h>
int main(){
    int arr[5]; // iska matlab ye hai ki arr name ka 5 daba creat kiya hai, yani 5 space le liye hai
    for(int i=0; i<=4; i++){
        printf(" enter element no. %d=", i+1); // this is for getting the input from user
                scanf("%d", &arr[i]);
    }
    for(int i=0; i<=4; i++){
        printf("%d\n", arr[i]);  
    }
    return 0;
}