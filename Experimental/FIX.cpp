//#include <iostream>
//
//class Boolean {
//private:
//    bool value;
//
//public:
//    // Constructor to initialize the Boolean object with a value
//    Boolean(bool val) : value(val) {}
//
//    // Overload the logical NOT operator
//    Boolean operator!() const {
//        return Boolean(!value); // Returns the negation of the value
//    }
//
//    // Function to get the value of the Boolean object
//    bool getValue() const { return value; }
//};
//
//int main() {
//    Boolean b(true);
//    Boolean notB = !b; // Calls the overloaded logical NOT operator
//    std::cout << std::boolalpha << "Original value: " << b.getValue()
//        << ", Negated value: " << notB.getValue() << std::endl;
//    return 0;
//}
