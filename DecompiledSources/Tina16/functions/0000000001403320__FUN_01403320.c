/* Ghidra address: 01403320 */
/* Ghidra symbol: FUN_01403320 */


void FUN_01403320(longlong param_1)

{
  ushort uVar1;
  byte *pbVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_30 = 0;
  uVar11 = FUN_004b6930(&PTR_FUN_00478280,1);
  pbVar2 = *(byte **)(param_1 + 0x880);
  lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530);
  if (lVar13 == *(longlong *)(param_1 + 0x6e0)) {
    cVar4 = FUN_00b0a890(*(undefined8 *)(param_1 + 0x710));
    if (cVar4 == '\0') {
      pbVar2[0x40] = 1;
      bVar5 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x700));
      *pbVar2 = bVar5;
      if (*(longlong *)(pbVar2 + 0x18) != 0) {
        FUN_004095f0(*(longlong *)(pbVar2 + 0x18));
      }
      uVar1 = *(ushort *)(param_1 + 0x890);
      *(ushort *)(pbVar2 + 0x10) = uVar1;
      uVar12 = FUN_00409570((ulonglong)uVar1 << 3);
      *(undefined8 *)(pbVar2 + 0x18) = uVar12;
      FUN_00409a70(*(undefined8 *)(param_1 + 0x8b0),uVar12,
                   (ulonglong)*(ushort *)(pbVar2 + 0x10) << 3);
      (**(code **)(**(longlong **)(pbVar2 + 8) + 0x90))(*(longlong **)(pbVar2 + 8));
      iVar7 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4a0) + 0x28))();
      iVar14 = 0;
      if (-1 < iVar7 + -1) {
        do {
          cVar4 = FUN_0068bca0(*(undefined8 *)(param_1 + 0x6f0),iVar14);
          if (cVar4 != '\0') {
            plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4a0);
            (**(code **)(*plVar3 + 0x18))(plVar3,&local_30,iVar14);
            (**(code **)(**(longlong **)(pbVar2 + 8) + 0x78))(*(longlong **)(pbVar2 + 8),local_30);
          }
          iVar14 = iVar14 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x508) = 0;
    }
  }
  else if (lVar13 == *(longlong *)(param_1 + 0x730)) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x740),&local_40);
    FUN_013fcc20(&local_38,local_40);
    lVar13 = FUN_013fd8c0(local_38,uVar11,
                          *(undefined8 *)
                           (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x438),
                          *(undefined8 *)
                           (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2788) + 0x438),
                          *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2788),
                          *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x2770));
    if (lVar13 == 0) {
      *(undefined4 *)(param_1 + 0x508) = 0;
    }
    else {
      pbVar2[0x40] = 2;
      if (*(longlong *)(pbVar2 + 0x20) != 0) {
        FUN_004095f0(*(longlong *)(pbVar2 + 0x20));
      }
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x740),&local_48);
      iVar7 = 0;
      if (local_48 != 0) {
        iVar7 = *(int *)(local_48 + -4);
      }
      uVar12 = FUN_004095c0((longlong)(iVar7 + 1));
      *(undefined8 *)(pbVar2 + 0x20) = uVar12;
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x740),&local_50);
      FUN_00415dd0(&local_58,local_50,0);
      FUN_004425e0(uVar12,local_58);
      (**(code **)(**(longlong **)(pbVar2 + 8) + 0x10))(*(longlong **)(pbVar2 + 8),uVar11);
      FUN_016a94d0(*(undefined8 *)(pbVar2 + 0x28),0);
      *(longlong *)(pbVar2 + 0x28) = lVar13;
      bVar5 = (**(code **)(**(longlong **)(pbVar2 + 8) + 0x28))(*(longlong **)(pbVar2 + 8));
      *pbVar2 = bVar5;
      *(ushort *)(pbVar2 + 0x10) = (ushort)bVar5;
      if (*(longlong *)(pbVar2 + 0x18) != 0) {
        FUN_004095f0(*(longlong *)(pbVar2 + 0x18));
      }
      uVar12 = FUN_00409570((ulonglong)*(ushort *)(pbVar2 + 0x10) << 3);
      *(undefined8 *)(pbVar2 + 0x18) = uVar12;
      uVar15 = (uint)*pbVar2;
      iVar7 = 0;
      if (-1 < (int)(uVar15 - 1)) {
        do {
          uVar12 = FUN_01656db0(*(undefined8 *)(pbVar2 + 0x28),iVar7 + 1);
          *(undefined8 *)(*(longlong *)(pbVar2 + 0x18) + (longlong)iVar7 * 8) = uVar12;
          iVar7 = iVar7 + 1;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
    }
  }
  else if (lVar13 == *(longlong *)(param_1 + 0x760)) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x770),&local_60);
    lVar13 = FUN_013fd8c0(local_60,uVar11,
                          *(undefined8 *)
                           (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x438),
                          *(undefined8 *)
                           (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2788) + 0x438),
                          *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2788),
                          *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x2770));
    if (lVar13 == 0) {
      *(undefined4 *)(param_1 + 0x508) = 0;
    }
    else {
      if (*(longlong *)(pbVar2 + 0x20) != 0) {
        FUN_004095f0(*(longlong *)(pbVar2 + 0x20));
      }
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x770),&local_68);
      iVar7 = 0;
      if (local_68 != 0) {
        iVar7 = *(int *)(local_68 + -4);
      }
      uVar12 = FUN_004095c0((longlong)(iVar7 + 1));
      *(undefined8 *)(pbVar2 + 0x20) = uVar12;
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x770),&local_70);
      FUN_00415dd0(&local_78,local_70,0);
      FUN_004425e0(uVar12,local_78);
      (**(code **)(**(longlong **)(pbVar2 + 8) + 0x10))(*(longlong **)(pbVar2 + 8),uVar11);
      FUN_016a94d0(*(undefined8 *)(pbVar2 + 0x28),0);
      *(longlong *)(pbVar2 + 0x28) = lVar13;
      bVar5 = (**(code **)(**(longlong **)(pbVar2 + 8) + 0x28))(*(longlong **)(pbVar2 + 8));
      *pbVar2 = bVar5;
      *(ushort *)(pbVar2 + 0x10) = (ushort)bVar5;
      if (*(longlong *)(pbVar2 + 0x18) != 0) {
        FUN_004095f0(*(longlong *)(pbVar2 + 0x18));
      }
      uVar12 = FUN_00409570((ulonglong)*(ushort *)(pbVar2 + 0x10) << 3);
      *(undefined8 *)(pbVar2 + 0x18) = uVar12;
      uVar15 = (uint)*pbVar2;
      iVar7 = 0;
      if (-1 < (int)(uVar15 - 1)) {
        do {
          uVar12 = FUN_01656db0(*(undefined8 *)(pbVar2 + 0x28),iVar7 + 1);
          *(undefined8 *)(*(longlong *)(pbVar2 + 0x18) + (longlong)iVar7 * 8) = uVar12;
          iVar7 = iVar7 + 1;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      cVar4 = FUN_00b0a890(*(undefined8 *)(param_1 + 0x790));
      if (cVar4 == '\0') {
        pbVar2[0x40] = 3;
        if (*(longlong *)(pbVar2 + 0x50) != 0) {
          FUN_004095f0(*(undefined8 *)(pbVar2 + 0x50));
        }
        uVar1 = *(ushort *)(param_1 + 0x894);
        *(ushort *)(pbVar2 + 0x48) = uVar1;
        uVar12 = FUN_00409570((ulonglong)uVar1 << 3);
        *(undefined8 *)(pbVar2 + 0x50) = uVar12;
        FUN_00409a70(*(undefined8 *)(param_1 + 0x8b8),uVar12,
                     (ulonglong)*(ushort *)(pbVar2 + 0x48) << 3);
      }
      else {
        *(undefined4 *)(param_1 + 0x508) = 0;
      }
    }
  }
  else {
    pbVar2[0x40] = 0;
    *pbVar2 = 1;
    if (*(longlong *)(pbVar2 + 0x18) != 0) {
      FUN_004095f0(*(longlong *)(pbVar2 + 0x18));
    }
    pbVar2[0x10] = 1;
    pbVar2[0x11] = 0;
    uVar12 = FUN_00409570(8);
    *(undefined8 *)(pbVar2 + 0x18) = uVar12;
    uVar12 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6c8));
    **(undefined8 **)(pbVar2 + 0x18) = uVar12;
    (**(code **)(**(longlong **)(pbVar2 + 8) + 0x90))(*(longlong **)(pbVar2 + 8));
    plVar3 = *(longlong **)(param_1 + 0x6d8);
    uVar8 = (**(code **)(*plVar3 + 0x260))(plVar3);
    (**(code **)(*(longlong *)plVar3[0x9e] + 0x18))((longlong *)plVar3[0x9e],&local_80,uVar8);
    (**(code **)(**(longlong **)(pbVar2 + 8) + 0x78))(*(longlong **)(pbVar2 + 8),local_80);
  }
  if (*(char *)(param_1 + 0x88b) != '\0') {
    uVar8 = FUN_006ec320(*(undefined8 *)(param_1 + 0x7f0));
    uVar9 = FUN_006ec320(*(undefined8 *)(param_1 + 0x7f8));
    uVar10 = (**(code **)(**(longlong **)(param_1 + 0x808) + 0x260))
                       (*(longlong **)(param_1 + 0x808));
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x818) + 0x260))(*(longlong **)(param_1 + 0x818))
    ;
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x838),&local_88);
    FUN_013ff530(*(undefined8 *)(param_1 + 0x878),uVar8,uVar9,uVar10,uVar6,local_88,
                 *(undefined8 *)(param_1 + 0x8c8));
  }
  FUN_00410f20(uVar11);
  FUN_00414480(&local_88);
  FUN_00414480(&local_80);
  FUN_004144d0(&local_78);
  FUN_00414560(&local_70,3);
  FUN_004144d0(&local_58);
  FUN_00414560(&local_50,3);
  FUN_00414560(&local_38,2);
  return;
}

