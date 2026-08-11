/* Ghidra address: 01338780 */
/* Ghidra symbol: FUN_01338780 */


void FUN_01338780(longlong param_1)

{
  undefined4 uVar1;
  double dVar2;
  undefined8 uVar3;
  undefined1 local_940 [2360];
  
  FUN_00417580(local_940,&DAT_01d0d0b8);
  FUN_00417c40(local_940,*(longlong *)(param_1 + 0x780) + 0x5d8,&DAT_01d0d0b8);
  dVar2 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6e0));
  *(double *)(*(longlong *)PTR_DAT_02003c48 + 0x50) = dVar2 / 100.0;
  dVar2 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6e8));
  *(double *)(*(longlong *)PTR_DAT_02003c48 + 0xf8) = dVar2 / 100.0;
  uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x708));
  *(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0x100) = uVar3;
  uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x720));
  *(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0x108) = uVar3;
  uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x738));
  *(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0x110) = uVar3;
  uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x750));
  *(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0x118) = uVar3;
  uVar1 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x770));
  *(undefined4 *)(*(longlong *)PTR_DAT_02003c48 + 0x68) = uVar1;
  if (*(char *)(param_1 + 0x778) == '\0') {
    FUN_00417c40(*(longlong *)(param_1 + 0x780) + 0x5d8,local_940,&DAT_01d0d0b8);
  }
  FUN_00417740(local_940,&DAT_01d0d0b8);
  return;
}

