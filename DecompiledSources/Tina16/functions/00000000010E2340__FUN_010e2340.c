/* Ghidra address: 010e2340 */
/* Ghidra symbol: FUN_010e2340 */


void FUN_010e2340(longlong param_1)

{
  if ((*(int *)(param_1 + 0x98) == *(int *)(param_1 + 0x810)) &&
     (*(int *)(param_1 + 0x9c) != *(int *)(param_1 + 0x80c))) {
    FUN_0064cc50(param_1,*(undefined4 *)(param_1 + 0x80c));
  }
  *(undefined1 *)(param_1 + 0x824) = 1;
  *(undefined1 *)(param_1 + 0x8d0) = 1;
  return;
}

