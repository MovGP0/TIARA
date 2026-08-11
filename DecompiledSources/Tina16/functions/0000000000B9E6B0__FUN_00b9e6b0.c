/* Ghidra address: 00b9e6b0 */
/* Ghidra symbol: FUN_00b9e6b0 */


undefined1 FUN_00b9e6b0(longlong param_1,longlong *param_2,undefined8 param_3,byte *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 local_31;
  undefined8 local_30;
  int local_28 [2];
  undefined1 local_20;
  
  local_30 = 0;
  iVar2 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 8) + -4);
  }
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar2 < iVar4) {
    local_31 = 0;
  }
  else {
    *param_4 = 0;
    if ((*(short *)(*(longlong *)(param_1 + 8) + -2 + (longlong)iVar4 * 2) == 0x2f) &&
       (*(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1,
       *(short *)(*(longlong *)(param_1 + 8) + -2 + (longlong)*(int *)(param_1 + 0x10) * 2) == 0x2f)
       ) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      *param_4 = *param_4 | 1;
    }
    iVar2 = FUN_00b9eac0(param_1,0x2f,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (iVar2 == 0) {
      iVar2 = 0;
      if (*(longlong *)(param_1 + 8) != 0) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 8) + -4);
      }
      iVar2 = iVar2 + 1;
    }
    FUN_00416dc0(param_2,*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x10),
                 iVar2 - *(int *)(param_1 + 0x10));
    *(int *)(param_1 + 0x10) = iVar2;
    if (*param_2 == 0) {
      local_20 = 0;
      local_28[0] = iVar2;
      uVar6 = FUN_0044d530(&PTR_FUN_00b9cd98,1,L"Empty element at position %d",local_28,0);
      FUN_004134c0(uVar6);
    }
    iVar2 = FUN_00b9eaa0(param_1,0x5b,*param_2);
    if (iVar2 == 0) {
      iVar2 = FUN_00b9eaa0(param_1,0x5d,*param_2);
      if (0 < iVar2) {
        local_28[0] = FUN_00b9eaa0(param_1,0x5d,*param_2);
        local_20 = 0;
        uVar6 = FUN_0044d530(&PTR_FUN_00b9cd98,1,L"Invalid syntax at position %d",local_28,0);
        FUN_004134c0(uVar6);
      }
      FUN_00414480(param_3);
    }
    else {
      uVar3 = 0;
      if (*param_2 != 0) {
        uVar3 = *(undefined4 *)(*param_2 + -4);
      }
      FUN_00416dc0(&local_30,*param_2,uVar3,1);
      iVar4 = FUN_00416db0(local_30,&LAB_00b9ea78);
      if (iVar4 != 0) {
        iVar4 = 0;
        if (*param_2 != 0) {
          iVar4 = *(int *)(*param_2 + -4);
        }
        local_28[0] = *(int *)(param_1 + 0x10) + iVar4 + -1;
        local_20 = 0;
        uVar6 = FUN_0044d530(&PTR_FUN_00b9cd98,1,L"Invalid syntax at position %d",local_28,0);
        FUN_004134c0(uVar6);
      }
      iVar5 = FUN_004413f0(&LAB_00b9ea78,*param_2);
      iVar4 = 0;
      lVar1 = *param_2;
      if (lVar1 != 0) {
        iVar4 = *(int *)(lVar1 + -4);
      }
      if (iVar5 < iVar4) {
        iVar4 = 0;
        if (lVar1 != 0) {
          iVar4 = *(int *)(lVar1 + -4);
        }
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - (iVar4 - iVar5);
        FUN_00416dc0(param_2,*param_2,1,iVar5);
      }
      iVar4 = 0;
      if (*param_2 != 0) {
        iVar4 = *(int *)(*param_2 + -4);
      }
      FUN_00416dc0(param_3,*param_2,iVar2 + 1,(iVar4 - iVar2) + -1);
      iVar4 = 0;
      if (*param_2 != 0) {
        iVar4 = *(int *)(*param_2 + -4);
      }
      FUN_00416e20(param_2,iVar2,(iVar4 - iVar2) + 1);
    }
    local_31 = 1;
  }
  FUN_00414480(&local_30);
  return local_31;
}

