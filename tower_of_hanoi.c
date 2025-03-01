// #include <stdio.h>
// void toh (int n, char A , char B , char C ){
//    if (n==1){
//     printf("Move disk 1 from %c to %c\n",A,C);}
//     else {
//         toh(n-1,A,C,B);
//         printf("Move disk %d from %c to %c\n",n,A,C);
//         toh (n-1,B,A,C);}
// }
// int main(){
//     int m =3;
//     char from = 'A';
//     char to = 'B';
//     char use = 'C';
//     toh(m,from,to,use);
//     return 0;
// }

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
