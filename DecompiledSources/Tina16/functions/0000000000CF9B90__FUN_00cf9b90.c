/* Ghidra address: 00cf9b90 */
/* Ghidra symbol: FUN_00cf9b90 */


void FUN_00cf9b90(longlong param_1)

{
  undefined4 uVar1;
  undefined1 local_118 [32];
  code *local_f8;
  
  FUN_00cf8f40(DAT_01eb2478,local_118);
  uVar1 = (*local_f8)(param_1 + 0x10);
  FUN_00cf8f80(*DAT_01eb2478,uVar1,L"FreeCredentialsHandle");
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  return;
}

