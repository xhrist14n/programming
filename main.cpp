#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cassert>

using namespace std;

int main()
{
    cout << "Iniciando Programa!" << endl<<endl;

    cout<<"<<Programa de temperatura >>"<<endl<<endl;

    fstream file("data.txt",ios::in);

    bool flag=true;

    float num;
    float max=0;
    float min=9999999;
    while(flag){
        file>>num;
        if(max<num){
            max=num;
        }
        if(min>num){
            min=num;
        }
        flag=!file.eof();
    }

    cout<<"Numero Mayor: "<<max<<endl;
    cout<<"Numero Menor: "<<min<<endl;

    cout<<endl<<endl;

    cout << "Finalizando Programa!" << endl<<endl;
    return 0;
}

