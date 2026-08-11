/* Ghidra address: 00c330a0 */
/* Ghidra symbol: FUN_00c330a0 */


void FUN_00c330a0(longlong param_1,int param_2)

{
  int local_res10;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  if (param_2 < 0) {
    local_res10 = 0;
  }
  else {
    local_res10 = param_2;
    if (1000 < param_2) {
      local_res10 = 1000;
    }
  }
  if (local_res10 != *(int *)(param_1 + 0x88)) {
    FUN_00c354f0(param_1);
    *(int *)(param_1 + 0x88) = local_res10;
    FUN_00c34470(param_1);
  }
  return;
}

