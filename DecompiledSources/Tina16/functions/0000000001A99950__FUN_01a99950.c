/* Ghidra address: 01a99950 */
/* Ghidra symbol: FUN_01a99950 */


void FUN_01a99950(longlong *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x11) = param_2;
  if (*(char *)((longlong)param_1 + 0x12d) == '\0') {
    (**(code **)(*param_1 + 0xe0))(param_1,*(undefined1 *)((longlong)param_1 + 0x85));
  }
  return;
}

