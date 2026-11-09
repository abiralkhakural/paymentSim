#include "PaymentMethod.h"
#include <iostream>

CreditCard::CreditCard(std::string name, std::string ccn, std::string exp)
    :creditCardName(name), creditCardNumber(ccn), creditCardExpiration(exp){}

bool CreditCard::processPayment(double amount) {
    std::cout << "Processing Credit Card Payment of $" << amount << std::endl;
    if (creditCardNumber.length()!= 16) {
        std::cout << "Invalid Credit Card Number Length(must be 16)";
        return false;
    }

    if (creditCardExpiration =="10/26") {
        std::cout << "Card is expired";
        return false;
    }

    std::cout << "Payment Approved!";
    return true;
}

ApplePay::ApplePay(std::string aPCard, bool aPR, std::string aPFaceID)
    : applePayCard(aPCard), applePayReqApproval(aPR), applePayFaceID(aPFaceID){}

bool ApplePay::processPayment(double amount) {
    std::cout << "Processing Apple Payment Payment of $" << amount << " via "<< applePayCard << std::endl;
    if (!applePayReqApproval) {
        std::cout << "Payment Declined";
        return false;
    }

    if (applePayFaceID != "Person1" && applePayFaceID != "Person2") {
        std::cout << "FaceID not recognized";
        return false;
    }

    std::cout << "Payment Approved with Apple Pay";
    return true;
}

