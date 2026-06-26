/*
2.5 Refactor your FoodOrder class so that the constructor takes an object as a parameter
 (with keys orderId, restaurantName, isDelivered) instead of separate arguments. Update
  your instantiation code to use this new constructor signature.
*/
#include <iostream>
#include <string>
using namespace std;
struct FoodOrderData {
    int orderId;
    string restaurantName;
    bool isDelivered;
};
class FoodOrder {
private:
    int orderId;
    string restaurantName;
    bool isDelivered;
public:
    FoodOrder(FoodOrderData data) {
        orderId = data.orderId;
        restaurantName = data.restaurantName;
        isDelivered = data.isDelivered;
    }

    void markDelivered() {
        isDelivered = true;
    }
  void displayOrder() {
        cout << "Order ID: " << orderId << endl;
        cout << "Restaurant: " << restaurantName << endl;
        cout << "Delivered: " << (isDelivered ? "Yes" : "No") << endl;
    }
};

int main() {
    FoodOrderData data = {101, "Pizza Palace", false};

    FoodOrder order(data);

    cout <<"Before Delivery:"<< endl;
    order.displayOrder();

    order.markDelivered();

    cout << "\nAfter Delivery:" << endl;
    order.displayOrder();

    return 0;
}
