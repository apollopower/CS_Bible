#include <iostream>

using namespace std;

int notGate(int a);
int andGate(int a, int b);
int orGate(int a, int b);
int xOrGate(int a, int b);
int muxGate(int a, int b, int sel);

int* not16(int a_bus[16]);


int main()
{
    int a_bus [16];

    for (int i = 0; i < 16; i++)
    {
        a_bus[i] = 0;
    }

    int* a_out= not16(a_bus);

    for (int i = 0; i < 16; i++) {
        cout << a_out[i] << endl;
    }

    return 0;
}



// Implementations
int andGate(int a, int b) {
    if (a == 1 && b == 1) {
        return 1;
    }
    else {
        return 0;
    }
}

int notGate(int a) {
    if (a == 1) {
        return 0;
    }
    else {
        return 1;
    }
}

int orGate(int a, int b) {
    if (a == 1 || b == 1) {
        return 1;
    }
    else {
        return 0;
    }
}

int xOrGate(int a, int b) {
    int not_a = notGate(a);
    int not_b = notGate(b);

    int w1 = andGate(a, not_b);
    int w2 = andGate(not_a, b);

    return orGate(w1, w2);
}

int muxGate(int a, int b, int sel) {
    if (sel == 0) {
        return a;
    }
    else {
        return b;
    }
}

int* not16(int a_bus[16]) {
    int a_out [16];

    for (int i = 0; i < 16; i++)
    {
        a_out[i] = notGate(a_bus[i]);
    }
    return a_out;
}