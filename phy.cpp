#include <iostream>
#include <math.h>
using namespace std;

float phy(float type, float a, float b, float c){
    if (type == 1){
    if(a == 0){
        return (sqrt(((c*c)-(b*b))));
    }
    else if(b == 0){
        return (sqrt(((c*c)-(a*a))));
    }
    else if(c == 0){
        return (sqrt(((b*b)+(a*a))));
    }
    else{
        return 0;
    }
    }
    else if(type == 2){
        float rad;
        rad = (b * (3.1415926535 / 180));
        if (a == 1) {
            return sin(rad);
        }
        else if (a == 2) {
            return cos(rad);
        }
        else if (a == 3) {
            return tan(rad);
        }
        else if (a == 4) {
            return (1 / cos(rad));
        }
        else if (a == 5) {
            return (1 / sin(rad));
        }
        else if (a == 6) {
            return (1 / tan(rad));
        }
        else if (a == 7) {
            return asin(b) * (180 / 3.1415926535);
        }
        else if (a == 8) {
            return acos(b) * (180 / 3.1415926535);
        }
        else if (a == 9) {
            return atan(b) * (180 / 3.1415926535);
        }
        else{
            return 0;
        }
    }
    else{
        return 0;
    }

}