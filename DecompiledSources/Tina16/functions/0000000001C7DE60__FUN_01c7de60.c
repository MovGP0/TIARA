/* Ghidra address: 01c7de60 */
/* Ghidra symbol: FUN_01c7de60 */


void FUN_01c7de60(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x17f8)) {
    *(int *)(param_1 + 0x17f8) = *(int *)(param_1 + 0x17f8) + -1;
    FUN_01c7e2a0();
  }
  return;
}

