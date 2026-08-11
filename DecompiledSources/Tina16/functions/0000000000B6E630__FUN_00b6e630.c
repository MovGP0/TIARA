/* Ghidra address: 00b6e630 */
/* Ghidra symbol: FUN_00b6e630 */


void FUN_00b6e630(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    uVar1 = FUN_0044d490(&PTR_FUN_00b6aec8,1,L"Cipher not initialized");
    FUN_004134c0(uVar1);
  }
  else {
    FUN_00409a70(param_1 + 0x88,param_1 + 0x90,8);
  }
  return;
}

