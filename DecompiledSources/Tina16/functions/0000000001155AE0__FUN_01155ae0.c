/* Ghidra address: 01155ae0 */
/* Ghidra symbol: FUN_01155ae0 */


void FUN_01155ae0(longlong param_1)

{
  if (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4a8) == 0) {
    if (*(char *)(*(longlong *)(param_1 + 0x6d8) + 0xa9) != '\0') {
      FUN_01b1d750(param_1,*(undefined4 *)(param_1 + 0x98),
                   *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x7cc));
    }
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6d8),0);
  }
  else {
    if (*(char *)(*(longlong *)(param_1 + 0x6d8) + 0xa9) == '\0') {
      FUN_01b1d750(param_1,*(undefined4 *)(param_1 + 0x98),
                   *(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0x7cc));
    }
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6d8),1);
    FUN_006d8180(*(undefined8 *)(param_1 + 0x6d8),
                 *(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4a8) + -1);
  }
  return;
}

