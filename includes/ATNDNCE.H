#ifndef ATTENDANCE_H
#define ATTENDANCE_H

int Search_ID(int y);
void TimeIN(int id);
void TimeOUT(int id);
char Statistics(int id, int animate);
void Add_Attendance();
void MakeSearch(int y, int animate, int &ID, char &f);
void ATTENDANCE();

#endif