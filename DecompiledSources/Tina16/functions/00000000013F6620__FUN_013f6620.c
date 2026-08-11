/* Ghidra address: 013f6620 */
/* Ghidra symbol: FUN_013f6620 */


void FUN_013f6620(longlong param_1)

{
  if (*(int *)(*(longlong *)(param_1 + 0x6e0) + 0x4a8) == 2) {
    (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x128))(*(longlong **)(param_1 + 0x6c8),0);
    if (*(char *)(*(longlong *)(param_1 + 0x6e8) + 0xa9) == '\0') {
      FUN_01b1d750(param_1,*(undefined4 *)(param_1 + 0x98),
                   *(int *)(param_1 + 0x9c) + *(int *)(*(longlong *)(param_1 + 0x6e8) + 0x9c));
    }
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),1);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x128))(*(longlong **)(param_1 + 0x6c8),1);
    if (*(char *)(*(longlong *)(param_1 + 0x6e8) + 0xa9) != '\0') {
      FUN_01b1d750(param_1,*(undefined4 *)(param_1 + 0x98),
                   *(int *)(param_1 + 0x9c) - *(int *)(*(longlong *)(param_1 + 0x6e8) + 0x9c));
    }
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),0);
  }
  return;
}

