/* Ghidra address: 01cd4340 */
/* Ghidra symbol: FUN_01cd4340 */


void FUN_01cd4340(longlong param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x02') {
    if (*(double *)(param_1 + 0xb8) <= 0.0) {
      *(undefined8 *)(param_1 + 0xb8) = 0x3d06849b86a12b9b;
    }
    if (*(double *)(param_1 + 0xc0) <= 0.0) {
      *(double *)(param_1 + 0xc0) = *(double *)(param_1 + 0xb8) + 2e-14;
    }
  }
  return;
}

