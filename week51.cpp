#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    
    for (int i = 1; i <11; i++) {
        cout << i << endl;
        sum = sum + i;
    }
    cout << "Sum is " << sum<< endl;
    

    return 0;
}

#include <iostream>
using namespace std;
int main() {
    
    for (int i = 1; i <= 100; i++) {
        if(i%5 == 0){
            cout<<i<<endl;
    }
        else{
            continue;
        }
        }
    

    return 0;
}

