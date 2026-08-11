/* Ghidra address: 007444d0 */
/* Ghidra symbol: FUN_007444d0 */


void FUN_007444d0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4b9) != param_2) {
    *(char *)(param_1 + 0x4b9) = param_2;
    FUN_00654450();
  }
  return;
}

