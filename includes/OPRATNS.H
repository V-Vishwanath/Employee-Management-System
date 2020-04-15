#ifndef OPERATIONS_H
#define OPERATIONS_H

void GetCursorPos(int &x, int &y, int &b);
void ShowCursor();
void HideCursor();
void QUIT();
char* Convert(long x);
double Convert(char* x);
int LeapYear(int year);

#endif
