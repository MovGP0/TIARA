/* Ghidra address: 015ffe20 */
/* Ghidra symbol: FUN_015ffe20 */


void FUN_015ffe20(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int local_d4;
  int local_d0;
  int local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_5c [4];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_c0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_48 = 0;
  local_50 = 0;
  local_68 = 0;
  iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  local_d4 = 0;
  local_d0 = 0;
  while (local_d4 <= iVar1 + -1) {
    lVar4 = FUN_00f81cc0(*(undefined8 *)(param_1 + 8),local_d4);
    uVar2 = 1;
    if (param_3 == 1) {
      if (*(int *)(lVar4 + 0x20) < 0) {
        FUN_00f81470(lVar4,&local_88);
        FUN_00415dd0(&local_48,local_88,0);
      }
      else {
        FUN_00f81530(lVar4,local_80);
        FUN_00415dd0(&local_48,local_80[0],0);
      }
    }
    else {
      FUN_00f81470(lVar4,&local_90);
      FUN_00415dd0(&local_48,local_90,0);
      FUN_00416880(&local_98,local_48);
      iVar3 = FUN_004170c0(&DAT_01600338,local_98);
      if (0 < iVar3) {
        FUN_00415ad0(&local_a0,local_48,iVar3 + 3,0xff);
        FUN_00416880(&local_38,local_a0);
        uVar2 = FUN_0040e860(local_38,&local_3c);
        if (local_3c != 0) {
          uVar2 = 1;
        }
      }
    }
    local_d4 = local_d4 + 1;
    FUN_015f15d0(&local_50,local_48);
    iVar3 = FUN_00416db0(*(undefined8 *)(lVar4 + 0x18),&DAT_0160034c);
    if ((iVar3 == 0) && (*(char *)(lVar4 + 0x38) == '\0')) {
      FUN_00416880(&local_a8,local_50);
      FUN_01cc34d0(*(undefined8 *)(param_2 + 8),local_a8,uVar2,0);
      iVar3 = *(int *)(*(longlong *)(lVar4 + 0x30) + 0x10);
      local_cc = 0;
      if (-1 < iVar3 + -1) {
        do {
          FUN_00f815d0(lVar4,local_cc,&local_58,local_5c);
          FUN_01cc56d0(param_2,local_d0,local_58);
          local_cc = local_cc + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_d0 = local_d0 + 1;
    }
    else {
      iVar3 = FUN_00416db0(*(undefined8 *)(lVar4 + 0x18),&DAT_0160035c);
      if (iVar3 == 0) {
        plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
        iVar3 = *(int *)(lVar4 + 0x24);
        local_cc = 0;
        if (-1 < iVar3 + -1) {
          do {
            FUN_0043f750(&local_b8,local_cc);
            FUN_00416ba0(&local_b0,&DAT_01600338,local_b8);
            (**(code **)(*plVar5 + 0x80))(plVar5,local_b0,(longlong)local_cc);
            local_cc = local_cc + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        FUN_00416880(&local_c0,local_50);
        FUN_00416880(&local_c8,local_50);
        lVar6 = FUN_01cc35a0(*(undefined8 *)(param_2 + 8),local_c0,local_c8,plVar5,0);
        *(undefined1 *)(lVar6 + 0x50) = 3;
        FUN_00414480();
        iVar3 = *(int *)(*(longlong *)(lVar4 + 0x30) + 0x10);
        local_cc = 0;
        if (-1 < iVar3 + -1) {
          do {
            FUN_00f817a0(lVar4,local_cc,&local_58,&local_70);
            FUN_01cc5750(param_2,local_d0,local_58,local_70);
            local_cc = local_cc + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        local_d0 = local_d0 + 1;
        FUN_00410f20(plVar5);
      }
    }
  }
  FUN_00414560(&local_c8,5);
  FUN_004144d0(&local_a0);
  FUN_00414560(&local_98,4);
  FUN_00414480(&local_68);
  FUN_00414590(&local_50,2);
  FUN_00414560(&local_38,2);
  return;
}

