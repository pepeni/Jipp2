//
// Created by Pepeni on 14.01.2022.
//

#ifndef JIPP2_FISZKI_H
#define JIPP2_FISZKI_H
#include <iostream>
#include <vector>

using namespace std;


class Flashcard_fields {

protected:
    string question;
    string answer;

};



class Flashcard : public Flashcard_fields {

public:

    /**
     * Konstruktor, który wczytuje pytanie i odpowiedź jednej fiszki
     * @param quest - pytanie
     * @param answ - odpowiedź
     */
    Flashcard( string quest, string answ );

    /**
     *dekonstruktor klasy flashcard
     */
    ~Flashcard();

    /**
     *Funkcja zwraca pole pytanie
     * @return - zwraca pytanie
     */
    string get_question();

    /**
     * Funkcja zwraca pole odpowiedź
     * @return - zwraca odpowiedź
     */
    string get_answer();

};



#endif //JIPP2_FISZKI_H
