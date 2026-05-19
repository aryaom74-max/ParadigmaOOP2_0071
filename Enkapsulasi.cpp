#include <iostream>
using namespace std;

class remotelampu {
private:
    string saklarNo[10];
public:
    void setsaklarNo(int i, string value) {
        saklarNo[i] = value;
    }
    string getsaklarNo(int i) {
        return saklarNo[i];
    }
};
int main () {
    remotelampu lampu;
    lampu.setsaklarNo(0, "saklar 1");
    lampu.setsaklarNo(1, "saklar 2");
    lampu.setsaklarNo(2, "saklar 3");
    lampu.setsaklarNo(3, "saklar 4");
    cout << lampu.getsaklarNo(0) << endl;
    cout << lampu.getsaklarNo(1) << endl;
    cout << lampu.getsaklarNo(2) << endl;
    cout << lampu.getsaklarNo(3) << endl;
    return 0;
}
