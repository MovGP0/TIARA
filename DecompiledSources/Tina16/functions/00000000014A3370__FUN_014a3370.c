/* Ghidra address: 014a3370 */
/* Ghidra symbol: FUN_014a3370 */


void FUN_014a3370(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined8 local_60;
  short local_58;
  short local_56;
  undefined4 local_53;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined8 local_4b;
  undefined8 local_43;
  undefined2 local_3b;
  undefined1 local_39;
  
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70[0] = 0;
  plVar2 = *(longlong **)(*param_1 + 0x48);
  local_56 = *(short *)(plVar2[0x8e] + 0x10);
  iVar7 = 2;
  iVar8 = (int)local_56;
  iVar6 = 0;
  if (-1 < iVar8 + -1) {
    do {
      lVar4 = FUN_004aeac0(plVar2[0x8e],iVar6);
      FUN_004169a0(local_70,lVar4 + 0x22f);
      iVar3 = FUN_01d31350(local_70[0]);
      lVar4 = FUN_004aeac0(plVar2[0x8e],iVar6);
      if (*(longlong *)(lVar4 + 0x11f) == 0) {
        local_58 = 0;
      }
      else {
        lVar4 = FUN_004aeac0(plVar2[0x8e],iVar6);
        local_58 = *(short *)(*(longlong *)(lVar4 + 0x11f) + 0x10);
      }
      iVar7 = iVar7 + iVar3 + 0x1d + local_58 * 8;
      bVar1 = *(byte *)(*param_1 + 0x78);
      if (bVar1 < 8) {
        bVar9 = ((int)CONCAT71((int7)((ulonglong)*param_1 >> 8),1) << (bVar1 & 0x1f) & 0x21U) != 0;
      }
      else {
        bVar9 = false;
      }
      if (bVar9) {
        lVar4 = FUN_004aeac0(plVar2[0x8e],iVar6);
        FUN_004169a0(&local_78,lVar4 + 0xc);
        iVar3 = FUN_01d31350(local_78);
        iVar7 = iVar7 + iVar3;
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  bVar1 = *(byte *)(*param_1 + 0x78);
  if (bVar1 < 8) {
    bVar9 = ((int)CONCAT71((int7)((ulonglong)*param_1 >> 8),1) << (bVar1 & 0x1f) & 0x21U) != 0;
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    FUN_01d31180(*param_1,0xf287,0x13,iVar7);
  }
  else {
    FUN_01d31180(*param_1,0xf287,0x12,iVar7);
  }
  FUN_01d311c0(*param_1,&local_56,2);
  iVar7 = (int)local_56;
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      puVar5 = (undefined8 *)FUN_004aeac0(plVar2[0x8e],iVar6);
      local_53 = (**(code **)(*plVar2 + 0x18))(plVar2,*puVar5);
      lVar4 = FUN_004aeac0(plVar2[0x8e],iVar6);
      local_4f = *(undefined1 *)(lVar4 + 8);
      lVar4 = FUN_004aeac0(plVar2[0x8e],iVar6);
      local_4e = *(undefined1 *)(lVar4 + 9);
      lVar4 = FUN_004aeac0(plVar2[0x8e],iVar6);
      local_4d = *(undefined1 *)(lVar4 + 10);
      lVar4 = FUN_004aeac0(plVar2[0x8e],iVar6);
      local_4c = *(undefined1 *)(lVar4 + 0xb);
      lVar4 = FUN_004aeac0(plVar2[0x8e],iVar6);
      local_4b = *(undefined8 *)(lVar4 + 0x10c);
      lVar4 = FUN_004aeac0(plVar2[0x8e],iVar6);
      local_43 = *(undefined8 *)(lVar4 + 0x114);
      lVar4 = FUN_004aeac0(plVar2[0x8e],iVar6);
      local_3b = *(undefined2 *)(lVar4 + 0x11c);
      lVar4 = FUN_004aeac0(plVar2[0x8e],iVar6);
      local_39 = *(undefined1 *)(lVar4 + 0x11e);
      FUN_01d311c0(*param_1,&local_53,0x1b);
      lVar4 = FUN_004aeac0(plVar2[0x8e],iVar6);
      FUN_004169a0(&local_80,lVar4 + 0x22f);
      FUN_01d313e0(*param_1,local_80);
      bVar1 = *(byte *)(*param_1 + 0x78);
      if (bVar1 < 8) {
        bVar9 = ((int)CONCAT71((int7)((ulonglong)*param_1 >> 8),1) << (bVar1 & 0x1f) & 0x21U) != 0;
      }
      else {
        bVar9 = false;
      }
      if (bVar9) {
        lVar4 = FUN_004aeac0(plVar2[0x8e],iVar6);
        FUN_004169a0(&local_88,lVar4 + 0xc);
        FUN_01d313e0(*param_1,local_88);
      }
      lVar4 = FUN_004aeac0(plVar2[0x8e],iVar6);
      if (*(longlong *)(lVar4 + 0x11f) == 0) {
        local_58 = 0;
      }
      else {
        lVar4 = FUN_004aeac0(plVar2[0x8e],iVar6);
        local_58 = *(short *)(*(longlong *)(lVar4 + 0x11f) + 0x10);
      }
      FUN_01d311c0(*param_1,&local_58,2);
      iVar3 = (int)local_58;
      iVar8 = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar4 = FUN_004aeac0(plVar2[0x8e],iVar6);
          local_60 = FUN_01d0f3b0(*(undefined8 *)(lVar4 + 0x11f),iVar8);
          FUN_01d311c0(*param_1,&local_60,8);
          iVar8 = iVar8 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar6 = FUN_01d31a40(*param_1);
  if (iVar6 != 0) {
    FUN_00b047e0(0xfffffff3);
  }
  FUN_00414560(&local_88,4);
  return;
}

