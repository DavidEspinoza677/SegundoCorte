 #include <iostream>

int main() {
    int num = 15;

    cout << "Múltiplos de 3 y 5 entre 15 y 45:" << endl;
    do {
        if (num % 3 == 0 || num % 5 == 0) {
            cout << num << " ";
        }
        num++;
    } while (num <= 45);

    cout << endl;
    return 0;
}