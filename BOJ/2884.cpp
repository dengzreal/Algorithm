#include <iostream>

using namespace std;

int main(void){
    int h, m;
    cin >> h >> m;
    
    if(m < 45){
        m += 15;
        h--;
    }
    
    else
        m -= 45;
        
    if(h < 0)
        h = 23;
        
    cout << h << " "<< m;
}
