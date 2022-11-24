#include <stdio.h>
#include <math.h>

int main(){
    for (int i=1; i<=100; i=i+1){
        printf("%d \n", i);
    }
    return 0;
}

int main(){
    for (float i=1.0; i<=10.0; i=i+1){
        printf("%f \n", i);
    }
    return 0;
}

int main(){
    for (char ch='a'; ch<='z'; ch=ch+1){
        printf("%c ", ch);
    }
    return 0;
}

int main(){
     for (int i=10; i>=1; i=i-1){
         printf("%d \n", i);
     }
     return 0;
 }