/* Ghidra address: 0175af00 */
/* Ghidra symbol: FUN_0175af00 */


void FUN_0175af00(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  }
  return;
}

