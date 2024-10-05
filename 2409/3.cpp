class ISort {
public:
    virtual void SortAsc() = 0;
    virtual void SortDesc() = 0;
    virtual void SortByParam(bool isAsc) = 0;
};

class Array : public ISort {

public:
    void SortAsc() override {
        for (int i = 0; i < size - 1; ++i) {
            for (int j = i + 1; j < size; ++j) {
                if (arr[i] > arr[j]) {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }

    void SortDesc() override {
        for (int i = 0; i < size - 1; ++i) {
            for (int j = i + 1; j < size; ++j) {
                if (arr[i] < arr[j]) {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }

    void SortByParam(bool isAsc) override {
        if (isAsc) {
            SortAsc();
        }
        else {
            SortDesc();
        }
    }
};
s