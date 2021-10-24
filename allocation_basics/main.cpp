#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    /*int i;
    for(i=0;i<5;i++){
        cout<<"JiPP2"<<"\n";
    } *///5x JiPP2



    /*int a,b, i;
    cout<<"Wpisz liczbe kolumn tablicy:"<<"\n";
    cin>> a;
    cout<<"Wpisz liczbe wierszy tablicy:"<<"\n";
    cin>> b;
    int **tablica = new int*[a];
    for (i=0;i<a;i++){
        tablica[i] = new int[b];
    }

    for (i=0;i<a;i++){
        delete [] tablica[i];
    }
    delete [] tablica;*///tablica 2 wymiarowa dynamiczna



    /*int a,b,c, i,j;
    cout<<"Wpisz X tablicy:"<<"\n";
    cin>> a;
    cout<<"Wpisz Y tablicy:"<<"\n";
    cin>> b;
    cout<<"Wpisz Z tablicy:"<<"\n";
    cin>> b;
    int ***tablica = new int**[a];
    for (i=0;i<a;i++){
        tablica[i] = new int*[b];
    }
    for (i=0;i<a;i++){
        for (j=0;j<b;j++){
            tablica[i][j] = new int[c];
        }
    }

    for (i=0;i<a;i++){
        for (j=0;j<b;j++){
            delete [] tablica[i][j];
        }
    }

    for (i=0;i<a;i++){
        delete [] tablica[i];
    }
    delete [] tablica;*///tablica 3 wymiarowa dynamiczna




    int a, b, c;
    string docs, dzialanie;
    docs="""Simple calculatur\n"
         "simpleCalc [nazwa dzialania]\n"
         "\n"
         "Dzialania:\n"
         "add [a] [b]\n"
         "    Dodawanie dwoch liczb ([a] i [b]) calkowitych.\n""";
    if(argc>1) {
        dzialanie = argv[1];
        if (dzialanie == "add") {
            if(argc==4){
                string chara,charb;
                chara = argv[2];
                float a = stof(chara);
                charb = argv[3];
                float b = stof(charb);
                float wynik = a+b;
                cout<<wynik<<endl;}
            }
            else{cout<<docs<<endl;}
        }
        else if (dzialanie == "subtract") {
            if(argc==4){
                string chara,charb;
                chara = argv[2];
                float a = stof(chara);
                charb = argv[3];
                float b = stof(charb);
                float wynik = a-b;
                cout<<wynik<<endl;
            }
            else{cout<<"zla liczba arg\n"<<docs<<endl;}
        }
        else if (dzialanie == "volume") {
            if(argc==6){
                string chara,charb,charh, charH;
                chara = argv[2];
                float a = stof(chara);
                charb = argv[3];
                float b = stof(charb);
                charh = argv[4];
                float h = stof(charh);
                charH = argv[5];
                float H = stof(charH);
                float wynik = ((a+b)/2)*h*H;
                cout<<wynik<<endl;
            }
            else{cout<<"zla liczba arg\n"<<docs<<endl;}
        }
        else if (dzialanie == "help") {cout<<docs<<endl;}
        else {cout<<"zla nazwa dzialania\n"<<docs<<endl;}
}