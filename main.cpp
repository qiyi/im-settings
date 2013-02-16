#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(int argc, char* argv[])
{
    //e0210804 sougou
    //e0200804 google
    setlocale(LC_CTYPE, "chs");
    printf("%ls\n", L"输入法设置 0.1 - 设置搜狗为系统默认输入法");
    printf("%ls\n", L"Copyright (C) 2013 qiyi (qiyi@isouth.org)");
    HKL hkl = LoadKeyboardLayout("e0210804", KLF_ACTIVATE);
    SystemParametersInfo(SPI_SETDEFAULTINPUTLANG, 0, &hkl,SPIF_SENDCHANGE);
    UnloadKeyboardLayout(hkl);
    return 0;
}