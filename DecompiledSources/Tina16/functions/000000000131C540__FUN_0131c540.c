/* Ghidra address: 0131c540 */
/* Ghidra symbol: FUN_0131c540 */


void FUN_0131c540(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x90) == 0) {
    *(undefined1 *)(param_1 + 0x72) = 1;
  }
  else {
    FUN_012cc700(*(longlong *)(param_1 + 0x90),0);
  }
  return;
}

