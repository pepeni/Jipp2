//
// Created by Pepeni on 21.01.2022.
//

#ifndef JIPP2_PROGRAM_H
#define JIPP2_PROGRAM_H
#include <iostream>
#include <vector>

using namespace std;

class Program {
private:

    string set_name;
    vector <Flashcard> flashcard_list;

public:

    /**
     * Konstruktor klasy Program. ustawia nazwę zestawu fiszek, sprawdza, czy plik z zestawem fiszek już istnieje, a jeśli tak, to wczytuje je do programu
     * @param set_name przyjmuje nazwę zestawu fiszek
     */
    Program( string set_name );

    /**
     *Dekonstruktor - Wypisuje "Koniec programu" po zniszczeniu klasy Program
     */
    ~Program();

    /**
     *Funkcja wyświetla ciekawostkę (sumę liczb numerów pytań)
     */
    void math_template();

    /**
     *Funkcja umożliwia wprowadzenie nowej fiszki do wektora
     */
    void insert();

    /**
     *Funkcja losuje i 1 wyświetla fiszkę
     */
    void draw();

    /**
     *Funkcja wyświetla wszystkie wpisane fiszki i umożliwia wykonanie na nich podstawowych funkcji: pokaż odpowiedź, usuń fiszkę
     */
    void show_vector();

    /**
     *Zapisuje vector w odpowiedniej formie w pliku
     */
    void save();

    /**
     *odpala program, ułatwia korzystanie z biblioteki uruchamia program w sugerowany sposób
     */
    void main();

    /**
     * Przeciążenie operatorów, które umożliwia obiektowi wchłonąć vector innego obiektu
     * @param rhs - klasa program
     * @return łączy vectory obu klas i wpisuje je do lewej strony równania
     */
    Program &operator+=( const Program &rhs ) {

        for( int i = 0; i < rhs.flashcard_list.size(); i++ ){
            this->flashcard_list.push_back( rhs.flashcard_list.at(i) );
        }

        return *this;

    }

};

#endif //JIPP2_PROGRAM_H
