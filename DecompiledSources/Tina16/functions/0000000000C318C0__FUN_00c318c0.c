/* Ghidra address: 00c318c0 */
/* Ghidra symbol: FUN_00c318c0 */


void FUN_00c318c0(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x44) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x44) = 0;
    (**(code **)(*param_1 + 0x48))(param_1);
  }
  return;
}

