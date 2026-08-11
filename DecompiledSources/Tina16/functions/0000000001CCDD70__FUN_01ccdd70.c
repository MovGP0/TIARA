/* Ghidra address: 01ccdd70 */
/* Ghidra symbol: FUN_01ccdd70 */


void FUN_01ccdd70(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(double *)(param_1 + 0x88) == 0.0) {
    uVar1 = FUN_00f06430(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 0x88) = uVar1;
  }
  return;
}

