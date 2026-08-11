/* Ghidra address: 01696e60 */
/* Ghidra symbol: FUN_01696e60 */


void FUN_01696e60(longlong param_1)

{
  do {
    FUN_01696200(param_1,1);
    if ((*(int *)(param_1 + 0x318) == 0) && (*(short *)(param_1 + 0x30) == 0x7d)) break;
  } while (*(short *)(param_1 + 0x30) != DAT_01f80be8);
  if ((*(int *)(param_1 + 0x318) == 0) && (*(short *)(param_1 + 0x30) == 0x7d)) {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  FUN_01696200(param_1,1);
  return;
}

