#include <iostream>
using namespace std;
#include "PracticeObject.h"
main(){

        Prac_Obj hi = Prac_Obj();
        Prac_Obj hey = Prac_Obj(2, 'q');
        int x = hi.do_math();
        cout << "X: " << x << endl;

return 0;
}