#include<iostream>
/*Este programa sirve para saber leer 10 numeros*/
main(){
       std::cout<<"Vienvenido al programa que te va a remendar la media";
       int num[9];
       int i;
       char salir;
       int suma=0;//iniciamos la variable acumuladora en 0//
       int n_numeros;//se establece un comando para que el usuario inicie el valor al ejecutar el programa//
       std::cout<<"Cuantos números quieres introducir:";
       std::cin>>n_numeros;
       for(i=0;i<=9;i++){
                          std::cout<<"Dime un numero";
                          std::cin>>num[i];
                          }
                          //Ahora voy a enseñar los números que introducimos//
                          std::cout<<"Lista de los numeros:\n";
                          for(i=0;i<=9;i++){
                                             std::cout<<num[i];
                                            }
                          std::cout<<"\n Pulse cualquier tecla para salir";
                          std::cin>>salir;
                          
                          return 0;
       
}
#include<iostream>
//Calcular la media de los numeros ARRAY//
main(){
       int num[9];
       int i;
       char salir;
       for(i=0;i<=9;i++){
                          std::cout<<"Dime un numero";
                          std::cin>>num[i];
                          }
                          //Ahora vamos a calcular la media//
                          for(i=0;i<=9;i++){
                                            //Como sumar todos los numeros//
                                            suma=suma+num[i];
                                            }
                          //se establece el valor de la media//
                          media=suma/n_numeros;
                          std::cout<<"\nMEDIA:"<<suma;
                          std::cout<<"\n Pulse cualquier tecla para salir";
                          std::cin>>salir;
                          
                          return 0;
       
}
