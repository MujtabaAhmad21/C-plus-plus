//#include <iostream>
//#include <stdexcept>
//using namespace std;
//
//template <typename T>
//class SafeArray {
//private:
//    T* data;
//    size_t size;
//
//public:
//    // Constructor
//    SafeArray(size_t size) : size(size) {
//        data = new T[size];
//    }
//
//    // Destructor
//    ~SafeArray() {
//        delete[] data;
//    }
//
//    // Overload [] operator for element access
//    T& operator[](size_t index) {
//        if (index >= size) {
//            throw out_of_range("Index out of bounds");
//        }
//        return data[index];
//    }
//
//    size_t getSize() const {
//        return size;
//    }
//};
//
//class ArrayIndexOutOfBoundsException : public exception {
//private:
//    const char* message;
//
//public:
//    explicit ArrayIndexOutOfBoundsException(const char* message) : message(message) {}
//
//    virtual const char* what() const throw() {
//        return message;
//    }
//};
//
//int main() {
//    try {
//        SafeArray<int> arr(5);
//
//        for (size_t i = 0; i < arr.getSize(); ++i) {
//            arr[i] = i * 10;
//        }
//
//        // Attempt to access an element outside the bounds
//        cout << "Accessing element at index 10: " << arr[10] << endl;
//    } catch (const out_of_range& e) {
//        cerr << "Out of Range error: " << e.what() << endl;
//    }
//
//    return 0;
//}
