#ifndef PAYMENTSIM_PAYMENTMETHOD_H
#define PAYMENTSIM_PAYMENTMETHOD_H
#include <string>


class PaymentMethod {
    public:
    virtual bool processPayment(double amount) = 0;
    virtual ~PaymentMethod() = default;
};

class CreditCard : public PaymentMethod {
    private:
    std::string creditCardName;
    std::string creditCardNumber;
    std::string creditCardExpiration;
    public:
    CreditCard(std::string name, std::string ccn, std::string exp);
    bool processPayment(double amount) override;
};

class ApplePay: public PaymentMethod {
    private:
    std::string applePayCard;
    bool applePayReqApproval;
    std::string applePayFaceID;
    public:
    ApplePay(std::string aPCard, bool aPR, std::string aPFaceID);
    bool processPayment(double amount) override;
};

#endif //PAYMENTSIM_PAYMENTMETHOD_H
