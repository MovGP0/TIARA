/* Ghidra address: 0159fdb0 */
/* Ghidra symbol: FUN_0159fdb0 */


int FUN_0159fdb0(longlong param_1)

{
  int *piVar1;
  int local_18;
  int local_14;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
    local_14 = -0x10000;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x28);
    if (*piVar1 == 0xf) {
      local_14 = piVar1[0x12];
    }
    else {
      if (*piVar1 == 0x18) {
        local_18 = piVar1[0x6f7] - piVar1[0x12];
      }
      else {
        local_18 = 0;
      }
      local_14 = local_18;
    }
    local_14 = piVar1[0x6f6] * 0x10000 + local_14;
  }
  return local_14;
}

