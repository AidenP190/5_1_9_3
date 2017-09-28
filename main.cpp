/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: aparsons
 *
 * Created on September 26, 2017, 1:14 PM
 */

#include <iostream>

using namespace std;

class AdHocSquare
{
public:
 AdHocSquare(double side)
 {
     this -> side = side;
 }
 void set_side(double side)
 {
     this->side = side;
 }
 double get_area()
 {
     return side*side;
 }
private:
    double side;
};

class LazySquare
{
public:
    LazySquare(double side)
    {
        this ->side = side;
    }
    void set_side(double side)
    {
        side_changed = true;
        this->side = side;
    }
    double get_area()
    {
        if(side_changed == false)
        {
            return area;
        }
        else
        {
            area = side * side;
            return area;
        }
    }
private:
    double side; 
    double area;
    bool side_changed;
};
int main(int argc, char** argv) {

    AdHocSquare AdHocSquare(5.4);
    
    AdHocSquare.set_side(4.5);
    
    cout << "The area of this square is " << AdHocSquare.get_area() << endl;
    
    LazySquare LazySquare(6.11);
    
    LazySquare.set_side(11.6);
    
    cout << "The area of this square is " << LazySquare.get_area() << endl;
    
}

