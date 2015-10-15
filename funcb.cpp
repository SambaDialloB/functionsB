//Name: Samba Diallo
//Date: 10/15/15
//Summary: FunctionsB
#include <iostream>
#include <cassert>
#include <string>
#include <cmath>
using namespace std;

double feetToInches(double val);
void feetToInches(double val, double& woot);
double computeRectangle(double valA, double valB);
void computerArea(double valA, double valB, double& valC);
void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF);
void calcAreaPerimeter(double radius, double& area, double& perimeter);
double calcArea(double length, double width);
int main(){

double e = .0001, in1,in2,in3,in4;
feetToInches(3, in1);
feetToInches(8, in2);
feetToInches(0, in3);
assert(fabs(in1 -36) < e);
assert(fabs(in2 -96) < e);
assert(fabs(in3 -0) < e);
assert(fabs(feetToInches(3) - 36) < e);
assert(fabs(feetToInches(8) -96) < e);
assert(fabs(feetToInches(0) - 0) < e);

assert(fabs(computeRectangle(2, 4) - 8) < e);
assert(fabs(computeRectangle(20, 4) - 80) < e);

computerArea(2, 3, in1);
computerArea(10, 3, in2);
assert(fabs(in1 -6) < e);
assert(fabs(in2 -30) < e);

stats(1,2,3,4,in1,in2);
stats(5,6,7,99, in3,in4);
assert(fabs(in1 - 10) < e);
assert(fabs(in2 - 2.5) < e);
assert(fabs(in3 - 117) < e);
assert(fabs(in4 - 29.25) < e);

calcAreaPerimeter(1,in1,in2);
assert(fabs(in1-3.14159)<e);
assert(fabs(in2-6.28318) < e);

assert(calcArea(5,4) - 20 < e);
assert(calcArea(100,100) - 100 < e);

return 0;}

double feetToInches(double val){
    return (val * 12);}
void feetToInches(double val, double& woot){
    woot = val * 12;
   return;}
double computeRectangle(double valA, double valB){
    return (valA * valB);}
void computerArea(double valA, double valB, double& valC){
    valC = valA * valB;
    return;}
void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF){
    valE = valA + valB + valC + valD;
    valF = (valA + valB + valC + valD) / 4;
    return;}
void calcAreaPerimeter(double radius, double& area, double& perimeter){
    area = 3.14159 * pow(radius, 2);
  perimeter = 2 * 3.14159 * radius;
    return;}
double calcArea(double length, double width){
    return (length * width);}

