/* Ghidra address: 016f8e60 */
/* Ghidra symbol: FUN_016f8e60 */


void FUN_016f8e60(longlong param_1)

{
  double dVar1;
  undefined8 uVar2;
  
  if (0.050000002660624 < *(double *)(param_1 + 0x478) ||
      *(double *)(param_1 + 0x478) == 0.050000002660624) {
    *(undefined8 *)(param_1 + 0x480) = 0x3ff0000000000000;
  }
  else if (0.025000001330312 < *(double *)(param_1 + 0x478) ||
           *(double *)(param_1 + 0x478) == 0.025000001330312) {
    dVar1 = *(double *)(param_1 + 0x478) / 0.03535534 - 1.4142136;
    *(double *)(param_1 + 0x480) = 1.0 - dVar1 * dVar1 * 0.99;
  }
  else {
    dVar1 = *(double *)(param_1 + 0x478) / 0.03535534;
    *(double *)(param_1 + 0x480) = dVar1 * dVar1 * 0.99 + 0.01;
  }
  uVar2 = FUN_00b90650(*(undefined8 *)(param_1 + 0x480),0x3ff0000000000000);
  *(undefined8 *)(param_1 + 0x480) = uVar2;
  return;
}

