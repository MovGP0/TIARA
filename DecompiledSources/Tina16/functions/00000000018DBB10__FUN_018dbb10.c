/* Ghidra address: 018dbb10 */
/* Ghidra symbol: FUN_018dbb10 */


double FUN_018dbb10(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_14;
  
  local_30 = auStack_58;
  FUN_005fdf10(*(undefined8 *)(param_1 + 0x10));
  local_14 = FUN_018dc200(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_005fe090(*(undefined8 *)(param_1 + 0x10));
  return (double)local_14 / ((double)*(int *)(param_1 + 0x18) / (double)*(int *)(param_1 + 0x1c)) +
         *(double *)(param_1 + 0x40);
}

