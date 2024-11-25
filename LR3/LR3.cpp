#include <iostream>
#include <stdexcept>

template <typename T>
class DynamicArray {
private:
    T* data;       // ��������� �� ������
    size_t size;   // ������ �������

public:
    // �����������
    DynamicArray(size_t n) : size(n) {
        if (n <= 0) {
            throw std::invalid_argument("Size must be greater than 0");
        }
        data = new T[n]; // ��������� ������ ��� ������
    }

    // ����������
    ~DynamicArray() {
        delete[] data; // ������������ ������
    }

    // ����� ��� ��������� �������� �������� �������
    void set(size_t index, T value) {
        if (index >= size) {
            throw std::out_of_range("Index out of range");
        }
        data[index] = value;
    }

    // ����� ��� ��������� �������� �������� �������
    T get(size_t index) const {
        if (index >= size) {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }

    // ����� ��� ��������� �������� �������
    void display() const {
        for (size_t i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }

    // ����� ��� ������������ ������ ������� �� ��������������� �������
    DynamicArray<T> createNewArray() const {
        if (size < 2) {
            throw std::logic_error("Not enough elements to form a new array");
        }

        DynamicArray<T> newArray(size - 1);
        for (size_t i = 0; i < size - 1; ++i) {
            newArray.set(i, data[i] * data[i + 1]);
        }
        return newArray;
    }
};

int main() {
    size_t N;

    std::cout << "������� ������ ������� N: ";
    std::cin >> N;

    DynamicArray<int> arr(N); // ������ � ������������� ��������

    // ���� ��������� �������
    for (size_t i = 0; i < N; ++i) {
        int value;
        std::cout << "������� ������� a(" << i + 1 << "): ";
        std::cin >> value;
        arr.set(i, value);
    }

    std::cout << "�������� ������: ";
    arr.display();

    // �������� ������ ������� �� ��������� �������
    DynamicArray<int> newArr = arr.createNewArray();

    std::cout << "����� ������ (a(1)*a(2), a(2)*a(3), ...): ";
    newArr.display();

    return 0;
}