/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: adammcmurchie
 *
 * Created on 28 October 2020, 12:38
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    string characterName = "Adam";
    int characterAge = 35;
    
    // SIMPLE PRINTOUT 
    cout << "My name is " << characterName << endl;
    cout << "My age is " << characterAge;
    // new line
    cout << "\n";
     
    
    // STRING LEN FUNCTION 
    cout << "Length of variable characterName is : \n";
    cout << characterName.length();
    cout << "First Character is : " << characterName[0] << "\n";
    
    // STRING FIND FUNCITON 
    cout << characterName.find("d",0);
    
    
    
    
    return 0;
}

