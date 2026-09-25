#include <iostream>
#include <string>

int main() {
    int k = 0;
    std::string a = "АБВГ";
    std::string b = "ЭЮЯ";

    for (char i1 : b) {
        for (char i2 : a) {
            for (char i3 : a) {
                for (char i4 : a) {
                    for (char i5 : b) {
                        k = k + 1;
                    }
                }
            }
        }
    }


    return 0;
}