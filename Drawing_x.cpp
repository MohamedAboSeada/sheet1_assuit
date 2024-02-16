#include <iostream>
using namespace std;

int main()
{
    int n, start = 0, end = 0;
    cin >> n;
    end = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == j && i == n / 2){
                cout<<"X";
            }else{
                if (j == start)
                    cout << "\\";
                else if (j == end)
                    cout << "/";
                else
                    cout << "*";
            }
        }
        (end > 0) ? end-- : end = n - 1;
        start = (start + 1) % n;
        cout << endl;
    }
    return 0;
}