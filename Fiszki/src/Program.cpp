//
// Created by Pepeni on 21.01.2022.
//

#include "Fiszki.h"
#include "Biblioteka_dodatkowa.h"
#include "Program.h"
#include <iostream>
#include <fstream>

using namespace std;

Program::Program( string set_name ) {
    this->set_name = set_name;

    string file_name = set_name + ".txt";
    fstream open_file;
    open_file.open( file_name, ios::in );

    if( open_file.good()==false ){
        cout << "Nie ma pliku: " << file_name << ".txt" << endl;
        open_file.close();
    }
    else{
        string line_quest, line_answ;
        int i = 0;
        while( getline( open_file, line_quest ) && getline( open_file, line_answ ) ) {
            flashcard_list.emplace_back( line_quest, line_answ );
        }
    }
}

Program::~Program() {
    cout << "\nKoniec programu" << endl;
}



void Program::math_template() {
    int summ = 0;
    for(int i = 0; i < flashcard_list.size(); i++){
        summ = sum( summ, i );
    }
    cout << "Ciekawostka: Suma wszystkich numerow twoich fiszek w tym zestawie = " << summ << endl;
}




void Program::insert() {
    string new_quest, new_answ;

    cout << "\nWpisz nowe pytanie:\n\t";
    cin >> new_quest;

    cout << "\nWpisz odpowiedz na to pytanie:\n\t";
    cin >> new_answ;


    flashcard_list.emplace_back( new_quest, new_answ );
}


void Program::draw() {

    if ( flashcard_list.size() >= 1 ) {
        string answer, waiting_string;
        int list_size = flashcard_list.size();
        int random_numb = random_number( list_size );

        cout << flashcard_list.at(random_numb).get_question() << endl;

        cout << "Wpisz odpowiedz: ";
        cin >> answer;
        compare( flashcard_list.at( random_numb ).get_answer(), &answer );

        cout << flashcard_list.at( random_numb ).get_answer() << endl;
        cout << "napisz cokolwiek, zeby wyjsc" << endl;
        cin >> waiting_string;

    }
}

void Program::show_vector() {
    string selected_question = "", selected_option = "", waiting_var = "";
    int selected_q = 0, selected_o = 0;

    int vector_lenght = flashcard_list.size();
    if(vector_lenght > 0) {
        cout << "\n";
        for ( int i = 0; i < vector_lenght; i++ ) {
            cout << i << ") " << flashcard_list.at(i).get_question() << endl;
        }

        cout << "\nwpisz numer pytania: " << endl;

        try {
            cin >> selected_question;
            selected_q = stoi( selected_question );

        }
        catch ( const invalid_argument &e ) {
            cout << "\nwpisz liczbe odpowiadajaca pytaniu  " << '\n';
            main();
        }
        if( selected_q >= vector_lenght || selected_q < 0 ){
            cout << "\nliczba spoza zakresu. " << '\n';
            show_vector();
        }

        cout << "Co chcesz zrobic z pytaniem: '" << flashcard_list.at(selected_q).get_question() << "?" << endl;
        cout << "1) Zobacz odpowiedz." << endl;
        cout << "2) Usun pytanie." << endl;
        cout << "3) Pomin.\n" << endl;
        cout << "Wybierz: " << endl;

        try {
            cin >> selected_option;
            selected_o = stoi( selected_option );
        }
        catch ( const invalid_argument &e ) {
            cout << "\nwpisz liczbe odpowiadajaca opcji  " << '\n';
            main();
        }

        if( selected_o > 3 || selected_o < 1 ){
            cout << "\nliczba spoza zakresu. " << '\n';
            show_vector();
        }

        else if( selected_o == 1 ) {
            cout << flashcard_list.at( selected_q ).get_answer() << endl;
            cin >> waiting_var;
        }

        else if( selected_o == 2 ) {
            cout << "usuwanie fiszki o pytaniu: " << flashcard_list.at(selected_q).get_question() << endl;
            flashcard_list.erase( flashcard_list.begin() + selected_q );
        }

        else if( selected_o == 3 ) {
            cout << "pomin" << endl;
        }

    }
}

void Program::save() {
    fstream save_file;
    string file_name = set_name + ".txt";

    save_file.open( file_name, ios::out );

    int vector_lenght = flashcard_list.size();

    for( int i = 0; i < vector_lenght; i++ ) {
        save_file << flashcard_list.at( i ).get_question() << endl;
        save_file << flashcard_list.at( i ).get_answer() << endl;
    }

    save_file.close();
}

void Program::main() {
    string selection;

    while( 1 ) {

        cout << "Wybierz: " << endl;
        cout << "'1' jesli chcesz wylosowac pytanie," << endl;
        cout << "'2' jesli chcesz dodac pytanie," << endl;
        cout << "'3' jesli chcesz wyswietlic liste pytan," << endl;
        cout << "'4' jesli chcesz wyswietlic ciekawostke" << endl;
        cout << "'5' jesli chcesz zapisac pytania i odpowiedzi." << endl;
        cout << "'6' jesli chcesz wyjsc z programu" << endl;
        cin >> selection;

        if(selection == "1") {
            draw();
        }

        else if(selection == "2") {
            insert();
        }

        else if(selection == "3") {
            show_vector();
        }

        else if(selection == "4") {
            math_template();
        }

        else if(selection == "5") {
            save();
        }

        else if(selection == "6") {
            break;
        }

        else { cout << "niepoprawny input. sprobuj jeszcze raz."; }

    }
}