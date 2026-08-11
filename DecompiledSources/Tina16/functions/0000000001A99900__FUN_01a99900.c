/* Ghidra address: 01a99900 */
/* Ghidra symbol: FUN_01a99900 */


void FUN_01a99900(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x12d) == '\0') {
    *(undefined1 *)((longlong)param_1 + 300) = 1;
    (**(code **)(*param_1 + 0x50))(param_1);
    *(undefined1 *)((longlong)param_1 + 300) = 0;
  }
  return;
}

