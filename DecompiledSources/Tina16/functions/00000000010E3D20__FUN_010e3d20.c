/* Ghidra address: 010e3d20 */
/* Ghidra symbol: FUN_010e3d20 */


void FUN_010e3d20(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_9;
  
  local_20 = auStack_48;
  local_9 = *(int *)(param_1 + 0x9c) < (*(int *)(param_1 + 0x80c) - *(int *)(param_1 + 0x814)) * 2;
  if (((*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0x820) && !(bool)local_9) &&
      (*(char *)(param_1 + 0x825) == '\0')) && (*(int *)(param_1 + 0x820) != 0)) {
    FUN_010e35e0(param_1,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x820));
    *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_1 + 0x98);
  }
  return;
}

