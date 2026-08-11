/* Ghidra address: 0132ad60 */
/* Ghidra symbol: FUN_0132ad60 */


void FUN_0132ad60(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  
  *(undefined4 *)(param_1 + 0x6b8) = 0x78;
  if (*(double *)(PTR_DAT_02004010 + 0x7e0) <= 1e-06 &&
      *(double *)(PTR_DAT_02004010 + 0x7e0) != 1e-06) {
    *(undefined8 *)(PTR_DAT_02004010 + 0x7e0) = 0x3eb0c6f7a0b5ed8d;
  }
  *(undefined8 *)(PTR_DAT_02004010 + 0x7e8) = 0x3ff0000000000000;
  FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),*(undefined8 *)(PTR_DAT_02004010 + 0x7e0));
  dVar4 = (double)FUN_0040c2f0(*(double *)(PTR_DAT_02004010 + 0x7e0) * 1000000.0);
  dVar5 = (double)FUN_0040c2f0(0x4024000000000000);
  iVar1 = FUN_0040c840(dVar4 / dVar5);
  dVar4 = (double)FUN_0040c2f0(0x4024000000000000);
  dVar4 = (double)FUN_0040af80((double)iVar1 * dVar4);
  iVar2 = FUN_0040c840((*(double *)(PTR_DAT_02004010 + 0x7e0) * 1000000.0) / dVar4 - 0.999);
  FUN_0068e980(*(undefined8 *)(param_1 + 0x6c0),iVar1 * 9 + iVar2);
  *(undefined8 *)(param_1 + 0x708) = *(undefined8 *)PTR_DAT_02004e40;
  uVar3 = FUN_0064d120(param_1);
  *(undefined4 *)(param_1 + 0x718) = uVar3;
  *(undefined4 *)(param_1 + 0x714) = *(undefined4 *)(*(longlong *)(param_1 + 0x6f8) + 0x9c);
  FUN_006807e0(*(undefined8 *)(param_1 + 0x700),1);
  return;
}

