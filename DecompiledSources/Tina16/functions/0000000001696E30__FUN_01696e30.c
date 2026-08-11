/* Ghidra address: 01696e30 */
/* Ghidra symbol: FUN_01696e30 */


void FUN_01696e30(longlong param_1)

{
  do {
    FUN_01696200(param_1,1);
    if (*(short *)(param_1 + 0x30) == DAT_01f80bea) {
      return;
    }
  } while (*(short *)(param_1 + 0x30) != DAT_01f80be8);
  return;
}

