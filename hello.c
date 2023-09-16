#include <windows.h>
int main(void){

    MessageBoxW(
        NULL,L"MyFirstMesg",L"Error",MB_YESNOCANCEL |MB_ICONERROR
    );
    return EXIT_SUCCESS; 
}
