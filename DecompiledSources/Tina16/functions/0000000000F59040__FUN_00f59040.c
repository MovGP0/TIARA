/* Ghidra address: 00f59040 */
/* Ghidra symbol: FUN_00f59040 */


bool FUN_00f59040(longlong param_1,double *param_2)

{
  double dVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  
  dVar1 = *param_2;
  uVar3 = FUN_01b0fa20(param_1,0);
  iVar4 = FUN_01b0fa40(param_1,0,uVar3);
  if (iVar4 == 0) {
    bVar2 = dVar1 < *(double *)(param_1 + 0x58);
  }
  else {
    bVar2 = *(double *)(param_1 + 0x58) <= dVar1;
  }
  return bVar2;
}

