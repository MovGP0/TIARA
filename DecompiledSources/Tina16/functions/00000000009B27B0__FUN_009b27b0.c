/* Ghidra address: 009b27b0 */
/* Ghidra symbol: FUN_009b27b0 */


undefined8 FUN_009b27b0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 local_28 [24];
  
  FUN_00417580(local_28,&DAT_009427f8);
  uVar1 = *(uint *)(param_1 + 0x10) - 1;
  if (*(uint *)(param_1 + 0x10) <= uVar1) {
    FUN_00594f90();
  }
  FUN_00417c40(local_28,*(longlong *)(param_1 + 8) + (longlong)(int)uVar1 * 0x10,&DAT_009427f8);
  FUN_00417c40(param_2,local_28,&DAT_009427f8);
  FUN_00417740(local_28,&DAT_009427f8);
  return param_2;
}

