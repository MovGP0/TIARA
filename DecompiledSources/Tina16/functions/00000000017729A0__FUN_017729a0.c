/* Ghidra address: 017729a0 */
/* Ghidra symbol: FUN_017729a0 */


void FUN_017729a0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  bool bVar9;
  char local_3d;
  undefined4 local_3c [3];
  
  plVar5 = param_2;
  FUN_01769700(param_1,param_2);
  iVar3 = FUN_01d31a40(*param_2);
  if (iVar3 != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x62) != '\0') {
    bVar1 = *(byte *)(*param_2 + 0x78);
    if (bVar1 < 8) {
      bVar9 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x31U) != 0;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) {
      local_3d = '\0';
      goto LAB_01772a02;
    }
  }
  local_3d = '\x01';
LAB_01772a02:
  bVar1 = *(byte *)(*param_2 + 0x78);
  if (bVar1 < 8) {
    bVar9 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x31U) != 0;
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    plVar5 = (longlong *)&local_3d;
    FUN_01d311c0(*param_2,plVar5,1);
  }
  if (local_3d == '\0') {
    FUN_01d311c0(*param_2,param_1 + 0x120,4);
    FUN_01d311c0(*param_2,param_1 + 0x124,4);
    FUN_01d311c0(*param_2,param_1 + 0x128,4);
    FUN_01d313e0(*param_2,*(undefined8 *)(param_1 + 0x148));
    FUN_01d313e0(*param_2,*(undefined8 *)(param_1 + 0x150));
  }
  else {
    bVar1 = *(byte *)(*param_2 + 0x78);
    if (bVar1 < 8) {
      bVar9 = ((int)CONCAT71((int7)((ulonglong)plVar5 >> 8),1) << (bVar1 & 0x1f) & 0x3dU) != 0;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) {
      if (bVar1 == 2) {
        plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
        (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(param_1 + 0xb0));
        FUN_01b229f0(plVar5,L"TINA HDL Macro Description Begin",L"TINA VHDL Macro Description Begin"
                    );
        FUN_01b229f0(plVar5,L"TINA HDL Macro Description End",L"TINA VHDL Macro Description End");
        FUN_01d324e0(*param_2,plVar5);
        FUN_00410f20(plVar5);
      }
      else {
        FUN_01d324e0(*param_2,*(undefined8 *)(param_1 + 0xb0));
      }
      FUN_01d324e0(*param_2,*(undefined8 *)(param_1 + 200));
      FUN_01d324e0(*param_2,*(undefined8 *)(param_1 + 0xd0));
    }
    else {
      FUN_01d320f0(*param_2,*(undefined8 *)(param_1 + 0xb0));
      FUN_01d320f0(*param_2,*(undefined8 *)(param_1 + 200));
      FUN_01d320f0(*param_2,*(undefined8 *)(param_1 + 0xd0));
    }
    FUN_01d313e0(*param_2,*(undefined8 *)(param_1 + 0x130));
    FUN_01d313e0(*param_2,*(undefined8 *)(param_1 + 0x138));
    FUN_01d311c0(*param_2,param_1 + 0x100,4);
    bVar1 = *(byte *)(*param_2 + 0x78);
    if (bVar1 < 8) {
      bVar9 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x3dU) != 0;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) {
      FUN_01d324e0(*param_2,*(undefined8 *)(param_1 + 0xd8));
    }
    else {
      FUN_01d320f0(*param_2,*(undefined8 *)(param_1 + 0xd8));
    }
    FUN_01d313e0(*param_2,*(undefined8 *)(param_1 + 0x140));
    local_3c[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x170) + 0x10);
    FUN_01d311c0(*param_2,local_3c,4);
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x170) + 0x10);
    iVar8 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x170),iVar8);
        FUN_01d313e0(*param_2,*(undefined8 *)(lVar6 + 0x10));
        FUN_01d320f0(*param_2,*(undefined8 *)(lVar6 + 8));
        iVar8 = iVar8 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_01d320f0(*param_2,*(undefined8 *)(param_1 + 0xe8));
    FUN_01d311c0(*param_2,param_1 + 0x104,4);
    FUN_01d311c0(*param_2,param_1 + 0x108,8);
    bVar1 = *(byte *)(*param_2 + 0x78);
    if (bVar1 < 8) {
      bVar9 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x3dU) != 0;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) {
      FUN_01d311c0(*param_2,param_1 + 0x120,4);
      FUN_01d311c0(*param_2,param_1 + 0x124,4);
      FUN_01d311c0(*param_2,param_1 + 0x128,4);
      FUN_01d313e0(*param_2,*(undefined8 *)(param_1 + 0x148));
      FUN_01d313e0(*param_2,*(undefined8 *)(param_1 + 0x150));
      local_3c[0] = (**(code **)**(undefined8 **)(param_1 + 0xf8))(*(undefined8 **)(param_1 + 0xf8))
      ;
      FUN_01d311c0(*param_2,local_3c,4);
      puVar2 = *(undefined8 **)(param_1 + 0xf8);
      uVar4 = (**(code **)*puVar2)(puVar2);
      FUN_01d326d0(*param_2,puVar2,uVar4);
      FUN_01d324e0(*param_2,*(undefined8 *)(param_1 + 0xf0));
      bVar1 = *(byte *)(*param_2 + 0x78);
      if (bVar1 < 8) {
        bVar9 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
      }
      else {
        bVar9 = false;
      }
      if (bVar9) {
        FUN_010b3780(*(undefined8 *)(param_1 + 0x110),param_2);
        FUN_010b3fe0(*(undefined8 *)(param_1 + 0x118),param_2);
      }
      else {
        uVar7 = FUN_004b6930(&PTR_FUN_00478280,1);
        FUN_01d324e0(*param_2,uVar7);
        FUN_00410f20(uVar7);
        FUN_01d313e0(*param_2,0);
        FUN_01d313e0(*param_2,0);
      }
    }
  }
  bVar1 = *(byte *)(*param_2 + 0x78);
  if (bVar1 < 8) {
    bVar9 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x31U) != 0;
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    FUN_01d320f0(*param_2,*(undefined8 *)(param_1 + 0x1a0));
  }
  return;
}

