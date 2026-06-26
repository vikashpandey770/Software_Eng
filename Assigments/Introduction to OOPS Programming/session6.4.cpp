/*
6.4
*/

#include <iostream>
#include <string>
using namespace std;
class UserProfile {
private:
    string phoneNumber;
public:
    void setPhoneNumber(string phone) {
        phoneNumber = phone;
    }
    string getPhoneNumber() {
        return phoneNumber;
    }
};
int main() {
    UserProfile user;
    user.setPhoneNumber("9876543210");
    cout<<"Phone Number:"<<user.getPhoneNumber()<<endl;
    return 0;
}
