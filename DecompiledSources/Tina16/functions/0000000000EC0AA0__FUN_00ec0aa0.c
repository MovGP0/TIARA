/* Ghidra address: 00ec0aa0 */
/* Ghidra symbol: FUN_00ec0aa0 */


void FUN_00ec0aa0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  plVar7 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x278))(*(longlong **)(param_1 + 0x7a8));
  (**(code **)(**(longlong **)(param_1 + 0x790) + 0x278))(*(longlong **)(param_1 + 0x790));
  FUN_00414b50(&local_48,*(undefined8 *)(param_1 + 0x868));
  FUN_00414ad0(param_1 + 0x878,*(undefined8 *)(param_1 + 0x880));
  local_a4 = -1;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4a0);
  iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (0 < iVar3) {
    local_a4 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x260))
                         (*(longlong **)(param_1 + 0x6c8));
  }
  (**(code **)(**(longlong **)(param_1 + 0x7f8) + 0x278))(*(longlong **)(param_1 + 0x7f8));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7e8),0);
  if (-1 < local_a4) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_50,local_a4);
    FUN_00ea9ca0(&local_30,local_50);
    do {
      iVar3 = FUN_004170c0(&DAT_00ec10e8,local_48,1);
      FUN_00416dc0(&local_38,local_48,1,iVar3 + -1);
      iVar3 = FUN_004170c0(local_30,local_38,1);
      if (iVar3 < 1) {
        bVar2 = false;
        uVar4 = FUN_004170c0(&DAT_00ec10f8,local_48,1);
        FUN_00416e20(&local_48,1,uVar4);
      }
      else {
        bVar2 = true;
        uVar4 = FUN_004170c0(&DAT_00ec10f8,local_48,1);
        FUN_00416dc0(&local_40,local_48,1,uVar4);
        iVar3 = FUN_004170c0(&DAT_00ec10e8,local_40,1);
        iVar5 = FUN_004413f0(&DAT_00ec1108,local_40);
        iVar6 = FUN_004170c0(&DAT_00ec10e8,local_40,1);
        FUN_00416dc0(&local_40,local_40,iVar3 + 1,(iVar5 - iVar6) + -1);
        local_a4 = 0;
        local_a8 = 1;
        do {
          local_a4 = local_a4 + 1;
          FUN_00ea9ab0(&local_30,&local_40);
          iVar3 = 2;
          do {
            FUN_0043f750(&local_60,iVar3);
            FUN_00416ba0(&local_58,&DAT_00ec1118,local_60);
            iVar5 = FUN_004170c0(local_58,local_30,1);
            if ((0 < iVar5) && (local_a8 < iVar3)) {
              local_a8 = iVar3;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 != 9);
          if (local_30 != 0) {
            FUN_0043f750(&local_70,local_a4);
            FUN_00416cd0(&local_68,4,&DAT_00ec1128,local_70,&DAT_00ec1138,local_30);
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x790) + 0x4a0);
            (**(code **)(*plVar1 + 0x78))(plVar1,local_68);
            uVar4 = FUN_004170c0(&DAT_00ec114c,local_30,1);
            FUN_00416e20(&local_30,1,uVar4);
            (**(code **)(*plVar7 + 0x78))(plVar7,local_30);
          }
        } while (local_40 != 0);
        if (*(char *)(param_1 + 0x8c0) != '\0') {
          FUN_00eaa4b0(plVar7,*(undefined8 *)(param_1 + 0x858));
        }
        iVar3 = (**(code **)(*plVar7 + 0x28))();
        local_a4 = 0;
        if (-1 < iVar3 + -1) {
          do {
            FUN_0043f750(&local_80,local_a4 + 1);
            (**(code **)(*plVar7 + 0x18))(plVar7,&local_88,local_a4);
            FUN_00416cd0(&local_78,4,&DAT_00ec1128,local_80,&DAT_00ec1138,local_88);
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7a8) + 0x4a0);
            (**(code **)(*plVar1 + 0x78))(plVar1,local_78);
            local_a4 = local_a4 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    } while (((!bVar2) && (local_48 != 0)) &&
            (iVar3 = FUN_004170c0(&DAT_00ec10f8,local_48,1), iVar3 != 0));
    (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x268))(*(longlong **)(param_1 + 0x7a8),0);
    FUN_0043f750(&local_90,local_a8);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7e8),local_90);
    (**(code **)(**(longlong **)(param_1 + 0x7f8) + 0x278))(*(longlong **)(param_1 + 0x7f8));
    local_a4 = 1;
    if (0 < local_a8) {
      do {
        FUN_0043f750(&local_98,local_a4);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7f8) + 0x4f0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_98);
        local_a4 = local_a4 + 1;
        local_a8 = local_a8 + -1;
      } while (local_a8 != 0);
    }
    FUN_0043f750(&local_a0,*(undefined4 *)(param_1 + 0x8b8));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7f8),local_a0);
  }
  FUN_00ec0380(param_1);
  FUN_00410f20(plVar7);
  FUN_00414560(&local_a0,0xf);
  return;
}

