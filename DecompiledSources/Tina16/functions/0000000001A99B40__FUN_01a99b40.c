/* Ghidra address: 01a99b40 */
/* Ghidra symbol: FUN_01a99b40 */


void FUN_01a99b40(longlong *param_1,undefined1 param_2)

{
  *(undefined1 *)((longlong)param_1 + 0x86) = param_2;
  if (*(char *)((longlong)param_1 + 0x12d) == '\0') {
    (**(code **)(*param_1 + 0xe0))(param_1,*(undefined1 *)((longlong)param_1 + 0x85));
  }
  return;
}

