/* Ghidra address: 014dbb80 */
/* Ghidra symbol: FUN_014dbb80 */


void FUN_014dbb80(longlong *param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  if (*(int *)(param_3 + 0x18) == -1) {
    param_3 = FUN_016bc3a0(param_4,*(undefined8 *)(param_3 + 8));
  }
  (**(code **)(*param_1 + 0x208))(param_1,param_2,*(undefined4 *)(param_3 + 0x18),0);
  if (*(longlong *)(param_3 + 8) != 0) {
    (**(code **)(*param_1 + 0x238))(param_1,param_2,*(longlong *)(param_3 + 8));
  }
  if (*(char *)(param_4 + 0x9aa) != '\0') {
    (**(code **)(*param_1 + 0x228))(param_1,param_2,*(undefined4 *)(param_3 + 0x1c));
  }
  return;
}

