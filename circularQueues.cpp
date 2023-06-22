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
        cout << "\n The element deleted from the queue is: " << queue_array[front] << "\n";

        /*cek jika queue hanya memiliki satu element*/
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else{
            /*jika element yang di hapus(front) berada di akhir aray*/
            if (front == max - 1)
                front = 0;
            else
                front = front + 1;
        }
    }

    void display() {
        int front_position = front, rear_position = rear;
        /*cek apakah Queue kosong*/
        if (front == -1) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "\nelement in the queue are: \n";
        
        /*jika front <= rear -> front hingga rear*/
        if (front_position <= rear_position) {
            while (front_position <= rear_position){
                cout << queue_array[front_position] << "  ";
                front_position++;
            }
            cout << endl;
        }
        
        else{
            /*jika front > rear -> front hingga akhir array*/
            while (front_position <= max -1){
                cout << queue_array[front_position] << "  ";
                front_position++;
            }

            front_position = 0;

            /*awal array hingga akhir rear*/
            while (front_position <= rear_position){
                cout << queue_array[front_position] << "  ";
                front_position++;
            }

            cout << endl;
        }
    }
};

int main(){
    Queues q;
    char ch;

    while (true){
        try {
            cout << "menu" << endl;
            cout << "1. implement insert opration" << endl;
            cout << "1. implement delete opration" << endl;
            cout << "1. display values" << endl;
            cout << "4. exit" << endl;
            cout << "enter your choice (1-4): ";
            cin >> ch;
            cout << endl;

           
        }
    }
}