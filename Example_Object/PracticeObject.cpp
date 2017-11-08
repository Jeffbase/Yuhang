#include <iostream>
using namespace std;
#include "PracticeObject.h"

Prac_Obj::Prac_Obj(){
        a = 1;
        b = 'a';
}

Prac_Obj::Prac_Obj(int x, char y){
        a = x;
        b = y;
}

int Prac_Obj::do_math(){
        return a*a;
}



//define nonmember functions
