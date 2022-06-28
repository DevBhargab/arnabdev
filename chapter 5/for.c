#include<stdio.h>
    void name();
    void art();
    
    void goodmorning();
    void goodafternoon();
    void goodnight();



    int main(){
    // name();
    // art();

     goodmorning();
     goodafternoon();
     goodnight();

        
  return 0;
}

    void name(){

        for (int i = 0; i < 10; i++)
        {
            /* code */
            printf("the value is %d\n" , i);
        }
        
    }

    void art(){
         for (int i = 10; i ; i--){
         printf("10 x %d = %d \n", i , 10*i);
    }
    }

void goodmorning(){
    printf("good mornning\n");
}
    void goodafternoon(){
        printf("good afternoon\n");
    }

    void goodnight(){
        printf ("good night\n");
    }
    