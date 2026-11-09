#include <iostream>
#include "PaymentMethod.h"

void processAllPayments(PaymentMethod* payments[], int size) {
    for (int i=0; i<size; i++) {
        payments[i]-> processPayment(3.99);
        std::cout << std::endl;
    }
}

int main() {
    const int size = 2;
    PaymentMethod* payments[size];
    CreditCard discover("Mister Clean", "5567846392674982", "12/28");
    payments[0] = &discover;
    payments[1] = new ApplePay("Visa Ending in 2216", true, "Person1");
    processAllPayments(payments, size);
    delete payments[1];
    return 0;
}