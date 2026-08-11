/* Ghidra address: 01b0fe40 */
/* Ghidra symbol: FUN_01b0fe40 */


undefined8 FUN_01b0fe40(longlong param_1,double *param_2)

{
  double dVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uStack_3c;
  
  dVar1 = *param_2;
  lVar2 = *(longlong *)(param_1 + 0x58);
  if (*(int *)(lVar2 + 0x10) == 0) {
    FUN_00594f90();
  }
  if (**(double **)(lVar2 + 8) <= dVar1) {
    lVar2 = *(longlong *)(param_1 + 0x58);
    uVar3 = FUN_01b0faf0(param_1,0);
    if (*(uint *)(lVar2 + 0x10) <= uVar3) {
      FUN_00594f90();
    }
    if (dVar1 < *(double *)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar3 * 0x10)) {
      uVar3 = 0;
      while( true ) {
        uVar5 = uVar3 + 1;
        lVar2 = *(longlong *)(param_1 + 0x58);
        if (*(int *)(lVar2 + 0x10) <= (int)uVar5) break;
        if (*(uint *)(lVar2 + 0x10) <= uVar5) {
          FUN_00594f90();
        }
        if (dVar1 < *(double *)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar5 * 0x10)) {
          lVar2 = *(longlong *)(param_1 + 0x58);
          if (*(uint *)(lVar2 + 0x10) <= uVar3) {
            FUN_00594f90();
          }
          if (*(double *)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar3 * 0x10) <= dVar1) break;
        }
        uVar3 = uVar3 + 1;
      }
      iVar4 = uVar3 + 1;
    }
    else {
      iVar4 = FUN_01b0fad0(param_1,0);
      iVar4 = iVar4 + -1;
    }
  }
  else {
    iVar4 = 0;
  }
  return CONCAT44(uStack_3c,iVar4);
}

