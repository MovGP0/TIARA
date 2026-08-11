/* Ghidra address: 00ecc490 */
/* Ghidra symbol: FUN_00ecc490 */


void FUN_00ecc490(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  plVar7 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(**(longlong **)(param_1 + 0x710) + 0x278))(*(longlong **)(param_1 + 0x710));
  FUN_00414b50(&local_50,*(undefined8 *)(param_1 + 0x8b0));
  FUN_00414ad0(param_1 + 0x8c0,*(undefined8 *)(param_1 + 0x8c8));
  local_bc = -1;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x750) + 0x4a0);
  iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (0 < iVar3) {
    local_bc = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))
                         (*(longlong **)(param_1 + 0x750));
  }
  (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0x278))(*(longlong **)(param_1 + 0x7c8));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7c0),0);
  if (-1 < local_bc) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x750) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,local_bc);
    FUN_00ea9ca0(&local_30,local_60[0]);
    FUN_00414b50(&local_40,local_30);
    do {
      iVar3 = FUN_004170c0(&DAT_00eccbc0,local_50,1);
      FUN_00416dc0(&local_38,local_50,1,iVar3 + -1);
      iVar3 = FUN_004170c0(local_30,local_38,1);
      if (iVar3 < 1) {
        bVar2 = false;
        uVar4 = FUN_004170c0(&DAT_00eccbd0,local_50,1);
        FUN_00416e20(&local_50,1,uVar4);
      }
      else {
        bVar2 = true;
        uVar4 = FUN_004170c0(&DAT_00eccbd0,local_50,1);
        FUN_00416dc0(&local_48,local_50,1,uVar4);
        iVar3 = FUN_004170c0(&DAT_00eccbc0,local_48,1);
        iVar5 = FUN_004413f0(&DAT_00eccbe0,local_48);
        iVar6 = FUN_004170c0(&DAT_00eccbc0,local_48,1);
        FUN_00416dc0(&local_48,local_48,iVar3 + 1,(iVar5 - iVar6) + -1);
        *(undefined4 *)(param_1 + 0x908) = 1;
        do {
          FUN_00ea9ab0(&local_68,&local_48);
          FUN_00ea9ef0(&local_30,local_68);
          iVar3 = 2;
          do {
            FUN_0043f750(&local_78,iVar3);
            FUN_00416ba0(&local_70,&DAT_00eccbf0,local_78);
            iVar5 = FUN_004170c0(local_70,local_30,1);
            if ((0 < iVar5) && (*(int *)(param_1 + 0x908) < iVar3)) {
              *(int *)(param_1 + 0x908) = iVar3;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 != 9);
          if (local_30 != 0) {
            (**(code **)(*plVar7 + 0x78))(plVar7,local_30);
          }
        } while (local_48 != 0);
        if ((*(char *)(param_1 + 0x900) != '\0') &&
           (iVar3 = FUN_00416db0(local_40,*(undefined8 *)(param_1 + 0x8e8)), iVar3 == 0)) {
          FUN_00eaa4b0(plVar7,*(undefined8 *)(param_1 + 0x890));
        }
        iVar3 = (**(code **)(*plVar7 + 0x28))();
        local_bc = 0;
        if (-1 < iVar3 + -1) {
          do {
            (**(code **)(*plVar7 + 0x18))(plVar7,&local_80,local_bc);
            iVar5 = FUN_004170c0(&DAT_00eccc00,local_80,1);
            if (iVar5 < 1) {
              FUN_0043f750(&local_98,local_bc + 1);
              (**(code **)(*plVar7 + 0x18))(plVar7,&local_a0,local_bc);
              FUN_00416cd0(&local_90,4,&DAT_00eccc10,local_98,&LAB_00eccc20,local_a0);
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4a0);
              (**(code **)(*plVar1 + 0x78))(plVar1,local_90);
            }
            else {
              (**(code **)(*plVar7 + 0x18))(plVar7,&local_30,local_bc);
              iVar5 = FUN_004170c0(&DAT_00eccc00,local_30,1);
              FUN_00416dc0(&local_38,local_30,1,iVar5 + -1);
              uVar4 = FUN_004170c0(&DAT_00eccc00,local_30,1);
              FUN_00416e20(&local_30,1,uVar4);
              FUN_00416cd0(&local_88,4,&DAT_00eccc10,local_38,&LAB_00eccc20,local_30);
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4a0);
              (**(code **)(*plVar1 + 0x78))(plVar1,local_88);
            }
            local_bc = local_bc + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    } while (((!bVar2) && (local_50 != 0)) &&
            (iVar3 = FUN_004170c0(&DAT_00eccbd0,local_50,1), iVar3 != 0));
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x268))(*(longlong **)(param_1 + 0x710),0);
    FUN_0043f750(&local_a8,*(undefined4 *)(param_1 + 0x908));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7c0),local_a8);
    (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0x278))(*(longlong **)(param_1 + 0x7c8));
    iVar3 = *(int *)(param_1 + 0x908);
    local_bc = 1;
    if (0 < iVar3) {
      do {
        FUN_0043f750(&local_b0,local_bc);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7c8) + 0x4f0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_b0);
        local_bc = local_bc + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_0043f750(&local_b8,*(undefined4 *)(param_1 + 0x904));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7c8),local_b8);
  }
  FUN_00ecbca0(param_1);
  FUN_00410f20(plVar7);
  FUN_00414560(&local_b8,0xc);
  FUN_00414560(&local_50,5);
  return;
}

