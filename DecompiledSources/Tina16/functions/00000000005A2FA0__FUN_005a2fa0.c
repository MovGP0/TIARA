/* Ghidra address: 005a2fa0 */
/* Ghidra symbol: FUN_005a2fa0 */


undefined8 FUN_005a2fa0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 local_38 [40];
  
  FUN_00417580(local_38,&DAT_0059bd38);
  uVar1 = *(uint *)(param_1 + 0x10) - 1;
  if (*(uint *)(param_1 + 0x10) <= uVar1) {
    FUN_00594f90();
  }
  FUN_00417c40(local_38,*(longlong *)(param_1 + 8) + (longlong)(int)uVar1 * 0x20,&DAT_0059bd38);
  FUN_00417c40(param_2,local_38,&DAT_0059bd38);
  FUN_00417740(local_38,&DAT_0059bd38);
  return param_2;
}

