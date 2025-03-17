#include<stdio.h>
int main()
{
     int ram, shyam, ajay;
     printf(" age of ram =");
     scanf("%d", &ram);
     printf(" age of shyam =");
     scanf("%d", &shyam);
     printf(" age of ajay =");   
    scanf("%d", &ajay);
    if(ram<shyam){
        if( ram<ajay){
            printf(" ram is youngest = %d", ram);

        }

    
    else{
        printf(" ajay is youngest = %d", ajay);

    }
    }
    else{
        if( shyam<ram){
            if( shyam< ajay){
                printf(" shyam is youngest = %d", shyam);
            }
        }
        else{
            printf( " ajay is youngest = %d", ajay);
        }
    }

    return 0;
}