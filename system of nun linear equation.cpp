#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "system of nun linear equation\n";
    float  inf[3][3] = { 0 }, pr[3][3] = { 0 }, mult[3] = { 0 }, res[3] = { 0 }, x[3] = { 0 }, equ[3] = { 0 }, det = 0;
    int a[3] = { 0 }, b[3] = { 0 }, c[3] = { 0 }, d[3] = { 0 }, e[3] = { 0 }, f[3] = { 0 }, g[3] = { 0 }, n = 0;
    cout << "if you wont 2 equation int num 1\n";
    cout << "if you wont 3 equation int num 2\n";
    cin >> n;
    switch (n)
    {
    case(1):
    {
        cout << "a x1 ^b + c x2 ^d + e = 0\n ";
        for (int i = 0; i < 2; i++)
        {
            cout << "please inter ( a , b , c , d , e  ) for equation " << i + 1 << "\n";
            cin >> a[i] >> b[i] >> c[i] >> d[i] >> e[i];
            cout << "initial value of x " << i + 1 << "\n";
            cin >> x[i];
        }
        for (int j = 0; j < 10; j++)
        {
            for (int i = 0; i < 2; i++)
            {
                pr[i][0] = a[i] * b[i] * pow(x[0], b[i] - 1);
                pr[i][1] = c[i] * d[i] * pow(x[1], d[i] - 1);
                equ[i] = a[i] * pow(x[0], b[i]) + c[i] * pow(x[1], d[i]) + e[i];
            }
            det = (pr[0][0] * pr[1][1]) - (pr[0][1] * pr[1][0]);
            inf[0][0] = pr[1][1] / det;
            inf[0][1] = -pr[0][1] / det;
            inf[1][0] = -pr[1][0] / det;
            inf[1][1] = pr[0][0] / det;
            mult[0] = (inf[0][0] * equ[0]) + (inf[0][1] * equ[1]);
            mult[1] = (inf[1][0] * equ[0]) + (inf[1][1] * equ[1]);
            res[0] = x[0] - mult[0];
            res[1] = x[1] - mult[1];
            x[0] = res[0];
            x[1] = res[1];
            cout << "x1=" << x[0] << "\n";
            cout << "x2=" << x[1] << "\n";
        }
        break;
    }
    case(2):
    {
        cout << "a x1 ^b + c x2 ^d + e x3 ^f + g = 0\n ";
        for (int i = 0; i < 3; i++)
        {
            cout << "please inter ( a , b , c , d , e , f , g ) for equation " << i + 1 << "\n";
            cin >> a[i] >> b[i] >> c[i] >> d[i] >> e[i] >> f[i] >> g[i];
            cout << "initial value of x " << i + 1 << "\n";
            cin >> x[i];
        }
        for (int j = 0; j < 10; j++)
        {
            for (int i = 0; i < 3; i++)
            {
                pr[i][0] = a[i] * b[i] * pow(x[0], b[i] - 1);
                pr[i][1] = c[i] * d[i] * pow(x[1], d[i] - 1);
                pr[i][2] = e[i] * f[i] * pow(x[2], f[i] - 1);
                equ[i] = a[i] * pow(x[0], b[i]) + c[i] * pow(x[1], d[i]) + e[i] * pow(x[2], f[i]) + g[i];
            }
            det = (pr[0][0] * ((pr[1][1] * pr[2][2]) - (pr[1][2] * pr[2][1]))) - (pr[0][1] * ((pr[1][0] * pr[2][2]) - (pr[1][2] * pr[2][0]))) + (pr[0][2] * ((pr[1][0] * pr[2][1]) - (pr[1][1] * pr[2][0])));
            inf[0][0] = ((pr[1][1] * pr[2][2]) - (pr[1][2] * pr[2][1])) / det;
            inf[0][1] = -((pr[1][0] * pr[2][2]) - (pr[1][2] * pr[2][0])) / det;
            inf[0][2] = ((pr[1][0] * pr[2][1]) - (pr[1][1] * pr[2][0])) / det;
            inf[1][0] = -((pr[0][1] * pr[2][2]) - (pr[0][2] * pr[2][1])) / det;
            inf[1][1] = ((pr[0][0] * pr[2][2]) - (pr[0][2] * pr[2][0])) / det;
            inf[1][2] = -((pr[0][0] * pr[2][1]) - (pr[2][0] * pr[0][1])) / det;
            inf[2][0] = ((pr[0][1] * pr[1][2]) - (pr[0][2] * pr[1][1])) / det;
            inf[2][1] = -((pr[0][0] * pr[1][2]) - (pr[0][2] * pr[1][0])) / det;
            inf[2][2] = ((pr[0][0] * pr[1][1]) - (pr[0][1] * pr[1][0])) / det;
            mult[0] = ((inf[0][0] * equ[0]) + (inf[0][1] * equ[1]) + (inf[0][2] * equ[2]));
            mult[1] = ((inf[1][0] * equ[0]) + (inf[1][1] * equ[1]) + (inf[1][2] * equ[2]));
            mult[2] = ((inf[2][0] * equ[0]) + (inf[2][1] * equ[1]) + (inf[2][2] * equ[2]));
            res[0] = x[0] - mult[0];
            res[1] = x[1] - mult[1];
            res[2] = x[2] - mult[2];
            x[0] = res[0];
            x[1] = res[1];
            x[2] = res[2];
            cout << "x1=" << x[0] << "\t\t x2=" << x[1] << "\t\t x3=" << x[2] << "\n";
        }
        break;
    }
    }
    return 0;
}