/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agendron
 *
 * Created on September 26, 2017, 1:42 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int letters[25];
    string sentence;
    cout<<"Enter a sentence:"<<endl;
    getline(cin, sentence);
    
    for(int i = 0; i < sentence.length(); i++)
    {
        if(sentence.substr(i) == "a" || "A")
        {
            letters[0]+=1;
            cout<<"letter"<<endl;
        }
        else if(sentence.substr(i) == "b" || "B")
        {
            letters[1]+=1;
            cout<<"letter"<<endl;
        }
        else if(sentence.substr(i) == "c" || "C")
        {
            letters[2]+=1;
            cout<<"letter"<<endl;
        }
        else if(sentence.substr(i) == "d")
        {
            letters[3]+=1;
            cout<<"letter"<<endl;
        }
        else if(sentence.substr(i) == "e")
        {
            letters[4]+=1;
            cout<<"letter"<<endl;
        }
        else if(sentence.substr(i) == "f")
        {
            letters[5]++;
            cout<<"letter"<<endl;
        }
        else if(sentence.substr(i) == "g")
        {
            letters[6]++;
            cout<<"letter"<<endl;
        }
        else if(sentence.substr(i) == "h")
        {
            letters[7]++;
            cout<<"letter"<<endl;
        }
        else if(sentence.substr(i) == "i")
        {
            letters[8]++;
            cout<<"letter"<<endl;
        }
        else if(sentence.substr(i) == "j")
        {
            letters[9]++;
            cout<<"letter"<<endl;
        }
        else
        {
            cout<<".."<<endl;
        }
    }
    
    cout<<"**letters**"<<endl;
    
    for(int i = 0; i < *letters; i++)
    {
        cout<<letters[i]<<endl;
    }
    
    return 0;
}

