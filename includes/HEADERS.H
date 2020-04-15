#ifndef HEADERS
#define HEADERS

// REQUIRED HEADERS

#include<process.h>
#include<time.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>

// GLOBAL

struct DOB {  int day, month, year;  };
extern union REGS in, out;
extern char* Desg[10];
extern int Seats[10][2];

#endif