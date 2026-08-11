/* Ghidra address: 004b9ca0 */
/* Ghidra symbol: FUN_004b9ca0 */


int FUN_004b9ca0(longlong param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong local_res10 [3];
  int local_c;
  
  local_res10[0] = param_2;
  FUN_00419500(param_2);
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (((lVar1 < 0) || (param_4 < 0)) || (*(longlong *)(param_1 + 0x10) <= lVar1)) {
    local_c = 0;
  }
  else {
    local_c = param_4;
    if (*(longlong *)(param_1 + 0x10) <= param_4 + lVar1) {
      local_c = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x18);
    }
    FUN_00409a70(*(longlong *)(param_1 + 8) + lVar1,local_res10[0] + param_3,(longlong)local_c);
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + (longlong)local_c;
  }
  FUN_00419430(local_res10,&DAT_00406578);
  return local_c;
}

