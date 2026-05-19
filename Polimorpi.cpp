#include <iostream>
#include <string>
using namespace std;

class seseorang {
public:
    virtual void pesan() {};
    // virtual void pesan(){
    // cout << "pesan dari seseorang" endl;    
    //}
};

class joko : public seseorang {
public:
    void pesan() {
        cout << "pesan dari joko" << std::endl;
    }
};

class lia : public seseorang {
    public: 
    void pesan () {
        cout << "pesan dari seseorang" << endl;
    }

};

int main() {
    seseorang* obyek;
    joko a;
    lia b;

    obyek = &a;
    obyek -> pesan();
    obyek = &b;
    obyek -> pesan();
    // a.seseorang::pesan();
    // b.seseorang::pesan();
    return 0;
}
