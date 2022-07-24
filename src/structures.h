#ifndef STRUCTURE_H
#define STRUCTURE_H
#include "raylib.h"

typedef struct Equation
{
    char *label;
    Color col;
    char *type;
    bool show;
    int a;
    int b;
    int c;
    int d;
} Equation;

extern Equation equation_arr[8];

typedef struct Window
{
    bool show;
    char *label;
    char *types[5];
} Window;

#endif