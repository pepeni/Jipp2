//
// Created by Pepeni on 17.10.2021.
//

#include <iostream>
#include "calc.h"

using namespace std;

int main(int argc, char* argv[]){
    string dzialanie;
    if(argc>1) {
        dzialanie = argv[1];
        if (dzialanie == "add") {
            if (argc == 4) {
                string chara, charb;
                chara = argv[2];
                int a = stoi(chara);
                charb = argv[3];
                int b = stoi(charb);
                cout << add(a, b) << endl;
            }
            else {help(1);}
        }
    else if (dzialanie == "subtract") {
        if(argc==4){
            string chara,charb;
            chara = argv[2];
            float a = stof(chara);
            charb = argv[3];
            float b = stof(charb);
            cout<<subtract(a,b)<<endl;
        }
        else{help(1);}}
    else if (dzialanie == "volume") {
        if(argc==6){
            string chara,charb,charh, charhigh;
            chara = argv[2];
            float a = stof(chara);
            charb = argv[3];
            float b = stof(charb);
            charh = argv[4];
            float h = stof(charh);
            charhigh = argv[5];
            float high = stof(charhigh);
            cout<<volume(a,b,h,high)<<endl;
        }
        else{help(1);}
    }
    else if (dzialanie == "help") {help(0);}
    else {help(2);}
}
    else {help(2);}}