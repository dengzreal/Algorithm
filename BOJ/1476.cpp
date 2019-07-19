#include <iostream>

using namespace std; 

int main() 
{ 
    int E, S, M; 
    cin >> E >> S >> M;
    int i = 1; 
    while (true) 
    { 
        if ((i - E) % 15 == 0 && (i - S) % 28 == 0 && (i - M) % 19 == 0)
        { 
            cout << i; 
            return 0; 
        }
        i++; 
    } 
}
