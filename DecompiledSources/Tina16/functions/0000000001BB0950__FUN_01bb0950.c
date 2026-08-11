/* Ghidra address: 01bb0950 */
/* Ghidra symbol: FUN_01bb0950 */


undefined4 FUN_01bb0950(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int local_30;
  int local_2c [3];
  
  uVar1 = FUN_01bb06d0(param_1,param_2,local_2c,&local_30);
  if ((char)uVar1 != '\0') {
    *param_3 = 0;
    FUN_00409a70(*(longlong *)(param_1 + 0x10) + (longlong)local_2c[0],param_3,(longlong)local_30);
  }
  return uVar1;
}

