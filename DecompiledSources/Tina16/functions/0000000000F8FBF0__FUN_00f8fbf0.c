/* Ghidra address: 00f8fbf0 */
/* Ghidra symbol: FUN_00f8fbf0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f8fbf0(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  byte bVar10;
  undefined7 uVar11;
  int local_90;
  int local_88;
  int local_84;
  int local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  int local_3c [3];
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_48 = (undefined2 *)0x0;
  local_50 = 0;
  local_58 = 0;
  lVar8 = FUN_00f8b910(param_1,param_2);
  uVar9 = FUN_004095c0(*(int *)(lVar8 + 0x34) * 4);
  *(undefined8 *)(lVar8 + 0x50) = uVar9;
  FUN_0040d200(uVar9,*(int *)(lVar8 + 0x34) * 4,0);
  iVar3 = (**(code **)(**(longlong **)(lVar8 + 0x48) + 0x28))(*(longlong **)(lVar8 + 0x48));
  *(int *)(lVar8 + 0x3c) = iVar3 + 1;
  uVar9 = FUN_004095c0((iVar3 + 1) * 8);
  *(undefined8 *)(lVar8 + 0x58) = uVar9;
  FUN_0040d200(uVar9,*(int *)(lVar8 + 0x3c) * 8,0);
  local_80 = 0;
  local_88 = -1;
  local_90 = 0;
  do {
    iVar3 = (**(code **)(**(longlong **)(lVar8 + 0x48) + 0x28))(*(longlong **)(lVar8 + 0x48));
    if (local_90 < iVar3) {
      (**(code **)(**(longlong **)(lVar8 + 0x48) + 0x18))
                (*(longlong **)(lVar8 + 0x48),&local_60,local_90);
      FUN_0043e1a0(&local_48,local_60);
      iVar3 = FUN_004170c0(L"mpasm",local_48,1);
      if (0 < iVar3) {
        local_80 = 0;
        break;
      }
      iVar3 = FUN_004170c0(L"hi-tech",local_48,1);
      if (0 < iVar3) {
        local_80 = 1;
        break;
      }
      iVar3 = FUN_004170c0(L"boostc",local_48,1);
      if (0 < iVar3) {
        local_80 = 2;
        break;
      }
      iVar3 = FUN_004170c0(L"mikrolistexporter",local_48,1);
      if (0 < iVar3) {
        local_80 = 4;
        break;
      }
      iVar3 = FUN_004170c0(L"codevision",local_48,1);
      if (0 < iVar3) {
        local_80 = 5;
        break;
      }
      iVar3 = FUN_004170c0(L"decoder",local_48,1);
      if ((iVar3 == 1) && (local_90 == 0)) {
        local_80 = 3;
        break;
      }
    }
    local_90 = local_90 + 1;
  } while (local_90 != 0xb);
  iVar4 = (**(code **)(**(longlong **)(lVar8 + 0x48) + 0x28))(*(longlong **)(lVar8 + 0x48));
  bVar1 = false;
  local_84 = -1;
  bVar10 = 0;
  local_90 = 0;
  iVar3 = iVar4;
  if (-1 < iVar4 + -1) {
    do {
      if (local_90 == 8) {
        _DAT_0202ef60 = 1;
      }
      (**(code **)(**(longlong **)(lVar8 + 0x48) + 0x18))
                (*(longlong **)(lVar8 + 0x48),&local_48,local_90);
      if ((local_80 == 0) && (iVar5 = FUN_004170c0(&DAT_00f90938,local_48,1), 0 < iVar5)) {
        iVar5 = FUN_004170c0(&DAT_00f90938,local_48,1);
        FUN_00416dc0(&local_48,local_48,1,iVar5 + -2);
        (**(code **)(**(longlong **)(lVar8 + 0x48) + 0x40))
                  (*(longlong **)(lVar8 + 0x48),local_90,local_48);
      }
      if (((local_80 == 0) && (iVar5 = FUN_004170c0(L"MEMORY USAGE",local_48,1), 0 < iVar5)) ||
         ((local_80 == 5 &&
          (iVar5 = FUN_004170c0(L"RESOURCE USE INFORMATION",local_48,1), 0 < iVar5)))) break;
      if ((local_80 == 5) && (iVar5 = FUN_004170c0(L"START OF CODE MARKER",local_48,1), 0 < iVar5))
      {
        bVar10 = 1;
      }
      if ((local_80 == 0) && (iVar5 = FUN_004170c0(L"SYMBOL TABLE",local_48,1), 0 < iVar5)) {
        if (!bVar1) {
          local_84 = local_90;
        }
        bVar1 = true;
      }
      if (local_80 == 1) {
        FUN_0043e130(&local_68,local_48);
        iVar5 = FUN_004170c0(L"SYMBOL TABLE",local_68,1);
        if (0 < iVar5) break;
      }
      if ((local_80 == 0) || (local_80 == 2)) {
        iVar5 = 0;
        if (local_48 != (undefined2 *)0x0) {
          iVar5 = *(int *)(local_48 + -2);
        }
        if ((0 < iVar5) && (cVar2 = FUN_015ef6d0(*local_48), cVar2 != '\0')) {
          *(undefined4 *)(param_1 + 0x3410) = 1;
          if (*(int *)(lVar8 + 0x18) == 0) {
            uVar9 = 0;
            iVar5 = FUN_015efc20(local_48,param_1 + 0x3410,*(undefined4 *)(param_1 + 0x33e0),0);
            FUN_015ef8b0(local_48,param_1 + 0x3410);
            uVar11 = (undefined7)((ulonglong)uVar9 >> 8);
            FUN_015efc20(local_48,param_1 + 0x3410,0);
            FUN_015ef8b0(local_48,param_1 + 0x3410);
            if (((PTR_DAT_020030c0[0xd] != '\0') && (*(int *)(lVar8 + 0x1c) == 8)) &&
               (iVar6 = FUN_004170c0(L"GOTO",local_48,1), 0 < iVar6)) {
              FUN_015efc20(local_48,param_1 + 0x3410,0,CONCAT71(uVar11,1));
              FUN_015ef8b0(local_48,param_1 + 0x3410);
            }
            iVar6 = FUN_015f0030(local_48,param_1 + 0x3410);
            if (iVar6 != -1) {
              if ((longlong)iVar5 < (longlong)(ulonglong)*(uint *)(lVar8 + 0x34)) {
                *(int *)(*(longlong *)(lVar8 + 0x50) + (longlong)iVar5 * 4) = iVar6 + -1;
              }
              FUN_00f90b20(lVar8,iVar6,iVar5);
            }
          }
          else if ((!(bool)(bVar1 & local_80 == 0)) &&
                  (iVar5 = FUN_015efc20(local_48,param_1 + 0x3410,*(undefined4 *)(param_1 + 0x33e0),
                                        0), iVar5 != -1)) {
            if ((longlong)iVar5 < (longlong)(ulonglong)*(uint *)(lVar8 + 0x34)) {
              *(int *)(*(longlong *)(lVar8 + 0x50) + (longlong)iVar5 * 4) = local_90;
            }
            FUN_00f90b20(lVar8,local_90 + 1,iVar5);
          }
        }
        if (((local_80 == 0) && (iVar5 = FUN_004170c0(L"BRANCH",local_48,1), 0 < iVar5)) &&
           (iVar5 = FUN_004170c0(&PTR_DAT_00f90a48,local_48,1), 0 < iVar5)) {
          local_88 = local_90 + 2;
          break;
        }
      }
      else if (local_80 == 1) {
        *(undefined4 *)(param_1 + 0x3410) = 1;
        FUN_015ef8b0(local_48,param_1 + 0x3410);
        FUN_015f0030(local_48,param_1 + 0x3410);
        FUN_015ef8b0(local_48,param_1 + 0x3410);
        iVar5 = FUN_015efc20(local_48,param_1 + 0x3410,0,0);
        FUN_015ef8b0(local_48,param_1 + 0x3410);
        if ((0 < iVar5) && (iVar6 = FUN_015efc20(local_48,param_1 + 0x3410,0,0), iVar6 != -1)) {
          if ((longlong)iVar5 < (longlong)(ulonglong)*(uint *)(lVar8 + 0x34)) {
            *(int *)(*(longlong *)(lVar8 + 0x50) + (longlong)iVar5 * 4) = local_90;
          }
          FUN_00f90b20(lVar8,local_90 + 1,iVar5);
        }
      }
      else if ((bool)(bVar10 & local_80 == 5)) {
        iVar5 = 0;
        if (local_48 != (undefined2 *)0x0) {
          iVar5 = *(int *)(local_48 + -2);
        }
        if ((0 < iVar5) && (cVar2 = FUN_015ef6d0(*local_48), cVar2 != '\0')) {
          *(undefined4 *)(param_1 + 0x3410) = 1;
          FUN_015ef8b0(local_48,param_1 + 0x3410);
          iVar5 = FUN_015efc20(local_48,param_1 + 0x3410,0,0);
          FUN_015ef8b0(local_48,param_1 + 0x3410);
          FUN_015efc20(local_48,param_1 + 0x3410,0);
          FUN_015ef8b0(local_48,param_1 + 0x3410);
          if (-1 < iVar5) {
            if ((longlong)iVar5 < (longlong)(ulonglong)*(uint *)(lVar8 + 0x34)) {
              *(int *)(*(longlong *)(lVar8 + 0x50) + (longlong)iVar5 * 4) = local_90;
            }
            FUN_00f90b20(lVar8,local_90 + 1,iVar5);
          }
        }
      }
      else if (local_80 == 4) {
        iVar5 = FUN_004170c0(&DAT_00f90a5c,local_48,1);
        if (iVar5 < 1) {
          iVar5 = FUN_004170c0(L"Symbol List",local_48,1);
          if (0 < iVar5) break;
          iVar5 = 0;
          if (local_48 != (undefined2 *)0x0) {
            iVar5 = *(int *)(local_48 + -2);
          }
          if ((0 < iVar5) && (cVar2 = FUN_015ef6d0(*local_48), cVar2 != '\0')) {
            *(undefined4 *)(param_1 + 0x3410) = 1;
            FUN_015ef8b0(local_48,param_1 + 0x3410);
            *(int *)(param_1 + 0x3410) = *(int *)(param_1 + 0x3410) + 2;
            iVar5 = FUN_015efc20(local_48,param_1 + 0x3410,0,0);
            FUN_015ef8b0(local_48,param_1 + 0x3410);
            *(int *)(param_1 + 0x3410) = *(int *)(param_1 + 0x3410) + 2;
            FUN_015efc20(local_48,param_1 + 0x3410,0);
            FUN_015ef8b0(local_48,param_1 + 0x3410);
            if (-1 < iVar5) {
              if ((longlong)iVar5 < (longlong)(ulonglong)*(uint *)(lVar8 + 0x34)) {
                *(int *)(*(longlong *)(lVar8 + 0x50) + (longlong)iVar5 * 4) = local_90;
              }
              FUN_00f90b20(lVar8,local_90 + 1,iVar5);
            }
          }
        }
      }
      else if (local_80 == 3) {
        *(undefined4 *)(param_1 + 0x3410) = 1;
        FUN_015ef8b0(local_48,param_1 + 0x3410);
        cVar2 = FUN_015efea0(local_48,*(undefined4 *)(param_1 + 0x3410),&local_40);
        if ((cVar2 != '\0') && (local_40 == 8)) {
          iVar5 = FUN_015efc20(local_48,param_1 + 0x3410,0,0);
          FUN_015ef8b0(local_48,param_1 + 0x3410);
          iVar5 = iVar5 - *(int *)(lVar8 + 0x38);
          if (iVar5 != -1) {
            if ((longlong)iVar5 < (longlong)(ulonglong)*(uint *)(lVar8 + 0x34)) {
              *(int *)(*(longlong *)(lVar8 + 0x50) + (longlong)iVar5 * 4) = local_90;
            }
            FUN_00f90b20(lVar8,local_90 + 1,iVar5);
          }
        }
      }
      local_90 = local_90 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if ((PTR_DAT_020030c0[0xd] == '\0') || (local_84 == -1)) {
    if (local_88 != -1) {
      local_90 = local_88;
      if (local_88 <= iVar4 + -1) {
        iVar3 = ((iVar4 + -1) - local_88) + 1;
        do {
          (**(code **)(**(longlong **)(lVar8 + 0x48) + 0x18))
                    (*(longlong **)(lVar8 + 0x48),&local_48,local_90);
          FUN_0043e1a0(&local_78,local_48);
          FUN_00414b50(&local_48,local_78);
          *(undefined4 *)(param_1 + 0x3410) = 1;
          FUN_015ef8b0(local_48,param_1 + 0x3410);
          FUN_015f0440(&local_50,local_48,param_1 + 0x3410);
          FUN_015ef8b0(local_48,param_1 + 0x3410);
          FUN_015f0440(&local_58,local_48,param_1 + 0x3410);
          uVar7 = FUN_0040e860(local_58,local_3c);
          if ((local_3c[0] == 0) && (iVar4 = FUN_004170c0(L"flowchart_label",local_48,1), 0 < iVar4)
             ) {
            uVar9 = FUN_00f8a2c0(&DAT_00f87728,1,local_50,uVar7);
            FUN_004ae7e0(*(undefined8 *)(param_1 + 0x34d8),uVar9);
          }
          local_90 = local_90 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  else {
    local_90 = local_84;
    if (local_84 <= iVar4 + -1) {
      iVar3 = ((iVar4 + -1) - local_84) + 1;
      do {
        (**(code **)(**(longlong **)(lVar8 + 0x48) + 0x18))
                  (*(longlong **)(lVar8 + 0x48),&local_48,local_90);
        FUN_0043e1a0(&local_70,local_48);
        FUN_00414b50(&local_48,local_70);
        *(undefined4 *)(param_1 + 0x3410) = 1;
        FUN_015ef8b0(local_48,param_1 + 0x3410);
        FUN_015f0440(&local_50,local_48,param_1 + 0x3410);
        iVar4 = FUN_004170c0(L"flowchart_label",local_50,1);
        if (iVar4 != 0) {
          FUN_015ef8b0(local_48,param_1 + 0x3410);
          FUN_015f0440(&local_58,local_48,param_1 + 0x3410);
          uVar7 = FUN_01aa1170(local_58);
          iVar4 = FUN_004170c0(L"flowchart_label",local_48,1);
          if (0 < iVar4) {
            uVar9 = FUN_00f8a2c0(&DAT_00f87728,1,local_50,uVar7);
            FUN_004ae7e0(*(undefined8 *)(param_1 + 0x34d8),uVar9);
          }
        }
        local_90 = local_90 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00414560(&local_78,7);
  return;
}

