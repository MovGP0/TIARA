/* Ghidra address: 00cfa0e0 */
/* Ghidra symbol: FUN_00cfa0e0 */


void FUN_00cfa0e0(longlong param_1)

{
  undefined4 uVar1;
  undefined1 local_108 [72];
  code *local_c0;
  
  FUN_00cf8f40(DAT_01eb2478,local_108);
  uVar1 = (*local_c0)(param_1 + 0x10);
  FUN_00cf8f80(*DAT_01eb2478,uVar1,L"DeleteSecurityContext");
  return;
}

