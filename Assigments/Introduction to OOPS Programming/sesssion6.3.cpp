/*
6.3


*/

#include <iostream>
#include<string>
using namespace std;
class Product {
public:
    virtual void upload()=0;
};

	class Electronics : public Product {
	public:
    void upload() override {
        cout<<"electronics product uploaded successfully"<<endl;
    }
};

class Clothing : public Product {
public:
    void upload() override {
        cout<<"clothing product uploaded successfully"<<endl;
    }
};

int main() {
    Electronics e;
    Clothing c;

    e.upload();
    c.upload();

    return 0;
}
