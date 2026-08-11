/* Ghidra address: 005c5450 */
/* Ghidra symbol: FUN_005c5450 */


undefined8 FUN_005c5450(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 local_50 [64];
  
  FUN_00417580(local_50,&DAT_005bc868);
  uVar1 = *(uint *)(param_1 + 0x10) - 1;
  if (*(uint *)(param_1 + 0x10) <= uVar1) {
    FUN_00594f90();
  }
  FUN_00417c40(local_50,*(longlong *)(param_1 + 8) + (longlong)(int)uVar1 * 0x38,&DAT_005bc868);
  FUN_00417c40(param_2,local_50,&DAT_005bc868);
  FUN_00417740(local_50,&DAT_005bc868);
  return param_2;
}

