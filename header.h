#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <algorithm>

struct {
    int difficultyChoice;
} typedef settings;


void instructions();
void difficultyShootingChoice(settings& settings);

#endif