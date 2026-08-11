/* Ghidra address: 018db4e0 */
/* Ghidra symbol: FUN_018db4e0 */


double FUN_018db4e0(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  double local_20;
  int local_18;
  int local_14;
  double local_10;
  
  local_30 = auStack_58;
  FUN_005fdf10(*(undefined8 *)(param_1 + 0x10));
  local_14 = FUN_018dc200(param_1,*(undefined8 *)(param_1 + 0x10));
  local_20 = (double)*(int *)(param_1 + 0x18) / (double)*(int *)(param_1 + 0x1c);
  local_18 = FUN_0040c840((double)((*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x50)) + 1) /
                          ((double)local_14 / local_20 + *(double *)(param_1 + 0x40)));
  if (local_18 == 0) {
    local_10 = 0.0;
  }
  else {
    local_10 = (double)((*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x50)) + 1) -
               ((double)local_14 / local_20 + *(double *)(param_1 + 0x40)) * (double)local_18;
    if (local_10 == 0.0) {
      local_10 = 0.0001;
    }
  }
  FUN_005fe090(*(undefined8 *)(param_1 + 0x10));
  return local_10;
}

