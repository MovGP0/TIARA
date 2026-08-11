/* Ghidra address: 00786750 */
/* Ghidra symbol: FUN_00786750 */


void FUN_00786750(longlong *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  if (*(char *)((longlong)param_1 + 0x1b) != '\0') {
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  return;
}

