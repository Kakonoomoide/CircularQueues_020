#include <iostream>
using namespace std;

class Queues {
private:
    int front, rear, max = 5;
    int queue_array[5];
    
public:
    void insert() {
        int num;
        cout << "enter your num: ";
        cin >> num;
        cout << endl;

        /*cek apakah antrin sudah penuh*/
        if ((front == 0 && rear == max - 1) || (front == rear + 1)) {
            cout << "\nQueue overflow\n";
            cout << endl;
        }

    }
};

int main(){
    
}