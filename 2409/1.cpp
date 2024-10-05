#include <iostream>
#include <string>
using namespace std;

class IOutput {
public:
    virtual void Show() const = 0;
    virtual void Show(const string& info) const = 0;
};

class Array : public IOutput {
private:
    int* arr;
    int size;

public:
    Array(int* inputArr, int arrSize) : arr(inputArr), size(arrSize) {}

    void Show() const override {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void Show(const string& info) const override {
        cout << info << ": ";
        Show();
    }
};
