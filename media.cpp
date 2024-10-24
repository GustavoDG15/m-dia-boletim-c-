#include <iostream>
using namespace std;

//variaveis
float n1, n2, n3, media;

int main(){
    cout<<"Nota 1: ";
        cin>>n1;

    cout<<"nota 2: ";
        cin>>n2;

    cout<<"nota 3: ";
        cin>>n3;

    media = (n1+n2+n3) / 3;


    cout<<"a media do aluno foi: "<<media;

    return 0;
}
