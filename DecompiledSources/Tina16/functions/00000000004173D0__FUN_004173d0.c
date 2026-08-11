/* Ghidra address: 004173d0 */
/* Ghidra symbol: FUN_004173d0 */


void FUN_004173d0(longlong *param_1,short param_2,char param_3)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 local_3c;
  longlong local_30;
  
  local_30 = 0;
  sVar2 = DAT_02006a28;
  if (*param_1 != 0) {
    sVar2 = *(short *)(*param_1 + -0xc);
  }
  if (sVar2 == param_2) {
    bVar7 = true;
  }
  else {
    iVar3 = 0;
    if (*param_1 != 0) {
      iVar3 = *(int *)(*param_1 + -4);
    }
    bVar7 = iVar3 == 0;
  }
  if (!bVar7) {
    if (param_3 == '\0') {
      FUN_00414d80(param_1);
    }
    else {
      if (*param_1 == 0) {
        sVar2 = 1;
      }
      else {
        sVar2 = *(short *)(*param_1 + -10);
      }
      if (sVar2 == 1) {
        FUN_00416880(&local_30,*param_1);
      }
      else {
        FUN_00414b50(&local_30,*param_1);
      }
      lVar1 = local_30;
      uVar6 = 0;
      if (local_30 != 0) {
        uVar6 = *(undefined4 *)(local_30 + -4);
      }
      uVar4 = FUN_00416740(local_30);
      iVar3 = FUN_004146a0(0,0,uVar4,uVar6,param_2);
      FUN_00415d10(param_1,iVar3,0);
      if (0 < iVar3) {
        local_3c = 0;
        if (*param_1 != 0) {
          local_3c = *(undefined4 *)(*param_1 + -4);
        }
        uVar6 = 0;
        if (lVar1 != 0) {
          uVar6 = *(undefined4 *)(lVar1 + -4);
        }
        uVar5 = FUN_00415ab0(*param_1);
        FUN_004146a0(uVar5,local_3c,uVar4,uVar6,param_2);
      }
    }
    iVar3 = 0;
    lVar1 = *param_1;
    if (lVar1 != 0) {
      iVar3 = *(int *)(lVar1 + -4);
    }
    if (0 < iVar3) {
      *(short *)(lVar1 + -0xc) = param_2;
    }
  }
  FUN_00414480(&local_30);
  return;
}

