/* Ghidra address: 018cf8d0 */
/* Ghidra symbol: FUN_018cf8d0 */


void FUN_018cf8d0(longlong param_1,short *param_2)

{
  FUN_004115e0(param_1,param_2);
  if (*param_2 == -0x2fff) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}

