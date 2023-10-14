#include <windows.h>
#include<stdio.h>
int main(void)
{
  STARTUPINFOW si={0};
  PROCESS_INFORMATION pi={0};
  if (!CreateProcessW(
          L"C:\\WINDOWS\\system32\\notepad.exe",
          NULL,
          NULL,
          NULL,
          FALSE,
          BELOW_NORMAL_PRIORITY_CLASS,
          NULL,
          NULL,
          &si,
          &pi))
  {
    printf("(-)error %ld", GetLastError());
    return EXIT_FAILURE;
  }
  printf("pid of proc: %ld",pi.dwProcessId); //not giving proper process id
  return EXIT_SUCCESS;
}