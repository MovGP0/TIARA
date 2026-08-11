/* Ghidra address: 006a5190 */
/* Ghidra symbol: FUN_006a5190 */


void FUN_006a5190(longlong *param_1)

{
  if (((int)param_1[1] != 0) && (*(char *)((longlong)param_1 + 0x19) == '\0')) {
    (**(code **)(*param_1 + 0x20))(param_1);
    *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  }
  return;
}

