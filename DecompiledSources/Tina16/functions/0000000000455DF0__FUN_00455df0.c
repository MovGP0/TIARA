/* Ghidra address: 00455df0 */
/* Ghidra symbol: FUN_00455df0 */


undefined1 FUN_00455df0(longlong param_1,int param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 local_2d;
  
  local_2d = 0;
  iVar8 = 0;
  if (param_4 != 0) {
    iVar8 = *(int *)(param_4 + -4);
  }
  iVar7 = 0;
  if (param_3 != 0) {
    iVar7 = *(int *)(param_3 + -4);
  }
  iVar8 = iVar8 - iVar7;
  if (iVar8 == 0) {
    lVar1 = FUN_00414de0(param_1 + 8);
    iVar8 = 0;
    if (param_4 != 0) {
      iVar8 = *(int *)(param_4 + -4);
    }
    uVar2 = FUN_00416740(param_4);
    FUN_00409a70(uVar2,lVar1 + (longlong)param_2 * 2,(longlong)(iVar8 * 2));
  }
  else {
    iVar7 = *(int *)(param_1 + 0x10);
    if (0 < iVar8) {
      iVar6 = 0;
      if (*(longlong *)(param_1 + 8) != 0) {
        iVar6 = *(int *)(*(longlong *)(param_1 + 8) + -4);
      }
      FUN_00455960(param_1,iVar7 + iVar8);
      iVar4 = 0;
      if (*(longlong *)(param_1 + 8) != 0) {
        iVar4 = *(int *)(*(longlong *)(param_1 + 8) + -4);
      }
      if (iVar6 != iVar4) {
        local_2d = 1;
      }
    }
    lVar1 = FUN_00414de0(param_1 + 8);
    iVar6 = 0;
    if (param_3 != 0) {
      iVar6 = *(int *)(param_3 + -4);
    }
    lVar3 = FUN_00414de0(param_1 + 8);
    iVar4 = 0;
    if (param_4 != 0) {
      iVar4 = *(int *)(param_4 + -4);
    }
    iVar5 = 0;
    if (param_3 != 0) {
      iVar5 = *(int *)(param_3 + -4);
    }
    FUN_00409a70(lVar1 + (longlong)(param_2 + iVar6) * 2,lVar3 + (longlong)(param_2 + iVar4) * 2,
                 (longlong)((iVar7 - (iVar5 + param_2)) * 2));
    lVar1 = FUN_00414de0(param_1 + 8);
    iVar7 = 0;
    if (param_4 != 0) {
      iVar7 = *(int *)(param_4 + -4);
    }
    uVar2 = FUN_00416740(param_4);
    FUN_00409a70(uVar2,lVar1 + (longlong)param_2 * 2,(longlong)(iVar7 * 2));
    if (iVar8 < 0) {
      FUN_00455960(param_1,*(int *)(param_1 + 0x10) + iVar8);
    }
  }
  return local_2d;
}

