/* Ghidra address: 01303240 */
/* Ghidra symbol: FUN_01303240 */


void FUN_01303240(longlong param_1,int param_2,undefined4 param_3,longlong param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int local_res10;
  undefined1 auStack_c8 [36];
  undefined4 local_a4;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  ulonglong local_70 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70[0] = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_30 = 0;
  local_2c = 0;
  local_44 = 0;
  local_38 = 0;
  local_40 = 0;
  local_a4 = param_3;
  local_a0 = param_4;
  FUN_00414480(&local_58);
  local_2c = 0;
  iVar2 = FUN_006decb0();
  if (0 < iVar2 + -1) {
    local_res10 = param_2;
    if (param_2 == 4) {
      if (*(longlong *)(param_1 + 0xaf8) == 0) {
        local_res10 = 0;
      }
      else {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0xaf8) + 0x10);
        local_30 = 0;
        if (-1 < iVar2 + -1) {
          do {
            uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),local_30);
            FUN_012e5670(uVar6,local_70);
            local_38 = FUN_012e2590(*(undefined8 *)(param_1 + 0xac8),local_70[0]);
            if (local_38 != 0) {
              FUN_012dcbe0(local_38,&local_78);
              if (local_78 != 0) {
                uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),local_30);
                iVar3 = FUN_012e6020(uVar6,0);
                if (iVar3 != 0) {
                  uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),local_30);
                  FUN_012e58c0(uVar6,0,1);
                }
              }
              uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),local_30);
              iVar3 = FUN_012e5a50(uVar6,1);
              iVar4 = FUN_012dd0b0(local_38);
              if (iVar3 != iVar4) {
                uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),local_30);
                uVar5 = FUN_012dd0b0(local_38);
                FUN_012e58c0(uVar6,1,uVar5);
              }
            }
            FUN_01302d60(auStack_c8);
            local_30 = local_30 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
    }
    if (local_res10 == 0) {
      FUN_013039b0(param_1,1,0,0);
      iVar2 = FUN_006decb0();
      local_30 = 0;
      if (-1 < iVar2 + -1) {
        do {
          if (*(longlong *)(param_1 + 0xaf8) == 0) {
            FUN_013039b0(param_1,0,0,0);
          }
          lVar7 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550));
          if ((*(uint *)(*(longlong *)(lVar7 + 0x18) + 4) & 0x20) == 0x20) {
            FUN_01302d60(auStack_c8);
          }
          local_30 = local_30 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      if (*(int *)(*(longlong *)(param_1 + 0xaf8) + 0x10) == 0) {
        FUN_013039b0(param_1,1,0,0);
      }
    }
    if (local_res10 == 1) {
      lVar7 = *(longlong *)(param_1 + 0xaf8);
      if (((lVar7 == 0) || (local_a0 == 0)) ||
         ((*(uint *)(*(longlong *)(local_a0 + 0x18) + 4) & 0x20) != 0x20)) goto LAB_01303949;
      iVar2 = FUN_006dd6f0(local_a0);
      uVar6 = FUN_004aeac0(lVar7,iVar2 + -1);
      FUN_01303d50(param_1,local_a0,uVar6);
      iVar2 = FUN_006dd6f0(local_a0);
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
      FUN_012e58c0(uVar6,2,*(undefined4 *)(param_1 + 0xad0));
    }
    if (local_res10 == 3) {
      plVar8 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      iVar2 = *(int *)(*(longlong *)(param_1 + 0xaf8) + 0x10);
      local_30 = 0;
      if (-1 < iVar2 + -1) {
        do {
          bVar1 = false;
          uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),local_30);
          FUN_012e5670(uVar6,&local_60);
          for (iVar3 = 0;
              iVar4 = FUN_006decb0(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550)),
              iVar3 < iVar4; iVar3 = iVar3 + 1) {
            uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),local_30);
            FUN_012e5670(uVar6,&local_80);
            lVar7 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),iVar3);
            iVar4 = FUN_00416db0(local_80,*(undefined8 *)(lVar7 + 0x10));
            if (iVar4 == 0) {
              bVar1 = true;
              break;
            }
          }
          if (!bVar1) {
            FUN_0043f750(&local_88,local_30);
            (**(code **)(*plVar8 + 0x78))(plVar8,local_88);
          }
          local_30 = local_30 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      if (plVar8 != (longlong *)0x0) {
        local_30 = (**(code **)(*plVar8 + 0x28))(plVar8);
        local_30 = local_30 + -1;
        if (-1 < local_30) {
          do {
            if (*(longlong *)(param_1 + 0xaf8) != 0) {
              (**(code **)(*plVar8 + 0x18))(plVar8,&local_90,local_30);
              uVar5 = FUN_0043fc00(local_90);
              FUN_013039b0(param_1,4,0,uVar5);
            }
            local_30 = local_30 + -1;
          } while (local_30 != -1);
        }
      }
      if (plVar8 != (longlong *)0x0) {
        FUN_00410f20(plVar8);
      }
      iVar2 = FUN_006decb0();
      local_30 = 0;
      if (-1 < iVar2 + -1) {
        do {
          iVar3 = 0;
          lVar7 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),local_30);
          if ((*(uint *)(*(longlong *)(lVar7 + 0x18) + 4) & 0x20) == 0x20) {
            bVar1 = false;
            for (; iVar3 < *(int *)(*(longlong *)(param_1 + 0xaf8) + 0x10); iVar3 = iVar3 + 1) {
              uVar6 = FUN_004aeac0(*(longlong *)(param_1 + 0xaf8),iVar3);
              FUN_012e5670(uVar6,&local_60);
              lVar7 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),local_30)
              ;
              uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3);
              FUN_012e5670(uVar6,&local_98);
              iVar4 = FUN_00416db0(*(undefined8 *)(lVar7 + 0x10),local_98);
              if (iVar4 == 0) {
                bVar1 = true;
                break;
              }
            }
            if (!bVar1) {
              FUN_01302d60(auStack_c8);
            }
          }
          local_30 = local_30 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    if ((local_res10 == 2) && (*(longlong *)(param_1 + 0xaf8) != 0)) {
      FUN_013039b0(param_1,4,0,local_a4);
    }
  }
LAB_01303949:
  FUN_00414560(&local_98,6);
  FUN_00414560(&local_60,3);
  return;
}

