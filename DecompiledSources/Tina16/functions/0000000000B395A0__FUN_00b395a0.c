/* Ghidra address: 00b395a0 */
/* Ghidra symbol: FUN_00b395a0 */


void FUN_00b395a0(longlong param_1,short param_2)

{
  if (param_2 != *(short *)(param_1 + 0x32)) {
    *(short *)(param_1 + 0x32) = param_2;
  }
  FUN_00b39c20(*(undefined8 *)(param_1 + 8),param_1);
  return;
}

