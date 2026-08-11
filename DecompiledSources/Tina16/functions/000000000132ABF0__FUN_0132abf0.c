/* Ghidra address: 0132abf0 */
/* Ghidra symbol: FUN_0132abf0 */


void FUN_0132abf0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6c8));
  *(undefined8 *)(PTR_DAT_02004010 + 0x7e0) = uVar3;
  *(undefined8 *)(PTR_DAT_02004010 + 0x7e8) = 0x3ff0000000000000;
  if (*(double *)(PTR_DAT_02004010 + 0x7e0) <= 1e-06 &&
      *(double *)(PTR_DAT_02004010 + 0x7e0) != 1e-06) {
    *(undefined8 *)(PTR_DAT_02004010 + 0x7e0) = 0x3eb0c6f7a0b5ed8d;
  }
  dVar4 = (double)FUN_0040c2f0(*(double *)(PTR_DAT_02004010 + 0x7e0) * 1000000.0);
  dVar5 = (double)FUN_0040c2f0(0x4024000000000000);
  iVar1 = FUN_0040c840(dVar4 / dVar5);
  dVar4 = (double)FUN_0040c2f0(0x4024000000000000);
  dVar4 = (double)FUN_0040af80((double)iVar1 * dVar4);
  iVar2 = FUN_0040c840((*(double *)(PTR_DAT_02004010 + 0x7e0) * 1000000.0) / dVar4 - 0.999);
  FUN_0068e980(*(undefined8 *)(param_1 + 0x6c0),iVar1 * 9 + iVar2);
  FUN_01c88850(*(undefined8 *)(param_1 + 0x708));
  return;
}

