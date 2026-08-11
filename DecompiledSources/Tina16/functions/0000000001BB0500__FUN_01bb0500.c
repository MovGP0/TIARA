/* Ghidra address: 01bb0500 */
/* Ghidra symbol: FUN_01bb0500 */


void FUN_01bb0500(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_01baffe0(param_1,4);
  FUN_00409a70(local_res10,*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x18),4);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
  return;
}

