/* Ghidra address: 007e7ed0 */
/* Ghidra symbol: FUN_007e7ed0 */


void FUN_007e7ed0(longlong param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 *local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  char local_49;
  longlong *local_48;
  uint local_40;
  int local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  longlong local_28;
  undefined8 local_20;
  
  local_80 = auStack_a8;
  local_88 = 0;
  iVar6 = *param_2;
  if (iVar6 < 0x112) {
    if (iVar6 == 0x111) {
      iVar6 = *(int *)(param_1 + 0x10);
      local_3c = 0;
      puVar1 = auStack_a8;
      local_80 = auStack_a8;
      if (-1 < iVar6 + -1) {
        do {
          uVar5 = FUN_004aeac0(param_1,local_3c);
          cVar2 = FUN_007e5c50(uVar5,(short)param_2[2]);
          if (cVar2 != '\0') goto LAB_007e85cd;
          local_3c = local_3c + 1;
          iVar6 = iVar6 + -1;
          puVar1 = local_80;
        } while (iVar6 != 0);
      }
    }
    else if (iVar6 == 0x2b) {
      local_28 = *(longlong *)(param_2 + 4);
      iVar6 = *(int *)(param_1 + 0x10);
      local_3c = 0;
      puVar1 = auStack_a8;
      local_80 = auStack_a8;
      plVar3 = local_48;
      if (-1 < iVar6 + -1) {
        do {
          local_48 = plVar3;
          uVar5 = FUN_004aeac0(param_1,local_3c);
          local_48 = (longlong *)FUN_007e5b00(uVar5,*(undefined4 *)(local_28 + 8),0);
          if (local_48 != (longlong *)0x0) {
            local_20 = FUN_005fe0d0(&PTR_FUN_006385a0,1);
            local_2c = thunk_FUN_03b57162(*(undefined8 *)(local_28 + 0x20));
            FUN_005ffb10(local_20,*(undefined8 *)(local_28 + 0x20));
            FUN_005ff880(local_20,*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x110));
            FUN_007e8c00(local_48,local_20,local_28 + 0x28,*(undefined2 *)(local_28 + 0x10));
            FUN_005ffb10(local_20,0);
            thunk_FUN_0402759f(*(undefined8 *)(local_28 + 0x20),local_2c);
            FUN_00410f20(local_20);
            goto LAB_007e85cd;
          }
          local_3c = local_3c + 1;
          iVar6 = iVar6 + -1;
          puVar1 = local_80;
          plVar3 = (longlong *)0x0;
        } while (iVar6 != 0);
      }
    }
    else if (iVar6 == 0x2c) {
      local_70 = *(longlong *)(param_2 + 4);
      iVar6 = *(int *)(param_1 + 0x10);
      local_3c = 0;
      puVar1 = auStack_a8;
      local_80 = auStack_a8;
      plVar3 = local_48;
      if (-1 < iVar6 + -1) {
        do {
          local_48 = plVar3;
          uVar5 = FUN_004aeac0(param_1,local_3c);
          local_48 = (longlong *)FUN_007e5b00(uVar5,*(undefined4 *)(local_70 + 8),0);
          if (local_48 != (longlong *)0x0) {
            local_38 = thunk_FUN_0411fe47(*(undefined8 *)(param_1 + 0x18));
            local_20 = FUN_005fe0d0(&PTR_FUN_006385a0,1);
            local_2c = thunk_FUN_03b57162(local_38);
            FUN_005ffb10(local_20,local_38);
            FUN_005ff880(local_20,*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x110));
            local_54 = *(undefined4 *)(local_70 + 0xc);
            local_58 = *(undefined4 *)(local_70 + 0x10);
            (**(code **)(*local_48 + 0x98))(local_48,local_20,&local_54,&local_58);
            *(undefined4 *)(local_70 + 0xc) = local_54;
            *(undefined4 *)(local_70 + 0x10) = local_58;
            FUN_005ffb10(local_20,0);
            thunk_FUN_0402759f(local_38,local_2c);
            FUN_00410f20(local_20);
            thunk_FUN_041a9b5c(*(undefined8 *)(param_1 + 0x18),local_38);
            goto LAB_007e85cd;
          }
          local_3c = local_3c + 1;
          iVar6 = iVar6 + -1;
          puVar1 = local_80;
          plVar3 = (longlong *)0x0;
        } while (iVar6 != 0);
      }
    }
    else {
      puVar1 = auStack_a8;
      if (iVar6 == 0x53) {
        local_68 = *(longlong *)(param_2 + 4);
        iVar6 = *(int *)(param_1 + 0x10);
        local_3c = 0;
        puVar1 = auStack_a8;
        if (-1 < iVar6 + -1) {
          do {
            plVar3 = (longlong *)FUN_004aeac0(param_1,local_3c);
            lVar4 = (**(code **)(*plVar3 + 0x90))(plVar3);
            if (*(longlong *)(local_68 + 0x10) == lVar4) {
              lVar4 = FUN_004aeac0(param_1,local_3c);
              local_48 = *(longlong **)(lVar4 + 0x80);
            }
            else {
              uVar5 = FUN_004aeac0(param_1,local_3c);
              local_48 = (longlong *)FUN_007e5b00(uVar5,*(undefined8 *)(local_68 + 0x10),1);
            }
            if (local_48 != (longlong *)0x0) {
              uVar5 = FUN_004aeac0(param_1,local_3c);
              local_50 = FUN_007e5bc0(uVar5,(longlong)*(int *)(local_68 + 8),1);
              if (local_50 == 0) {
                uVar5 = FUN_004aeac0(param_1,local_3c);
                local_50 = FUN_007e5bc0(uVar5,*(undefined8 *)(local_68 + 0x10),0);
              }
              lVar4 = *(longlong *)(*(longlong *)PTR_DAT_02005950 + 0xd8);
              if (lVar4 != 0) {
                if (local_50 == 0) {
                  local_50 = *(int *)(lVar4 + 0x2a8);
                }
                if ((*(byte *)(lVar4 + 0x4d0) & 8) == 0) {
                  FUN_0080dac0(*(undefined8 *)PTR_DAT_02004030,local_50);
                }
                else {
                  FUN_0080db80(*(undefined8 *)PTR_DAT_02004030,8,(longlong)local_50);
                }
              }
              goto LAB_007e85cd;
            }
            local_3c = local_3c + 1;
            iVar6 = iVar6 + -1;
            puVar1 = local_80;
          } while (iVar6 != 0);
        }
      }
    }
  }
  else if (iVar6 == 0x117) {
    iVar6 = *(int *)(param_1 + 0x10);
    local_3c = 0;
    puVar1 = auStack_a8;
    local_80 = auStack_a8;
    if (-1 < iVar6 + -1) {
      do {
        uVar5 = FUN_004aeac0(param_1,local_3c);
        cVar2 = FUN_007e5c80(uVar5,*(undefined8 *)(param_2 + 2));
        if (cVar2 != '\0') goto LAB_007e85cd;
        local_3c = local_3c + 1;
        iVar6 = iVar6 + -1;
        puVar1 = local_80;
      } while (iVar6 != 0);
    }
  }
  else if (iVar6 == 0x11f) {
    local_49 = (*(ushort *)((longlong)param_2 + 10) & 0x10) != 0;
    iVar6 = *(int *)(param_1 + 0x10);
    local_3c = 0;
    local_80 = auStack_a8;
    puVar1 = auStack_a8;
    plVar3 = local_48;
    if (-1 < iVar6 + -1) {
      do {
        local_48 = plVar3;
        local_80 = puVar1;
        if (local_49 == '\x01') {
          if (*(longlong *)(param_2 + 4) == 0) {
            local_40 = 0xffffffff;
          }
          else {
            local_40 = thunk_FUN_03ecce03(*(longlong *)(param_2 + 4),(short)param_2[2]);
          }
        }
        else {
          local_40 = (uint)*(ushort *)(param_2 + 2);
        }
        uVar5 = FUN_004aeac0(param_1,local_3c);
        local_48 = (longlong *)FUN_007e5b00(uVar5,(longlong)(int)local_40,local_49);
        if (local_48 != (longlong *)0x0) {
          FUN_00648780(&local_88,local_48[0x16]);
          FUN_0080e230(*(undefined8 *)PTR_DAT_02004030,local_88);
          goto LAB_007e85cd;
        }
        local_3c = local_3c + 1;
        iVar6 = iVar6 + -1;
        puVar1 = local_80;
        plVar3 = (longlong *)0x0;
      } while (iVar6 != 0);
    }
    FUN_0080e230(*(undefined8 *)PTR_DAT_02004030,0);
    puVar1 = local_80;
  }
  else {
    puVar1 = auStack_a8;
    if (iVar6 == 0x120) {
      iVar6 = *(int *)(param_1 + 0x10);
      local_3c = 0;
      puVar1 = auStack_a8;
      local_80 = auStack_a8;
      if (-1 < iVar6 + -1) {
        do {
          local_78 = (longlong *)FUN_004aeac0(param_1,local_3c);
          lVar4 = (**(code **)(*local_78 + 0x90))(local_78);
          if ((lVar4 == *(longlong *)(param_2 + 4)) ||
             (lVar4 = FUN_007e5b00(local_78,*(longlong *)(param_2 + 4),1), lVar4 != 0)) {
            FUN_007e6d00(local_78,param_2);
            goto LAB_007e85cd;
          }
          local_3c = local_3c + 1;
          iVar6 = iVar6 + -1;
          puVar1 = local_80;
        } while (iVar6 != 0);
      }
    }
  }
  local_80 = puVar1;
  uVar5 = thunk_FUN_03e425c0(*(undefined8 *)(param_1 + 0x18),*param_2,*(undefined8 *)(param_2 + 2),
                             *(undefined8 *)(param_2 + 4));
  *(undefined8 *)(param_2 + 6) = uVar5;
LAB_007e85cd:
  FUN_00414480(&local_88);
  return;
}

