/* Ghidra address: 00786780 */
/* Ghidra symbol: FUN_00786780 */


void FUN_00786780(longlong *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  if (*(char *)((longlong)param_1 + 0x1b) != '\0') {
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  return;
}

