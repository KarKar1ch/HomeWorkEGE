#include <string>

int main() {
    int k = 0;
    std::wstring a = L"АБВГДЯ";

    for (char i1 : a) {
        for (char i2 : a) {
            for (char i3 : a) {
                for (char i4 : a) {
                    for (char i5 : a) {
                        int count = 0;

                        if (i1 == L'Я') ++count;
                        if (i2 == L'Я') ++count;
                        if (i3 == L'Я') ++count;
                        if (i4 == L'Я') ++count;
                        if (i5 == L'Я') ++count;

                        if (count == 3) {
                            k = k + 1;
                        }
                    }
                }
            }
        }
    }

    return 0;
}