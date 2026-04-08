#include <iostream>
#include <thread>
using namespace std;
void task1() {
     for(int i=1; i<=5; i++) {
         cout << "Task 1: " << i <<

 endl;
     }
}

void task2() {
    for(char c='A'; c<='E'; c++) {
         cout << "Task 2: " << c <<
endl;
    }
}

int main() {
    thread t1(task1);
    thread t2(task2);

    t1.join();
    t2.join();

    return 0;

}
