/* Ghidra address: 01775a50 */
/* Ghidra symbol: FUN_01775a50 */


int FUN_01775a50(ulonglong param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined7 uVar13;
  ulonglong uVar9;
  undefined7 uVar14;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  bool bVar15;
  bool bVar16;
  int local_34;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_34 = FUN_01769b90(param_1,param_2);
  uVar13 = (undefined7)((ulonglong)param_2 >> 8);
  uVar9 = param_1;
  if (*(char *)(param_1 + 0x62) != '\0') {
    if (*(byte *)(param_2 + 0x78) < 8) {
      uVar3 = (int)CONCAT71(uVar13,1) << (*(byte *)(param_2 + 0x78) & 0x1f);
      uVar9 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),(uVar3 & 0x31) != 0);
    }
    else {
      uVar9 = 0;
    }
    if ((char)uVar9 != '\0') {
      bVar16 = false;
      uVar14 = 0;
      goto LAB_01775ab3;
    }
  }
  uVar14 = (undefined7)(uVar9 >> 8);
  bVar16 = true;
LAB_01775ab3:
  bVar1 = *(byte *)(param_2 + 0x78);
  if (bVar1 < 8) {
    bVar15 = ((int)CONCAT71((int7)((ulonglong)param_3 >> 8),1) << (bVar1 & 0x1f) & 0x31U) != 0;
  }
  else {
    bVar15 = false;
  }
  if (bVar15) {
    local_34 = local_34 + 1;
  }
  if (bVar16) {
    if (bVar1 < 8) {
      bVar16 = ((int)CONCAT71(uVar14,1) << (bVar1 & 0x1f) & 0x3dU) != 0;
    }
    else {
      bVar16 = false;
    }
    if (bVar16) {
      if (bVar1 == 2) {
        plVar10 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
        (**(code **)(*plVar10 + 0x10))(plVar10,*(undefined8 *)(param_1 + 0xb0));
        FUN_01b229f0(plVar10,L"TINA HDL Macro Description Begin",
                     L"TINA VHDL Macro Description Begin");
        FUN_01b229f0(plVar10,L"TINA HDL Macro Description End",L"TINA VHDL Macro Description End");
        iVar4 = FUN_01d321c0(plVar10);
        FUN_00410f20(plVar10);
      }
      else {
        iVar4 = FUN_01d321c0(*(undefined8 *)(param_1 + 0xb0));
      }
      local_34 = local_34 + iVar4;
      iVar4 = FUN_01d321c0(*(undefined8 *)(param_1 + 200));
      iVar5 = FUN_01d321c0(*(undefined8 *)(param_1 + 0xd0));
      iVar6 = FUN_01d321c0(*(undefined8 *)(param_1 + 0xd8));
      local_34 = local_34 + iVar4 + iVar5 + iVar6;
    }
    else {
      iVar4 = FUN_01d31f80(*(undefined8 *)(param_1 + 0xb0));
      iVar5 = FUN_01d31f80(*(undefined8 *)(param_1 + 200));
      iVar6 = FUN_01d31f80(*(undefined8 *)(param_1 + 0xd0));
      iVar7 = FUN_01d31f80(*(undefined8 *)(param_1 + 0xd8));
      local_34 = local_34 + iVar4 + iVar5 + iVar6 + iVar7;
    }
    iVar4 = FUN_01d31f80(*(undefined8 *)(param_1 + 0xe8));
    iVar5 = FUN_01d31350(*(undefined8 *)(param_1 + 0x130));
    iVar6 = FUN_01d31350(*(undefined8 *)(param_1 + 0x138));
    iVar7 = FUN_01d31350(*(undefined8 *)(param_1 + 0x140));
    local_34 = local_34 + iVar4 + iVar5 + iVar6 + iVar7 + 0x14;
    iVar5 = 0;
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x170) + 0x10);
    if (-1 < iVar4 + -1) {
      do {
        lVar11 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x170),iVar5);
        iVar6 = FUN_01d31350(*(undefined8 *)(lVar11 + 0x10));
        iVar7 = FUN_01d31f80(*(undefined8 *)(lVar11 + 8));
        local_34 = local_34 + iVar6 + iVar7;
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (*(byte *)(param_2 + 0x78) < 8) {
      bVar16 = ((int)CONCAT71(uVar13,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x3dU) != 0;
    }
    else {
      bVar16 = false;
    }
    if (bVar16) {
      iVar4 = FUN_01d321c0(*(undefined8 *)(param_1 + 0xf0));
      local_34 = local_34 + iVar4;
      if (*(byte *)(param_2 + 0x78) < 8) {
        bVar16 = ((int)CONCAT71(uVar13,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x39U) != 0;
      }
      else {
        bVar16 = false;
      }
      if (bVar16) {
        iVar4 = FUN_01d31350(*(undefined8 *)(*(longlong *)(param_1 + 0x110) + 0x10));
        iVar5 = FUN_01d321c0(*(undefined8 *)(*(longlong *)(param_1 + 0x110) + 0x20));
        local_34 = local_34 + iVar4 + iVar5 + 4;
        iVar5 = 0;
        iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x18) + 0x10);
        if (-1 < iVar4 + -1) {
          do {
            lVar11 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x110) + 0x18),iVar5);
            uVar12 = FUN_010af3b0(lVar11);
            iVar6 = FUN_01d321c0(uVar12);
            iVar7 = FUN_01d31350(*(undefined8 *)(lVar11 + 0x30));
            iVar8 = FUN_01d31350(*(undefined8 *)(lVar11 + 0x38));
            local_34 = local_34 + iVar6 + iVar7 + iVar8;
            iVar5 = iVar5 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      iVar4 = FUN_01d31350(*(undefined8 *)(param_1 + 0x148));
      iVar5 = FUN_01d31350(*(undefined8 *)(param_1 + 0x150));
      iVar6 = (**(code **)**(undefined8 **)(param_1 + 0xf8))(*(undefined8 **)(param_1 + 0xf8));
      iVar6 = local_34 + iVar4 + iVar5 + 0x10 + iVar6;
      if (*(byte *)(param_2 + 0x78) < 8) {
        bVar16 = ((int)CONCAT71(uVar13,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x39U) != 0;
      }
      else {
        bVar16 = false;
      }
      if (bVar16) {
        puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x110) + 0x30);
        iVar4 = (**(code **)*puVar2)(puVar2);
        local_34 = FUN_010b3f40(*(undefined8 *)(param_1 + 0x118));
        local_34 = iVar6 + iVar4 + 10 + local_34;
        if (*(char *)(param_2 + 0x78) == '\0') {
          FUN_004168e0(local_30,*(undefined8 *)(*(longlong *)(param_1 + 0x110) + 0x40));
          iVar4 = FUN_01d31290(local_30[0]);
          local_34 = local_34 + iVar4;
        }
      }
      else {
        uVar12 = FUN_004b6930(&PTR_FUN_00478280,1);
        iVar4 = FUN_01d31f80(uVar12);
        FUN_00410f20(uVar12);
        iVar5 = FUN_01d31350(0);
        local_34 = FUN_01d31350(0);
        local_34 = iVar6 + iVar4 + iVar5 + local_34;
      }
    }
  }
  else {
    iVar4 = FUN_01d31350(*(undefined8 *)(param_1 + 0x148));
    iVar5 = FUN_01d31350(*(undefined8 *)(param_1 + 0x150));
    local_34 = local_34 + 0xc + iVar4 + iVar5;
  }
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar16 = ((int)CONCAT71(uVar13,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x31U) != 0;
  }
  else {
    bVar16 = false;
  }
  if (bVar16) {
    iVar4 = FUN_01d31f80(*(undefined8 *)(param_1 + 0x1a0));
    local_34 = local_34 + iVar4;
  }
  FUN_00414520(local_30);
  return local_34;
}

