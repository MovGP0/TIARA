/* Ghidra address: 00b39560 */
/* Ghidra symbol: FUN_00b39560 */


void FUN_00b39560(longlong param_1,short param_2)

{
  if (param_2 != *(short *)(param_1 + 0x30)) {
    *(short *)(param_1 + 0x30) = param_2;
  }
  FUN_00b39c20(*(undefined8 *)(param_1 + 8),param_1);
  return;
}

