/* Ghidra address: 012dada0 */
/* Ghidra symbol: FUN_012dada0 */


void FUN_012dada0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) == 0) {
    *(undefined1 *)(param_1 + 0x62) = 1;
  }
  else {
    FUN_012cc700(*(longlong *)(param_1 + 0x80),0);
  }
  return;
}

