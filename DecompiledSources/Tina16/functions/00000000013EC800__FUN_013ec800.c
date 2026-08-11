/* Ghidra address: 013ec800 */
/* Ghidra symbol: FUN_013ec800 */


void FUN_013ec800(longlong param_1,double param_2)

{
  undefined8 uVar1;
  
  *(double *)(param_1 + 0xc) = param_2 * 0.8;
  *(double *)(param_1 + 0x14) = param_2 * 1.2;
  if (param_2 < 0.0) {
    uVar1 = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0x14) = uVar1;
  }
  if (*(double *)(param_1 + 0xc) == *(double *)(param_1 + 0x14)) {
    *(double *)(param_1 + 0x14) = *(double *)(param_1 + 0xc) + 1.0;
  }
  return;
}

