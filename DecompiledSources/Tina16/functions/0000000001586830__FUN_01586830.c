/* Ghidra address: 01586830 */
/* Ghidra symbol: FUN_01586830 */


undefined8 FUN_01586830(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 local_5a [74];
  
  FUN_00417580(local_5a,&DAT_015764a8);
  uVar1 = *(uint *)(param_1 + 0x10) - 1;
  if (*(uint *)(param_1 + 0x10) <= uVar1) {
    FUN_00594f90();
  }
  FUN_00417c40(local_5a,*(longlong *)(param_1 + 8) + (longlong)(int)uVar1 * 0x42,&DAT_015764a8);
  FUN_00417c40(param_2,local_5a,&DAT_015764a8);
  FUN_00417740(local_5a,&DAT_015764a8);
  return param_2;
}

