/* Ghidra address: 018db610 */
/* Ghidra symbol: FUN_018db610 */


double FUN_018db610(longlong param_1)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  double local_28;
  double local_20;
  int local_18;
  int local_14;
  double local_10;
  
  local_30 = auStack_58;
  local_18 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0));
  if (local_18 == 0) {
    local_10 = 0.0;
  }
  else {
    FUN_005fdf10(*(undefined8 *)(param_1 + 0x10));
    local_20 = (double)*(int *)(param_1 + 0x18) / (double)*(int *)(param_1 + 0x1c);
    local_14 = FUN_018dc200(param_1,*(undefined8 *)(param_1 + 0x10));
    iVar1 = FUN_018dc230(param_1,*(undefined8 *)(param_1 + 0x10));
    local_28 = (double)(iVar1 - local_14) / local_20;
    FUN_005fe090(*(undefined8 *)(param_1 + 0x10));
    local_10 = ((double)local_14 / local_20 + *(double *)(param_1 + 0x40)) * (double)local_18;
    if (*(double *)(param_1 + 0x40) <= 0.0 && *(double *)(param_1 + 0x40) != 0.0) {
      local_10 = local_10 - *(double *)(param_1 + 0x40);
    }
    if ((0xc < *(int *)(param_1 + 0x2c)) && (0.0 < local_28)) {
      local_10 = local_10 + local_28;
    }
  }
  return local_10;
}

