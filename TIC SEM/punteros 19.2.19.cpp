#include<stdio.h>
#include<iostream>
int main(){
    int x;
    int y;
    x=3;
    y=5;
    char salir;
    //std::cout<<x;
    printf("x=%d",x);
    //std::cout<<y;
    printf("\ny=%d",y);
    std::cout<<"\nToca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
}
