/* Ghidra address: 00664070 */
/* Ghidra symbol: FUN_00664070 */


void FUN_00664070(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *local_48;
  undefined8 local_40;
  
  lVar5 = *(longlong *)(param_2 + 0x28);
  if ((lVar5 != 0) && (lVar5 != *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x90))) {
    iVar2 = FUN_006605f0(lVar5);
    if (iVar2 == 1) {
      FUN_00664070(param_1,*(undefined8 *)(param_2 + 0x28));
    }
  }
  iVar2 = FUN_006605f0(*(undefined8 *)(param_2 + 0x28));
  if ((iVar2 == 1) || (*(int *)(param_2 + 0x44) == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x30) +
            *(int *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0xe;
    lVar5 = FUN_00660e40(param_2);
    if (lVar5 == 0) {
      lVar5 = FUN_00660e20(param_2);
      if (lVar5 != 0) {
        uVar6 = FUN_00660e20(param_2);
        iVar3 = FUN_00660cd0(uVar6);
        if (iVar3 - *(int *)(param_2 + 0x44) < iVar2) {
          bVar1 = true;
        }
        else {
          iVar2 = FUN_00660670(param_2);
          *(int *)(param_2 + 0x40) = iVar2 + *(int *)(param_2 + 0x44);
          uVar6 = FUN_00660e20(param_2);
          FUN_00660d90(uVar6);
        }
      }
    }
    else {
      lVar5 = FUN_00660e40(param_2);
      iVar3 = FUN_00660cd0(lVar5);
      iVar4 = FUN_00660670(lVar5);
      if ((iVar3 - iVar4) - *(int *)(param_2 + 0x44) < iVar2) {
        bVar1 = true;
      }
      else {
        iVar2 = FUN_00660cd0(lVar5);
        *(int *)(lVar5 + 0x40) = iVar2 - *(int *)(param_2 + 0x44);
        iVar2 = FUN_00660cd0(lVar5);
        *(int *)(param_2 + 0x40) = iVar2 + *(int *)(param_2 + 0x44);
        uVar6 = FUN_00660e40(param_2);
        FUN_00660d90(uVar6);
      }
    }
  }
  if (bVar1) {
    FUN_006608c0(*(undefined8 *)(param_2 + 0x28));
  }
  local_40 = *(undefined8 *)(param_1 + 0x50);
  local_48 = FUN_00663cb0;
  FUN_006612d0(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_2 + 0x28),&local_48);
  return;
}

