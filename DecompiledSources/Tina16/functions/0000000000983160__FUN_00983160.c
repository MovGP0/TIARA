/* Ghidra address: 00983160 */
/* Ghidra symbol: FUN_00983160 */


void FUN_00983160(longlong param_1,undefined8 param_2,wchar_t *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_3 == (wchar_t *)0x0) {
    param_3 = L"Reference document fragment not specified.";
    param_1 = FUN_0044d490(&PTR_FUN_004361b8,1);
    FUN_004134c0();
  }
  if (*(longlong *)(param_1 + 0x78) == 0) {
    param_3 = L"DOM implementation not specified.";
    param_1 = FUN_0044d490(&PTR_FUN_004361b8,1);
    FUN_004134c0();
  }
  *(wchar_t **)(*(longlong *)(param_1 + 0x90) + 0x80) = param_3;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x140))(*(longlong **)(param_1 + 0x98));
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Parser error.");
    FUN_004134c0(uVar2);
  }
  return;
}

