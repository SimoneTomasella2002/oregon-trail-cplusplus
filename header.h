#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <algorithm>

struct {
    int difficultyChoice;
} typedef settings;

struct {
    int dollarsLeft;
} typedef playerData;


void instructions();
void difficultyShootingChoice(settings&);
void purchases(playerData&);

#endif