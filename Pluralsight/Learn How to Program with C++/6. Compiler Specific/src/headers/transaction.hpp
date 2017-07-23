#include <string>

class Transaction {
    private:
        int amount;
        std::string type; // this way is a bit.. shit.
    public:
        Transaction(int amt, std::string kind);
        std::string Report();
};