#ifndef ESSENTIALS_H
#define ESSENTIALS_H

void CountSeats();
void SORRY();
void INIT();
void CloseButton();
void BackButton();
void BG();
void Patch(int x, int y, int w, int h);
void LOGO(int x, int y);
void SearchBar(char id = 'n');
void Desgs(char task, char desg[], double &sal);
void SearchTable(int id, int permission);
void DateAndTime(char p = 'x');
char DeleteButton();
char ModifyButton();
void Modify_Name(int id);
void Modify_Designation(int id);
void Modify_Salary(int id);
int New_ID();
char* New_Name();
DOB New_DOB();
void NewRecord();

#endif