 // agr aap chate ho program ko kisi bhi order me rakhe aur to chalye to nhi chalega, uske liye function prototype ki madad leni hogi
#include<stdio.h>

  int main(){
    void india();    // this function prototype
    india();      
    return 0;    
}


void india(){
    printf(" you are in india\n"); 
    void australia();        // function prototype 
    australia();                     
    return;           

}
void england(){
    printf(" you are in england\n"); 
     return;                          
}
  void australia(){
    printf(" you are in australia\n");
    void england();   
    england();                           
    return;             
}

   