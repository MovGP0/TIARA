/* Ghidra address: 01400ee0 */
/* Ghidra symbol: FUN_01400ee0 */


void FUN_01400ee0(longlong param_1)

{
  byte bVar1;
  short sVar2;
  longlong *plVar3;
  byte *pbVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined1 auStack_d8 [32];
  uint local_b8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  short *local_30;
  
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_30 = (short *)0x0;
  local_38 = 0;
  local_40 = 0;
  if (*(short *)(param_1 + 0x888) == 0xa1) {
    *(undefined1 *)(param_1 + 0x88b) = 1;
    plVar3 = *(longlong **)(param_1 + 0x878);
    if (plVar3[0xa2] != 0) {
      local_a0 = 0;
      local_9c = 0;
      iVar10 = 0;
      iVar7 = (**(code **)(*plVar3 + 0x1c8))();
      local_a4 = 0;
      if (-1 < iVar7 + -1) {
        do {
          (**(code **)(*plVar3 + 0x298))(plVar3,&local_30,local_a4);
          if (*local_30 == 0x4e) {
            local_a0 = local_a0 + 1;
          }
          else if (*local_30 == 0x56) {
            local_9c = local_9c + 1;
          }
          else {
            iVar10 = iVar10 + 1;
            if (iVar10 == 1) {
              iVar8 = FUN_004170c0(&DAT_01401a60,local_30,1);
              if (iVar8 < 1) {
                (**(code **)(**(longlong **)(param_1 + 0x810) + 0x268))
                          (*(longlong **)(param_1 + 0x810),1);
              }
              else {
                (**(code **)(**(longlong **)(param_1 + 0x808) + 0x268))
                          (*(longlong **)(param_1 + 0x808),1);
              }
            }
          }
          local_a4 = local_a4 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      FUN_006ec4a0(*(undefined8 *)(param_1 + 0x7f0),local_a0);
      FUN_006ec4a0(*(undefined8 *)(param_1 + 0x7f8),(longlong)local_9c / 2 & 0xffffffff);
      (**(code **)(**(longlong **)(param_1 + 0x818) + 0x268))
                (*(longlong **)(param_1 + 0x818),1 < iVar10);
      FUN_01400490(param_1);
    }
    FUN_006d68c0(*(undefined8 *)(param_1 + 0x6b8),0);
    FUN_006d68c0(*(undefined8 *)(param_1 + 0x6e0),0);
  }
  else {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7c0),0);
    iVar7 = FUN_0064d120(param_1);
    FUN_007fdf10(param_1,iVar7 - *(int *)(*(longlong *)(param_1 + 0x7c0) + 0x9c));
    sVar2 = *(short *)(param_1 + 0x888);
    if ((((sVar2 == 0x36) || (sVar2 == 0x37)) || (sVar2 == 0x11)) || (sVar2 == 0x13)) {
      *(undefined1 *)(param_1 + 0x88a) = 1;
      FUN_006d68c0(*(undefined8 *)(param_1 + 0x730),0);
      FUN_006d68c0(*(undefined8 *)(param_1 + 0x760),0);
    }
    else {
      *(undefined1 *)(param_1 + 0x88a) = 0;
    }
    sVar2 = *(short *)(param_1 + 0x888);
    if (((sVar2 == 0x12) || (sVar2 == 0x14)) || ((sVar2 == 0x11 || (sVar2 == 0x13)))) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 0x88c) = uVar5;
    sVar2 = *(short *)(param_1 + 0x888);
    if ((sVar2 == 0x12) || (sVar2 == 0x14)) {
      uVar9 = (undefined4)CONCAT71((uint7)(byte)((ushort)sVar2 >> 8),1);
    }
    else {
      uVar9 = 0;
    }
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x828),uVar9);
    if (*(char *)(param_1 + 0x88c) != '\0') {
      iVar7 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x880) + 8) + 0x28))();
      local_a4 = 0;
      if (-1 < iVar7 + -1) {
        do {
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x880) + 8);
          (**(code **)(*plVar3 + 0x18))(plVar3,local_50,local_a4);
          uVar12 = FUN_004170c0(&DAT_01401a74,local_50[0],1);
          (**(code **)(**(longlong **)(param_1 + 0x828) + 0x268))
                    (*(longlong **)(param_1 + 0x828),
                     CONCAT71((int7)((ulonglong)uVar12 >> 8),0 < (int)uVar12) & 0xffffffff);
          cVar6 = (**(code **)(**(longlong **)(param_1 + 0x828) + 0x260))
                            (*(longlong **)(param_1 + 0x828));
          if (cVar6 != '\0') break;
          local_a4 = local_a4 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    sVar2 = *(short *)(param_1 + 0x888);
    if ((((sVar2 == 0x36) || (sVar2 == 0x37)) || (sVar2 == 0x84)) || (sVar2 == 0x85)) {
      lVar11 = FUN_019a45d0();
      iVar7 = *(int *)(lVar11 + 0x10);
      iVar10 = 0;
      if (-1 < iVar7 + -1) {
        do {
          uVar12 = FUN_00b94e60(lVar11,iVar10);
          FUN_01400c40(auStack_d8,uVar12);
          iVar10 = iVar10 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else {
      FUN_01400490(param_1);
    }
    if (*(char *)(param_1 + 0x88c) != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x268))(*(longlong **)(param_1 + 0x6d8),0);
    }
  }
  *(undefined4 *)(param_1 + 0x8a0) = *(undefined4 *)(*(longlong *)(param_1 + 0x710) + 0x4e0);
  *(undefined4 *)(param_1 + 0x8a4) = *(undefined4 *)(*(longlong *)(param_1 + 0x790) + 0x4e0);
  *(undefined4 *)(param_1 + 0x898) = 800;
  *(undefined4 *)(param_1 + 0x89c) = 800;
  uVar12 = FUN_00409570((longlong)*(int *)(param_1 + 0x898));
  *(undefined8 *)(param_1 + 0x8b0) = uVar12;
  uVar12 = FUN_00409570((longlong)*(int *)(param_1 + 0x89c));
  *(undefined8 *)(param_1 + 0x8b8) = uVar12;
  pbVar4 = *(byte **)(param_1 + 0x880);
  bVar1 = pbVar4[0x40];
  if (bVar1 == 1) {
    FUN_006d78a0(*(undefined8 *)(param_1 + 0x6b0),*(undefined8 *)(param_1 + 0x6e0));
    FUN_00f04fa0(*(undefined8 *)(param_1 + 0x700),*pbVar4);
    while (*(int *)(param_1 + 0x898) < (int)((uint)*(ushort *)(pbVar4 + 0x10) << 3)) {
      *(int *)(param_1 + 0x898) = *(int *)(param_1 + 0x898) + 800;
      FUN_00409620(param_1 + 0x8b0,(longlong)*(int *)(param_1 + 0x898));
    }
    FUN_00409a70(*(undefined8 *)(pbVar4 + 0x18),*(undefined8 *)(param_1 + 0x8b0),
                 (ulonglong)*(ushort *)(pbVar4 + 0x10) << 3);
    uVar12 = FUN_00409570((uint)*pbVar4 * 2);
    uVar14 = (uint)*(ushort *)(pbVar4 + 0x10);
    local_a4 = 0;
    if (-1 < (int)(uVar14 - 1)) {
      do {
        local_b8 = (uint)*pbVar4;
        FUN_014002c0(param_1,&local_58,uVar12,local_a4 + 1);
        uVar13 = FUN_014313c0(&PTR_FUN_0142bf08,1,
                              *(longlong *)(param_1 + 0x8b0) + (longlong)local_a4 * 8,0);
        FUN_00b0ab70(*(undefined8 *)(param_1 + 0x710),local_58,uVar13);
        local_a4 = local_a4 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    FUN_004095f0(uVar12);
    *(uint *)(param_1 + 0x890) = (uint)*(ushort *)(pbVar4 + 0x10);
    iVar7 = (**(code **)(**(longlong **)(pbVar4 + 8) + 0x28))();
    local_a4 = 0;
    if (-1 < iVar7 + -1) {
      do {
        (**(code **)(**(longlong **)(pbVar4 + 8) + 0x18))
                  (*(longlong **)(pbVar4 + 8),&local_60,local_a4);
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4a0);
        iVar10 = (**(code **)(*plVar3 + 0xb0))(plVar3,local_60);
        if (-1 < iVar10) {
          FUN_0068bd10(*(undefined8 *)(param_1 + 0x6f0),iVar10,1);
        }
        local_a4 = local_a4 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    FUN_00848a70(*(undefined8 *)(param_1 + 0x710),*(undefined2 *)(pbVar4 + 0x10));
  }
  else if (bVar1 == 2) {
    FUN_006d78a0(*(undefined8 *)(param_1 + 0x6b0),*(undefined8 *)(param_1 + 0x730));
    if (**(char **)(pbVar4 + 0x20) != '\x1f') {
      FUN_004167a0(&local_68,*(char **)(pbVar4 + 0x20));
      FUN_0064de00(*(undefined8 *)(param_1 + 0x740),local_68);
    }
  }
  else if (bVar1 == 3) {
    FUN_004167a0(&local_70,*(undefined8 *)(pbVar4 + 0x20));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x770),local_70);
    FUN_006d78a0(*(undefined8 *)(param_1 + 0x6b0),*(undefined8 *)(param_1 + 0x760));
    while (*(int *)(param_1 + 0x89c) < (int)((uint)*(ushort *)(pbVar4 + 0x48) << 3)) {
      *(int *)(param_1 + 0x89c) = *(int *)(param_1 + 0x89c) + 800;
      FUN_00409620(param_1 + 0x8b8,(longlong)*(int *)(param_1 + 0x89c));
    }
    FUN_00409a70(*(undefined8 *)(pbVar4 + 0x50),*(undefined8 *)(param_1 + 0x8b8),
                 (ulonglong)*(ushort *)(pbVar4 + 0x48) << 3);
    uVar14 = *(ushort *)(pbVar4 + 0x48) / 2;
    local_a4 = 0;
    if (-1 < (int)(uVar14 - 1)) {
      do {
        iVar10 = local_a4 + 1;
        FUN_0043f750(&local_80,iVar10);
        FUN_00416ba0(&local_78,L"Input #",local_80);
        iVar7 = local_a4 * 2;
        uVar12 = FUN_014313c0(&PTR_FUN_0142bf08,1,
                              *(longlong *)(param_1 + 0x8b8) + (longlong)iVar7 * 8,0);
        FUN_00b0ab70(*(undefined8 *)(param_1 + 0x790),local_78,uVar12);
        FUN_0043f750(&local_90,iVar10);
        FUN_00416ba0(&local_88,L"Output #",local_90);
        uVar12 = FUN_014313c0(&PTR_FUN_0142bf08,1,
                              *(longlong *)(param_1 + 0x8b8) + (longlong)(iVar7 + 1) * 8);
        FUN_00b0ab70(*(undefined8 *)(param_1 + 0x790),local_88,uVar12);
        local_a4 = local_a4 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    *(uint *)(param_1 + 0x894) = (uint)*(ushort *)(pbVar4 + 0x48);
    FUN_00848a70(*(undefined8 *)(param_1 + 0x790),*(undefined2 *)(pbVar4 + 0x48));
  }
  else {
    FUN_006d78a0(*(undefined8 *)(param_1 + 0x6b0),*(undefined8 *)(param_1 + 0x6b8));
    FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),**(undefined8 **)(pbVar4 + 0x18));
    iVar7 = (**(code **)(**(longlong **)(pbVar4 + 8) + 0x28))(*(longlong **)(pbVar4 + 8));
    if (0 < iVar7) {
      (**(code **)(**(longlong **)(pbVar4 + 8) + 0x18))(*(longlong **)(pbVar4 + 8),&local_98,0);
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4f0);
      iVar7 = (**(code **)(*plVar3 + 0xb0))(plVar3,local_98);
      if (-1 < iVar7) {
        (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x268))
                  (*(longlong **)(param_1 + 0x6d8),iVar7);
      }
    }
  }
  iVar7 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x700));
  uVar12 = FUN_00409570((longlong)(iVar7 * 2));
  *(undefined8 *)(param_1 + 0x8c0) = uVar12;
  FUN_0064cf60(param_1,0x4a4);
  FUN_00414560(&local_98,10);
  FUN_00414560(&local_40,3);
  return;
}

