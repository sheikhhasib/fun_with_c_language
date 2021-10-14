
#include <stdio.h>  
 int find_max(int ara[], int n);
 int find_min(int ara[], int n);
 double circleArea (double r);
 double squreArea (double a);
 double pi = 3.14;  
 int main()   
 {  
    //  int ara[] = {-100, 0, 53, 22, 83, 23, 89, -132, 201, 3, 85};  
    //  int n = 11;  
    //  int max = find_max(ara, n);  
    //  int min = find_min(ara, n);  
    //  printf("min value :  %d\n", min);  
    
    // double r = 10; // radius 
    // double area  = circleArea(r);
    // printf("circleArea :  %lf\n", area);
    
    double a = 20;
    double area = squreArea(a);
    printf("squreArea : %lf", area);
    
    
    
     return 0;  
 }  
 
 double circleArea (double r){
    double area = pi * r * r;
    return area;
 } 
  
 double squreArea (double a){
     double area = a * a;
     return area;
 }
//  int find_max(int ara[], int n)   
//  {  
//      int max = ara[0];  
//      int i;  
//      for(i = 1; i < n; i++) {  
//          if (ara[i] > max) {  
//              max = ara[i];  
//          }  
//      }  
//      return max;  
//  }
//  int find_min(int ara[], int n)   
//  {  
//      int min = ara[0];  
//      int i;  
//      for(i = 1; i < n; i++) {  
//          if (ara[i] < min) {  
//              min = ara[i];  
//          }  
//      }  
//      return min;  
//  }