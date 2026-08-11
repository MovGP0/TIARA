/* Ghidra address: 006f0f80 */
/* Ghidra symbol: FUN_006f0f80 */


void FUN_006f0f80(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong *local_98;
  int local_90;
  int local_8c;
  undefined8 local_88;
  undefined8 local_80 [2];
  undefined8 local_70;
  longlong local_68;
  int local_60;
  undefined4 local_5c;
  undefined1 local_57;
  undefined2 local_56;
  int local_54;
  longlong local_50;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined8 local_31;
  byte local_29;
  
  local_88 = 0;
  local_80[0] = 0;
  local_50 = 0;
  local_68 = 0;
  local_a0 = param_1;
  local_98 = param_2;
  if ((*(longlong *)(*(longlong *)(param_1 + 8) + 0x508) == 0) ||
     (cVar1 = FUN_0065be20(*(longlong *)(param_1 + 8)), cVar1 != '\0')) {
    local_54 = 0;
    iVar2 = FUN_006efc30();
    local_90 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar7 = FUN_006efcb0(local_a0,local_90);
        iVar3 = FUN_006f0d60(auStack_c8,*(undefined8 *)(lVar7 + 0x30));
        iVar3 = iVar3 + 1;
        lVar7 = FUN_006efcb0(local_a0,local_90);
        iVar4 = (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x28))();
        local_8c = 0;
        if (-1 < iVar4 + -1) {
          do {
            lVar7 = FUN_006efcb0(local_a0,local_90);
            (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x18))
                      (*(longlong **)(lVar7 + 0x10),&local_88,local_8c);
            iVar5 = FUN_006f0d60(auStack_c8,local_88);
            iVar3 = iVar3 + iVar5 + 0xb;
            local_8c = local_8c + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        local_54 = local_54 + iVar3 + 0x1d;
        local_90 = local_90 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_5c = FUN_006efc30(local_a0);
    local_57 = 6;
    FUN_004b89e0(local_98,&local_57,1);
    FUN_004b89e0(local_98,&local_54,4);
    FUN_004b89e0(local_98,&local_5c,4);
    iVar2 = FUN_006efc30();
    local_90 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar7 = FUN_006efcb0(local_a0,local_90);
        local_45 = *(undefined4 *)(lVar7 + 0x18);
        local_3d = *(undefined4 *)(lVar7 + 0x24);
        local_41 = *(undefined4 *)(lVar7 + 0x28);
        local_31 = *(undefined8 *)(lVar7 + 0x40);
        local_35 = *(undefined4 *)(lVar7 + 0x48);
        local_39 = (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x28))(*(longlong **)(lVar7 + 0x10))
        ;
        FUN_00414b50(&local_50,*(undefined8 *)(lVar7 + 0x30));
        local_60 = 0;
        if (local_50 != 0) {
          local_60 = *(int *)(local_50 + -4);
        }
        if (0xff < local_60) {
          local_60 = 0xff;
        }
        local_29 = (byte)local_60;
        FUN_004b89e0(local_98,&local_45,0x1d);
        uVar8 = FUN_00414de0(&local_50);
        FUN_004b89e0(local_98,uVar8,(uint)local_29 * 2);
        iVar3 = (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x28))();
        local_8c = 0;
        if (-1 < iVar3 + -1) {
          do {
            (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x18))
                      (*(longlong **)(lVar7 + 0x10),&local_50,local_8c);
            local_60 = 0;
            if (local_50 != 0) {
              local_60 = *(int *)(local_50 + -4);
            }
            if (0xff < local_60) {
              local_60 = 0xff;
            }
            FUN_004b89e0(local_98,&local_60,1);
            uVar8 = FUN_00414de0(&local_50);
            FUN_004b89e0(local_98,uVar8,(longlong)(local_60 * 2));
            local_70 = (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x30))
                                 (*(longlong **)(lVar7 + 0x10),local_8c);
            FUN_004b89e0(local_98,&local_70,8);
            local_8c = local_8c + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        local_90 = local_90 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_006efc30();
    local_90 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar7 = FUN_006efcb0(local_a0,local_90);
        iVar3 = (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x28))();
        local_8c = 0;
        if (-1 < iVar3 + -1) {
          do {
            local_56 = FUN_006ef830(lVar7,local_8c);
            FUN_004b89e0(local_98,&local_56,2);
            local_8c = local_8c + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        local_90 = local_90 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    FUN_006f0d80(auStack_c8,local_80,*(undefined8 *)(*(longlong *)(local_a0 + 8) + 0x508));
    FUN_004194b0(&local_68,local_80[0],&DAT_00406578);
    uVar6 = 0;
    if (local_68 != 0) {
      uVar6 = *(ulonglong *)(local_68 + -8);
    }
    (**(code **)(*local_98 + 0x20))(local_98,local_68,uVar6 & 0xffffffff);
  }
  FUN_00414480(&local_88);
  FUN_00419430(local_80,&DAT_00406578);
  FUN_00419430(&local_68,&DAT_00406578);
  FUN_00414480(&local_50);
  return;
}

