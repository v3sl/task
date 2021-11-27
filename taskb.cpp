#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double MY_PI = acos(-1.0);
    int r,h;
    double x1,y1,z1,x2,y2,z2;
    cin >> r >> h >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
    double d1,d2;
    d1  = sqrt(pow(x1,2)+pow(y1,2)+pow(h-z1,2));
    d2 = sqrt( pow(x2,2)+pow(y2,2)+pow(h-z2,2));
    double A1,B1,C1,A2,B2,C2;
    A1 = (-y1)*(h-z1)-(-z1)*(-y1);
    B1 = -(-x1)*(h-z1)-(-z1)*(-x1);
    C1 = (-x1)*(-y1)-(-x2)*(-y1);
    A2 = (-y2)*(h-z2)-(-z2)*(-y2);
    B2 = -(-x2)*(h-z2)-(-z2)*(-x2);
    C2 = (-x2)*(-y2)-(-x2)*(-y2);
    double cos1,cos2;
    cos1 = abs(B1)/sqrt(pow(A1,2)+pow(B1,2)+pow(C1,2));
    cos1 = abs(B2)/sqrt(pow(A2,2)+pow(B2,2)+pow(C2,2));
    double arccos1, arccos2;
    arccos1 = acos(cos1)*MY_PI/180;
    arccos2 = acos(cos2)*MY_PI/180;
    int DA;
    DA = abs(arccos2-arccos1);
    double l, fi;
    l = sqrt(r*r+h*h);
    fi = DA * r;
    l = sqrt(d1*d1 +d2*d2 - 2*d1*d2*cos(fi));
    if(DA == 0)
        cout << sqrt(pow((x2-x1),2) + pow((y2-y1),2) + pow((z2-z1),2));
    else 
        cout << l;
    return 0;
}