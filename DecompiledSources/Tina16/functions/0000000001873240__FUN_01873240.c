/* Ghidra address: 01873240 */
/* Ghidra symbol: FUN_01873240 */


void FUN_01873240(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (*(int *)(param_1 + 0x1c) == 1) {
      FUN_00618d20(*(undefined8 *)(param_1 + 8));
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00618d20(*(undefined8 *)(param_1 + 8));
  }
  return;
}

