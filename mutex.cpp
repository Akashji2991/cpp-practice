#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int counter = 0;
mutex mtx;

void increament() {
    for (int i = 0; i < 1000; i++) {
        lock_guard<mutex> lock(mtx);
        counter++;

    }

}

int main() {
    thread t1(increament);
    thread t2(increament);

    t1.join();
    t2.join();

     cout << "Final Counter: " << counter << endl;
     return 0;
}
