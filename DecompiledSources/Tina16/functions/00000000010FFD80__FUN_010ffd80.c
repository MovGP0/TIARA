/* Ghidra address: 010ffd80 */
/* Ghidra symbol: FUN_010ffd80 */


void FUN_010ffd80(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(double *)(param_1 + 0x88) == 0.0) {
    uVar1 = FUN_00f06430(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 0x88) = uVar1;
  }
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(undefined1 *)(param_1 + 0x141) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  return;
}

