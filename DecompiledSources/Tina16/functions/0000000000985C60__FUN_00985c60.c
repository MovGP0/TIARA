/* Ghidra address: 00985c60 */
/* Ghidra symbol: FUN_00985c60 */


void FUN_00985c60(undefined8 param_1,undefined8 param_2,int param_3,longlong param_4)

{
  undefined8 uVar1;
  wchar_t *local_18;
  undefined1 local_10;
  
  if (0 < *(int *)(param_4 + 0x10)) {
    local_18 = L"last";
    local_10 = 0x11;
    param_3 = 0x985cf0;
    uVar1 = FUN_0044d530(&PTR_FUN_00901df0,1,L"Arguments mismatch error in %s().",&local_18,0);
    FUN_004134c0(uVar1);
  }
  if (param_3 < 1) {
    param_3 = 0x985d58;
    uVar1 = FUN_0044d490(&PTR_FUN_00901df0,1,L"Invalid context size.");
    FUN_004134c0(uVar1);
  }
  FUN_00990420(&PTR_FUN_00927180,1,(double)param_3);
  return;
}

