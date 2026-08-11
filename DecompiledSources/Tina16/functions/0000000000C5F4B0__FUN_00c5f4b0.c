/* Ghidra address: 00c5f4b0 */
/* Ghidra symbol: FUN_00c5f4b0 */


void FUN_00c5f4b0(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x2b) == '\0') {
    if (*(char *)((longlong)param_1 + 0x2c) == '\0') {
      FUN_00c5f500(param_1);
    }
  }
  else {
    (**(code **)(*param_1 + 0x60))(param_1,500);
    *(undefined1 *)((longlong)param_1 + 0x2b) = 0;
  }
  return;
}

