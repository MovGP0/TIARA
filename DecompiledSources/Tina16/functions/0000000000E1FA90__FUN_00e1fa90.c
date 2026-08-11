/* Ghidra address: 00e1fa90 */
/* Ghidra symbol: FUN_00e1fa90 */


void FUN_00e1fa90(double param_1,double param_2,double param_3,double *param_4,undefined8 param_5,
                 int *param_6)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  
  if (0.0 < param_2) {
    dVar1 = (double)FUN_0040c760(*(undefined8 *)(param_6 + 0x68));
    dVar1 = (double)FUN_00b90620(0,dVar1 - param_2 / (dVar1 + dVar1));
  }
  else {
    dVar1 = (double)FUN_0040c760(*(double *)(param_6 + 0x68) - param_2);
  }
  *param_4 = *(double *)(param_6 + 0x76) * (double)*param_6 + *(double *)(param_6 + 0x94) * dVar1;
  param_3 = param_3 - *param_4;
  uVar2 = FUN_00b90620(param_3,0);
  *(undefined8 *)(param_6 + 0xa4) = uVar2;
  if (0.0 < dVar1) {
    dVar1 = *(double *)(param_6 + 0x94) / (dVar1 + dVar1);
  }
  else {
    dVar1 = 0.0;
  }
  if (0.0 < param_3) {
    dVar3 = *(double *)(param_6 + 0x9c) * (*(double *)(param_6 + 0x4c) * param_1 + 1.0);
    if (param_1 < param_3) {
      *(double *)(param_6 + 0x2a) = dVar3 * param_1 * (param_3 - param_1 * 0.5);
      *(double *)(param_6 + 0x22) = dVar3 * param_1;
      *(double *)(param_6 + 0x24) =
           dVar3 * (param_3 - param_1) +
           *(double *)(param_6 + 0x4c) * *(double *)(param_6 + 0x9c) * param_1 *
           (param_3 - param_1 * 0.5);
      *(double *)(param_6 + 0x26) = *(double *)(param_6 + 0x22) * dVar1;
    }
    else {
      *(double *)(param_6 + 0x2a) = dVar3 * param_3 * param_3 * 0.5;
      *(double *)(param_6 + 0x22) = dVar3 * param_3;
      *(double *)(param_6 + 0x24) =
           *(double *)(param_6 + 0x4c) * *(double *)(param_6 + 0x9c) * param_3 * param_3 * 0.5;
      *(double *)(param_6 + 0x26) = *(double *)(param_6 + 0x22) * dVar1;
    }
  }
  else {
    param_6[0x2a] = 0;
    param_6[0x2b] = 0;
    param_6[0x22] = 0;
    param_6[0x23] = 0;
    param_6[0x24] = 0;
    param_6[0x25] = 0;
    param_6[0x26] = 0;
    param_6[0x27] = 0;
  }
  return;
}

