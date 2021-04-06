#pragma once

#include <cmath>
#include <string>
#include <deque>

//declared in Methods.cpp
double suma(double, double);

double resta(double, double);

double mult(double, double);

double div(double, double);

double sqRoot(double);

double percentage(std::deque<double>, int);

double equals(std::deque<double>, int);

void cls();

void del();

bool checkDot(std::wstring);

//declared in Unit2.cpp
void restartText();

void restartOps();
