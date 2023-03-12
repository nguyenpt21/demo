#include <iostream>
#include <string.h>
using namespace std;
//tao email tu dong
int main()
{
    char s[1000], a[50][20];
    cin.getline(s, 1000);
    strlwr(s);
    char *p;
    int n=0;
    for(p=strtok(s, " ");p!=NULL;p=strtok(NULL, " "))
    {
        strcpy(a[n++],p);
    }
    for(int i=0;i<n-1;i++)
        cout << a[i][0];
    cout << a[n-1];
    cout << "@gmail.com";
    return 0;
}
