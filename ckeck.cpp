#include <iostream>
#include <bits/stdc++.h>
using namespace std;

float p(float x, float y)
{
    return (-(4 * x * x) + (4 * x * y) - (2 * y * y) + 3) / 6;
}
float g(float x, float y)
{
    return (x + ((y * y) / x)) / 4;
}

int main()
{
    float x_2 = 0.456029;
    float y_2 = 0.308568;

    float x_1 = .27333;
    float y_1 = 0.5125;

    cout << p(x_1, y_1) << endl;
    cout << p(x_2, y_2) << endl;

    float s = (p(x_2, y_2) - p(x_1, y_1)) / (x_2 - x_1);
    cout <<s<<endl;

    float q_ = s / (s - 1);
    cout << q_<<endl;

    float x_3 = (1-q_)*p(x_2,y_2) + (q_*(x_2));
    cout<<x_3<<endl;

    // for(int i=1;i<=4;i++){
    //     float fx2 = p(x_2,y_2);
    //     float fx1 = p(x_1,y_1);

    //     float s = (fx2 - fx1)/(x_2-x_1);
    //     float q = s/(s-1);
    //     cout<<"q "<<i<<endl;

    //     float x_3 = (1-q_)*fx2 + (q_*(x_2));
    //     cout<<"x3 "<<x_3<<endl;
    // }
    
    float s_y = (g(x_2,y_2) - g(x_1,y_1))/(x_2-x_1);
    float q_y = s_y/(s_y-1);
    cout<<"q_y"<<q_y<<endl;

    float y_3 = (1-q_y)*g(x_2,y_2) + (q_y*x_2);
    cout<<"y_3"<<y_3<<endl;

    float s2x = (p(x_3, y_3) - p(x_2, y_2)) / (x_3 - x_2);
    cout <<s<<endl;

    float q_x_2 = s2x / (s2x - 1);
    cout << "q_x_2"<<q_x_2<<endl;

    float x_4 = (1-q_x_2)*p(x_3,y_3) + (q_x_2*(x_3));
    cout<<"x_4"<<x_4<<endl;

}