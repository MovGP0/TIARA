/* Ghidra address: 014384c0 */
/* Ghidra symbol: FUN_014384c0 */


void FUN_014384c0(longlong param_1,double param_2)

{
  undefined8 uVar1;
  
  *(double *)(param_1 + 0x10c) = param_2 * 0.8;
  *(double *)(param_1 + 0x114) = param_2 * 1.2;
  if (param_2 < 0.0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10c);
    *(undefined8 *)(param_1 + 0x10c) = *(undefined8 *)(param_1 + 0x114);
    *(undefined8 *)(param_1 + 0x114) = uVar1;
  }
  if (*(double *)(param_1 + 0x10c) == *(double *)(param_1 + 0x114)) {
    *(double *)(param_1 + 0x114) = *(double *)(param_1 + 0x10c) + 1.0;
  }
  return;
}

