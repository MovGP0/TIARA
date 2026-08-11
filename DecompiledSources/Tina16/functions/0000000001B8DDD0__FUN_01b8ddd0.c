/* Ghidra address: 01b8ddd0 */
/* Ghidra symbol: FUN_01b8ddd0 */


undefined8 FUN_01b8ddd0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 local_30 [32];
  
  FUN_00417580(local_30,&DAT_01b7d278);
  uVar1 = *(uint *)(param_1 + 0x10) - 1;
  if (*(uint *)(param_1 + 0x10) <= uVar1) {
    FUN_00594f90();
  }
  FUN_00417c40(local_30,*(longlong *)(param_1 + 8) + (longlong)(int)uVar1 * 0x18,&DAT_01b7d278);
  FUN_00417c40(param_2,local_30,&DAT_01b7d278);
  FUN_00417740(local_30,&DAT_01b7d278);
  return param_2;
}

