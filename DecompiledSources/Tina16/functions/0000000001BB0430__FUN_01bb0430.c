/* Ghidra address: 01bb0430 */
/* Ghidra symbol: FUN_01bb0430 */


void FUN_01bb0430(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_01bb0040(param_1,param_2,8);
  FUN_01baffe0(param_1,8);
  FUN_00409a70(local_res18,*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x18),8);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 8;
  return;
}

