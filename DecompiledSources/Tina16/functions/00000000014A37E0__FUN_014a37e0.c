/* Ghidra address: 014a37e0 */
/* Ghidra symbol: FUN_014a37e0 */


void FUN_014a37e0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short local_4a;
  short local_48;
  undefined4 local_46;
  undefined1 local_42 [18];
  
  plVar1 = *(longlong **)(*param_1 + 0x48);
  local_48 = *(short *)(plVar1[0x8f] + 0x10);
  iVar7 = 2;
  iVar8 = (int)local_48;
  iVar6 = 0;
  if (-1 < iVar8 + -1) {
    do {
      lVar3 = FUN_004aeac0(plVar1[0x8f],iVar6);
      local_4a = *(short *)(*(longlong *)(lVar3 + 0x13) + 0x10);
      iVar9 = (int)local_4a;
      lVar3 = FUN_004aeac0(plVar1[0x8f],iVar6);
      local_4a = *(short *)(*(longlong *)(lVar3 + 0x1b) + 0x10);
      iVar2 = (int)local_4a;
      lVar3 = FUN_004aeac0(plVar1[0x8f],iVar6);
      local_4a = *(short *)(*(longlong *)(lVar3 + 0x23) + 0x10);
      iVar7 = iVar7 + iVar9 * 0x10 + iVar2 * 0x29 + 0x14 + local_4a * 0x29;
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_01d31180(*param_1,0xf288,0x14,iVar7);
  FUN_01d311c0(*param_1,&local_48,2);
  iVar7 = (int)local_48;
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      puVar4 = (undefined8 *)FUN_004aeac0(plVar1[0x8f],iVar6);
      local_46 = (**(code **)(*plVar1 + 0x18))(plVar1,*puVar4);
      lVar3 = FUN_004aeac0(plVar1[0x8f],iVar6);
      FUN_00409a70(lVar3 + 8,local_42,10);
      FUN_01d311c0(*param_1,&local_46,0xe);
      lVar3 = FUN_004aeac0(plVar1[0x8f],iVar6);
      local_4a = *(short *)(*(longlong *)(lVar3 + 0x13) + 0x10);
      FUN_01d311c0(*param_1,&local_4a,2);
      iVar9 = (int)local_4a;
      iVar8 = 0;
      if (-1 < iVar9 + -1) {
        do {
          lVar3 = FUN_004aeac0(plVar1[0x8f],iVar6);
          uVar5 = FUN_004aeac0(*(undefined8 *)(lVar3 + 0x13),iVar8);
          FUN_01d311c0(*param_1,uVar5,0x10);
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      lVar3 = FUN_004aeac0(plVar1[0x8f],iVar6);
      local_4a = *(short *)(*(longlong *)(lVar3 + 0x1b) + 0x10);
      FUN_01d311c0(*param_1,&local_4a,2);
      iVar9 = (int)local_4a;
      iVar8 = 0;
      if (-1 < iVar9 + -1) {
        do {
          lVar3 = FUN_004aeac0(plVar1[0x8f],iVar6);
          uVar5 = FUN_004aeac0(*(undefined8 *)(lVar3 + 0x1b),iVar8);
          FUN_01d311c0(*param_1,uVar5,0x29);
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      lVar3 = FUN_004aeac0(plVar1[0x8f],iVar6);
      local_4a = *(short *)(*(longlong *)(lVar3 + 0x23) + 0x10);
      FUN_01d311c0(*param_1,&local_4a,2);
      iVar9 = (int)local_4a;
      iVar8 = 0;
      if (-1 < iVar9 + -1) {
        do {
          lVar3 = FUN_004aeac0(plVar1[0x8f],iVar6);
          uVar5 = FUN_004aeac0(*(undefined8 *)(lVar3 + 0x23),iVar8);
          FUN_01d311c0(*param_1,uVar5,0x29);
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar6 = FUN_01d31a40(*param_1);
  if (iVar6 != 0) {
    FUN_00b047e0(0xfffffff3);
  }
  return;
}

