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
};

int main(){
    
}