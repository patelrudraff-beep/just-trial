#include<stdio.h>
#include<math.h>

float squareArea(float side);
float rectangleArea(float a, float b);
float circleArea(float radius);
 

int main(){
   float radius=10;
   printf("area is:%f",circleArea(radius));
   return 0;
   
}


float squareArea(float side){
    return side * side;
}

float rectangualrArea(float a, float b){
    return a * b;
}

float circleArea(float radius){
    return 3.14 * radius * radius;
}