#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <clocale>
using namespace std;
 
int main() 
{ 
    setlocale(LC_ALL,"Rus");
    string vs[100];
    ifstream ff("phones.dat");
    ofstream res("Textsort.dat");
    int n=0;
    if(ff)
    {
        while( getline(ff,vs[n++]) && n<100 ); 
        sort(vs,vs+n);
        for(int j=0;j<n;j++)
            res<<vs[j]<<endl;
        res.close();
    }
    system("pause");
    return 0; 
}