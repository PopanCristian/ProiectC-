#include <iostream>
#include <cstring>
using namespace std;
class Test{
char* materie;
int durata,nr_intrebari;

public:
    Test(char* materie=NULL, int durata=0, int nr_intrebari=0)
    {
        if(materie!=NULL)
        {
            this->materie= new char[10];
            strcpy(this->materie,materie);
        }
        this->durata=durata;
        this->nr_intrebari=nr_intrebari;
    }
~Test(){}
void afisare()
{
cout<<"Materia: "<<this->materie<<"; Durata: "<< this->durata<<" ;Nr. intrebari: "<<this->nr_intrebari;
}
};
Test citire()
{
    char materie[10];
    cin.getline(materie,10);
    int durata;
    cin.get();
    cin>>durata;
    int nr_intrebari;
    cin>>nr_intrebari;
    Test t(materie,durata,nr_intrebari);
    return t;
}
int main()
{
    while(1!=0)
    {
        int choice=0;
        cout<<"\t\t\t\t\t[========== Meniu Teste ==========]\n\n";
        cout<<"1.Creati un test\n";
        cout<<"2.Creati un test\n";
        cout<<"3.Creati un test\n";
        cin>>choice;
        system("cls");
        if(choice==1)
        {
            cout<<"\t\t\tIntroduceti urmatoarele detalii despre test in urmatoarea ordine:\n\n1.Materia testului;\n2.Durata;\n3.Numar de intrebari;\n";
            Test t=citire();
            t.afisare();
        }


        system("pause");
    }
    return 0;
}
