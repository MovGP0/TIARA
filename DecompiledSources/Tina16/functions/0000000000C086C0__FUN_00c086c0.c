/* Ghidra address: 00c086c0 */
/* Ghidra symbol: FUN_00c086c0 */


void FUN_00c086c0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x5f4) != param_2) {
    *(char *)(param_1 + 0x5f4) = param_2;
    FUN_00c086e0();
  }
  return;
}

