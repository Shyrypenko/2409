class IMath {
public:
    virtual int Max() const = 0;
    virtual int Min() const = 0;
    virtual float Avg() const = 0;
    virtual bool Search(int valueToSearch) const = 0;
};

class Array : public IMath {
public:
    int Max() const override {
        int maxVal = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }
        return maxVal;
    }

    int Min() const override {
        int minVal = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] < minVal) {
                minVal = arr[i];
            }
        }
        return minVal;
    }

    float Avg() const override {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += arr[i];
        }
        return static_cast<float>(sum) / size;
    }

    bool Search(int valueToSearch) const override {
        for (int i = 0; i < size; ++i) {
            if (arr[i] == valueToSearch) {
                return true;
            }
        }
        return false;
    }
};
