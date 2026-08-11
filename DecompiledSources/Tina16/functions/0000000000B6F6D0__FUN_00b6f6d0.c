/* Ghidra address: 00b6f6d0 */
/* Ghidra symbol: FUN_00b6f6d0 */


void FUN_00b6f6d0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((char)param_1[0xf] == '\0') {
    param_2 = 1;
    uVar1 = FUN_0044d490(&PTR_FUN_00b6aec8,1,L"Cipher not initialized");
    FUN_004134c0(uVar1);
  }
  FUN_00409a70(param_2,param_1 + 0x11,0x10);
  (**(code **)(*param_1 + 0xb8))(param_1);
  return;
}

