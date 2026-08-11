/* Ghidra address: 01bb0340 */
/* Ghidra symbol: FUN_01bb0340 */


void FUN_01bb0340(longlong param_1,int param_2)

{
  int local_res10 [6];
  
  local_res10[0] = param_2;
  if ((*(int *)(param_1 + 0x20) == 1) && (0xff < param_2)) {
    FUN_00413fb0();
  }
  FUN_00409a70(local_res10,
               *(longlong *)(param_1 + 0x10) +
               (longlong)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x20)),
               (longlong)*(int *)(param_1 + 0x20));
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + local_res10[0];
  return;
}

