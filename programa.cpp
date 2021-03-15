#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    char nom,ape;
    int edad;

    cout<<"Inserte su nombre: "; cin>>nom;
    cout<<"Inserte su apellido: "; cin>>ape;
    cout<<"Inserte su edad: "; cin>>edad;

    cout<<"\nLa informacion personal es: "<<nom<<" "<<ape<<" - "<<edad<<endl;


    getch();
    return 0;
}