/* Ghidra address: 01cd7300 */
/* Ghidra symbol: FUN_01cd7300 */


void FUN_01cd7300(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0xd0))
                    (*(longlong **)(param_1 + 0x110),L"main",&DAT_01cd7408);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x110) + 0xc0))
              (*(longlong **)(param_1 + 0x110),L"main",&DAT_01cd7408);
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0xd0))
                    (*(longlong **)(param_1 + 0x110),L"main",&DAT_01cd741c);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x110) + 0xc0))
              (*(longlong **)(param_1 + 0x110),L"main",&DAT_01cd741c);
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0xd0))
                    (*(longlong **)(param_1 + 0x110),L"main",L"divs");
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x110) + 0xc0))
              (*(longlong **)(param_1 + 0x110),L"main",L"divs");
  }
  return;
}

