#include <iostream>
using namespace std;
int main() {
    
    for (int i = 1; i <= 100; i++) {
        if(i%5 == 0){
            continue;
    }
        else{
            cout<<i<<endl;
        }
        }
    

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
