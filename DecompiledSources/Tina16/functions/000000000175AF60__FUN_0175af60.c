/* Ghidra address: 0175af60 */
/* Ghidra symbol: FUN_0175af60 */


void FUN_0175af60(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x40);
  }
  return;
}

