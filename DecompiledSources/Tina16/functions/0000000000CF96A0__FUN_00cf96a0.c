/* Ghidra address: 00cf96a0 */
/* Ghidra symbol: FUN_00cf96a0 */


void FUN_00cf96a0(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  undefined1 local_108 [128];
  code *local_88;
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_00cf8f40(DAT_01eb2478,local_108);
    uVar1 = (*local_88)(*(undefined8 *)(param_1 + 0x10));
    FUN_00cf8f80(*DAT_01eb2478,uVar1,L"FreeContextBuffer");
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

