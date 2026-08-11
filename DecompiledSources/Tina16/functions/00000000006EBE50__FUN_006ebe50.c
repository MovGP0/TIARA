/* Ghidra address: 006ebe50 */
/* Ghidra symbol: FUN_006ebe50 */


void FUN_006ebe50(longlong param_1)

{
  if (*(char *)(param_1 + 0x4d0) == '\x01') {
    FUN_006ec660(param_1,0);
  }
  else {
    FUN_006ec660(param_1,1);
  }
  return;
}

