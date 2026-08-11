/* Ghidra address: 0184ed40 */
/* Ghidra symbol: FUN_0184ed40 */


void FUN_0184ed40(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x118) == 0) {
    FUN_00414ad0(param_1 + 0x160);
  }
  else {
    FUN_00414ad0(*(longlong *)(param_1 + 0x118) + 0x160);
  }
  return;
}

