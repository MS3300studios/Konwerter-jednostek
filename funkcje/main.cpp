#include <iostream>

using namespace std;

float metry;

float ile_cali(float m);
float ile_jardow (float x);
float ile_mil (float y);

int main()
{
    cout << "Podaj ile metrow: ";
    cin >> metry;
    cout <<"to tyle cali: "<<ile_cali(metry)<<endl;
    cout <<"to tyle jardow: "<<ile_jardow(metry)<<endl;
    cout <<"to tyle mil: "<<ile_mil(metry)<<endl;




    return 0;
}

float ile_mil (float y)
{
    return y*1.3/1000;
}
float ile_cali(float m)
{
    float cale=m*39.37;
    return cale;
}
float ile_jardow (float x)
{
    float jardy=x*1.0936;
    return jardy;
}
