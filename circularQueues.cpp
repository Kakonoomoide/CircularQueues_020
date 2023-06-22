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

        /*cek apakah Qeueu sudah penuh*/
        if ((front == 0 && rear == max - 1) || (front == rear + 1)) {
            cout << "\nQueue overflow\n";
            cout << endl;
        }

        /*cek apakah Queue kosong*/
        if (front == -1) {
            front = 0;
            rear = 0;
        }

        else{
            /*jika di akhir (circular array) dan untuk increment rear +1*/
            if (rear == max - 1)
                rear = 0;
            else
                rear = rear + 1;
        }
        queue_array[rear] = num;
    }

    void remove() {
        /*cek apakah Queue kosong*/
        if (front == -1) {
            cout << "Queue underflow\n";
            return;
        }
    }
};

int main(){
    
}