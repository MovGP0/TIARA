/* Ghidra address: 01b0fd00 */
/* Ghidra symbol: FUN_01b0fd00 */


bool FUN_01b0fd00(longlong param_1,double *param_2)

{
  double dVar1;
  longlong lVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  dVar1 = *param_2;
  uVar4 = FUN_01b0fa20(param_1,0);
  uVar5 = FUN_01b0fa40(param_1,0,uVar4);
  if ((int)uVar5 < 0) {
    lVar2 = *(longlong *)(param_1 + 0x58);
    if (*(int *)(lVar2 + 0x10) == 0) {
      FUN_00594f90();
    }
    bVar3 = dVar1 < **(double **)(lVar2 + 8);
  }
  else {
    uVar6 = FUN_01b0faf0(param_1,0);
    if (uVar5 == uVar6) {
      lVar2 = *(longlong *)(param_1 + 0x58);
      uVar5 = FUN_01b0faf0(param_1,0);
      if (*(uint *)(lVar2 + 0x10) <= uVar5) {
        FUN_00594f90();
      }
      bVar3 = *(double *)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar5 * 0x10) <= dVar1;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x58);
      if (*(uint *)(lVar2 + 0x10) <= uVar5 + 1) {
        FUN_00594f90();
      }
      if (*(double *)(*(longlong *)(lVar2 + 8) + (longlong)(int)(uVar5 + 1) * 0x10) <= dVar1) {
        bVar3 = false;
      }
      else {
        lVar2 = *(longlong *)(param_1 + 0x58);
        if (*(uint *)(lVar2 + 0x10) <= uVar5) {
          FUN_00594f90();
        }
        bVar3 = *(double *)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar5 * 0x10) <= dVar1;
      }
    }
  }
  return bVar3;
}

