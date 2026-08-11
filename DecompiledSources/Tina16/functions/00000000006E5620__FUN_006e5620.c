/* Ghidra address: 006e5620 */
/* Ghidra symbol: FUN_006e5620 */


void FUN_006e5620(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x561)) {
    *(char *)(param_1 + 0x561) = param_2;
    FUN_006e5a00();
  }
  return;
}

