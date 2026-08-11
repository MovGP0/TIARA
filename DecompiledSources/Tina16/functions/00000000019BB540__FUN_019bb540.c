/* Ghidra address: 019bb540 */
/* Ghidra symbol: FUN_019bb540 */


void FUN_019bb540(longlong param_1,short param_2)

{
  if (*(short *)(param_1 + 0x49c) != param_2) {
    *(short *)(param_1 + 0x49c) = param_2;
    FUN_00742ed0(*(undefined8 *)(param_1 + 0x4a8),param_2);
  }
  return;
}

