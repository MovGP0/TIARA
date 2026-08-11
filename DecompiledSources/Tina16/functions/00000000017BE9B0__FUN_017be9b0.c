/* Ghidra address: 017be9b0 */
/* Ghidra symbol: FUN_017be9b0 */


void FUN_017be9b0(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0xaa) == '\0') {
    FUN_01cf0a40();
  }
  else {
    (**(code **)(*param_1 + 0xe8))(param_1);
  }
  return;
}

