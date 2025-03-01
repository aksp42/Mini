#include <stdio.h>
void towerOfHanoi (int n , char from , char use , char to){
    if(n==1){
        printf("The disk %d move from %c to %c\n",n,from,to);
        
    }else
        {towerOfHanoi(n-1,from,to,use);
    printf("The disk %d move from %c to %c\n",n,from,use);
    towerOfHanoi(n-1,use,from,to);}
        
}

int main (){
    int i =3;
    char from = 'A';
    char use = 'B';
    char to = 'C';
    towerOfHanoi(i,from,use,to);
    return 0;
}
