#include<windows.h>
int main(void){
    HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS,FALSE,9992);
    TerminateProcess(hProcess,123);
    return EXIT_SUCCESS;
}