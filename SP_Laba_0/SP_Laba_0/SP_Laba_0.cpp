#include <Windows.h>
#include <iostream>
#include <limits>

#undef min
#undef max

using namespace std;
//Функция окрашивания текста в "Фиолетовый"
void PaintPurple(){
    HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsoleHandle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);
}
//Функция окрашивания текста в "Синий"
void PaintBlue() {
    HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsoleHandle, FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
}


int main()
{
    HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsoleHandle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
    cout << "SP Laba_0 By Alexander Linnik" << endl << endl;
    PaintPurple();
    cout << ".:| bool |:." << endl;
    PaintBlue();
    cout << "Size: " << sizeof(bool) << " Bytes" << endl; //Определение размера типа данных
    cout << "Min value: " << numeric_limits<bool>::min() << endl; //Определение минимального значения типа данных
    cout << "Max value: " << numeric_limits<bool>::max() << endl << endl; //Определение максимального значения типа данных
    //----------------------------------------------------------------------------------------
    PaintPurple();
    cout << ".:| char |:." << endl;
    PaintBlue();
    cout << "Size: " << sizeof(char) << " Bytes" << endl;
    cout << "Min value: " << (int) numeric_limits<char>::min() << endl;
    cout << "Max value: " << (int) numeric_limits<char>::max() << endl << endl;
    //----------------------------------------------------------------------------------------
    PaintPurple();
    cout << ".:| signed char |:." << endl;
    PaintBlue();
    cout << "Size: " << sizeof(signed char) << " Bytes" << endl;
    cout << "Min value: " << (int) numeric_limits<signed char>::min() << endl;
    cout << "Max value: " << (int) numeric_limits<signed char>::max() << endl << endl;
    //----------------------------------------------------------------------------------------
    PaintPurple();
    cout << ".:| unsigned char |:." << endl;
    PaintBlue();
    cout << "Size: " << sizeof(unsigned char) << " Bytes" << endl;
    cout << "Min value: " << (int) numeric_limits<unsigned char>::min() << endl;
    cout << "Max value: " << (int) numeric_limits<unsigned char>::max() << endl << endl;
    //----------------------------------------------------------------------------------------
    PaintPurple();
    cout << ".:| wchar_t |:." << endl;
    PaintBlue();
    cout << "Size: " << sizeof(wchar_t) << " Bytes" << endl;
    cout << "Min value: " << numeric_limits<wchar_t>::min() << endl;
    cout << "Max value: " << numeric_limits<wchar_t>::max() << endl << endl;
    //----------------------------------------------------------------------------------------
    PaintPurple();
    cout << ".:| char16_t |:." << endl;
    PaintBlue();
    cout << "Size: " << sizeof(char16_t) << " Bytes" << endl;
    cout << "Min value: " << numeric_limits<char16_t>::min() << endl;
    cout << "Max value: " << numeric_limits<char16_t>::max() << endl << endl;
    //----------------------------------------------------------------------------------------
    PaintPurple();
    cout << ".:| char32_t |:." << endl;
    PaintBlue();
    cout << "Size: " << sizeof(char32_t) << " Bytes" << endl;
    cout << "Min value: " << numeric_limits<char32_t>::min() << endl;
    cout << "Max value: " << numeric_limits<char32_t>::max() << endl << endl;
    //----------------------------------------------------------------------------------------
    PaintPurple();
    cout << ".:| short |:." << endl;
    PaintBlue();
    cout << "Size: " << sizeof(short) << " Bytes" << endl;
    cout << "Min value: " << numeric_limits<short>::min() << endl;
    cout << "Max value: " << numeric_limits<short>::max() << endl << endl;
    //----------------------------------------------------------------------------------------
    PaintPurple();
    cout << ".:| signed short |:." << endl;
    PaintBlue();
    cout << "Size: " << sizeof(signed short) << " Bytes" << endl;
    cout << "Min value: " << numeric_limits<signed short>::min() << endl;
    cout << "Max value: " << numeric_limits<signed short>::max() << endl << endl;
    //----------------------------------------------------------------------------------------
    PaintPurple();
    cout << ".:| unsigned short |:." << endl;
    PaintBlue();
    cout << "Size: " << sizeof(unsigned short) << " Bytes" << endl;
    cout << "Min value: " << numeric_limits<unsigned short>::min() << endl;
    cout << "Max value: " << numeric_limits<unsigned short>::max() << endl << endl;
    //----------------------------------------------------------------------------------------
    PaintPurple();
    cout << ".:| int |:." << endl;
    PaintBlue();
    cout << "Size: " << sizeof(int) << " Bytes" << endl;
    cout << "Min value: " << numeric_limits<int>::min() << endl;
    cout << "Max value: " << numeric_limits<int>::max() << endl << endl;
    //----------------------------------------------------------------------------------------
    PaintPurple();
    cout << ".:| signed int |:." << endl;
    PaintBlue();
    cout << "Size: " << sizeof(signed int) << " Bytes" << endl;
    cout << "Min value: " << numeric_limits<signed int>::min() << endl;
    cout << "Max value: " << numeric_limits<signed int>::max() << endl << endl;
    //----------------------------------------------------------------------------------------
    PaintPurple();
    cout << ".:| unsigned int |:." << endl;
    PaintBlue();
    cout << "Size: " << sizeof(unsigned int) << " Bytes" << endl;
    cout << "Min value: " << numeric_limits<unsigned int>::min() << endl;
    cout << "Max value: " << numeric_limits<unsigned int>::max() << endl << endl;
    //----------------------------------------------------------------------------------------
    PaintPurple();
    cout << ".:| long |:." << endl;
    PaintBlue();
    cout << "Size: " << sizeof(long) << " Bytes" << endl;
    cout << "Min value: " << numeric_limits<long>::min() << endl;
    cout << "Max value: " << (int)numeric_limits<long>::max() << endl << endl;
    //----------------------------------------------------------------------------------------
    PaintPurple();
    cout << ".:| signed long |:." << endl;
    PaintBlue();
    cout << "Size: " << sizeof(signed long) << " Bytes" << endl;
    cout << "Min value: " << numeric_limits<signed long>::min() << endl;
    cout << "Max value: " << numeric_limits<signed long>::max() << endl << endl;
    //----------------------------------------------------------------------------------------
    PaintPurple();
    cout << ".:| unsigned long |:." << endl;
    PaintBlue();
    cout << "Size: " << sizeof(unsigned long) << " Bytes" << endl;
    cout << "Min value: " << numeric_limits<unsigned long>::min() << endl;
    cout << "Max value: " << numeric_limits<unsigned long>::max() << endl << endl;
    //----------------------------------------------------------------------------------------
    PaintPurple();
    cout << ".:| long long |:." << endl;
    PaintBlue();
    cout << "Size: " << sizeof(long long) << " Bytes" << endl;
    cout << "Min value: " << numeric_limits<long long>::min() << endl;
    cout << "Max value: " << numeric_limits<long long>::max() << endl << endl;
    //----------------------------------------------------------------------------------------
    PaintPurple();
    cout << ".:| signed long long |:." << endl;
    PaintBlue();
    cout << "Size: " << sizeof(signed long long) << " Bytes" << endl;
    cout << "Min value: " << numeric_limits<signed long long>::min() << endl;
    cout << "Max value: " << numeric_limits<signed long long>::max() << endl << endl;
    //----------------------------------------------------------------------------------------
    PaintPurple();
    cout << ".:| unsigned long long |:." << endl;
    PaintBlue();
    cout << "Size: " << sizeof(int) << " Bytes" << endl;
    cout << "Min value: " << numeric_limits<unsigned long long>::min() << endl;
    cout << "Max value: " << numeric_limits<unsigned long long>::max() << endl << endl;
    //----------------------------------------------------------------------------------------
    PaintPurple();
    cout << ".:| float |:." << endl;
    PaintBlue();
    cout << "Size: " << sizeof(float) << " Bytes" << endl;
    cout << "Min value: " << numeric_limits<float>::min() << endl;
    cout << "Max value: " << numeric_limits<float>::max() << endl << endl;
    //----------------------------------------------------------------------------------------
    PaintPurple();
    cout << ".:| double |:." << endl;
    PaintBlue();
    cout << "Size: " << sizeof(double) << " Bytes" << endl;
    cout << "Min value: " << numeric_limits<double>::min() << endl;
    cout << "Max value: " << numeric_limits<double>::max() << endl << endl;
    //----------------------------------------------------------------------------------------
    PaintPurple();
    cout << ".:| long double |:." << endl;
    PaintBlue();
    cout << "Size: " << sizeof(long double) << " Bytes" << endl;
    cout << "Min value: " << numeric_limits<long double>::min() << endl;
    cout << "Max value: " << numeric_limits<long double>::max() << endl << endl;

    cin.get();
}


