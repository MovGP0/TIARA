/* Ghidra address: 019d5120 */
/* Ghidra symbol: FUN_019d5120 */


void FUN_019d5120(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = *(double *)(param_1 + 0x820 + (longlong)param_2 * 0x20) / 10.0;
  if (dVar3 < 0.0) {
    dVar3 = -dVar3;
  }
  if (param_3 == 1) {
    dVar3 = -dVar3;
  }
  uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x808),param_2);
  dVar2 = (double)FUN_00b90090(uVar1);
  dVar2 = dVar2 + dVar3;
  if ((*(double *)(param_1 + 0x828 + (longlong)param_2 * 0x20) <= dVar2) &&
     (dVar2 <= *(double *)(param_1 + 0x830 + (longlong)param_2 * 0x20))) {
    uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x808),param_2);
    FUN_00b90440(uVar1,dVar2);
  }
  FUN_019d62c0(param_1);
  return;
}

