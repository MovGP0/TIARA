/* Ghidra address: 01bb09b0 */
/* Ghidra symbol: FUN_01bb09b0 */


undefined4 FUN_01bb09b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 local_30 [4];
  int local_2c [3];
  
  uVar1 = FUN_01bb06d0(param_1,param_2,local_2c,local_30);
  if ((char)uVar1 != '\0') {
    FUN_00409a70(*(longlong *)(param_1 + 0x10) + (longlong)local_2c[0],param_3,8);
  }
  return uVar1;
}

