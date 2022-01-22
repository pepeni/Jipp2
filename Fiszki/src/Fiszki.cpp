//
// Created by Pepeni on 14.01.2022.
//

#include "Fiszki.h"
#include <iostream>

using namespace std;


Flashcard::Flashcard( string quest, string answ ) {
    question = quest;
    answer = answ;
}

Flashcard::~Flashcard() {
}

string Flashcard::get_question() {
    return question;
}

string Flashcard::get_answer() {
    return answer;
}





