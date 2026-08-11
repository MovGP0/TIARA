/* Ghidra address: 01cce3f0 */
/* Ghidra symbol: FUN_01cce3f0 */


void FUN_01cce3f0(longlong param_1)

{
  if (*(byte *)(param_1 + 0x70) < 2) {
    if (*(double *)(param_1 + 0xb8) * *(double *)(param_1 + 0xc0) == 0.0) {
      if (*(double *)(param_1 + 0xb8) == 0.0) {
        if (*(double *)(param_1 + 0xc0) != 0.0) {
          FUN_00f060d0(*(undefined8 *)(param_1 + 0xc0));
        }
      }
      else {
        FUN_00f060d0(*(undefined8 *)(param_1 + 0xb8));
      }
    }
    else {
      FUN_00f060d0(*(undefined8 *)(param_1 + 0xb8));
      FUN_00f060d0(*(undefined8 *)(param_1 + 0xc0));
    }
  }
  return;
}

