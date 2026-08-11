/* Ghidra address: 018b81f0 */
/* Ghidra symbol: FUN_018b81f0 */


void FUN_018b81f0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  
  if (*(int *)((longlong)param_1 + 100) == -1) {
    iVar1 = FUN_01803a10();
    iVar8 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar3 = FUN_018039f0(*(undefined8 *)(param_1[0x13] + 0x28),iVar8);
        iVar2 = FUN_0043e420(*(undefined8 *)(lVar3 + 0x20),L"anchors");
        if (iVar2 != 0) {
          lVar3 = FUN_018039f0(*(undefined8 *)(param_1[0x13] + 0x28),iVar8);
          iVar2 = FUN_0043e420(*(undefined8 *)(lVar3 + 0x20),L"logicalpagenumbers");
          if (iVar2 != 0) {
            uVar4 = FUN_018039f0(*(undefined8 *)(param_1[0x13] + 0x28),iVar8);
            FUN_018039a0(uVar4);
          }
        }
        iVar8 = iVar8 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else {
    uVar4 = FUN_01803bf0(*(undefined8 *)(param_1[0x13] + 0x28),L"previewpages");
    uVar5 = FUN_01803bf0(*(undefined8 *)(param_1[0x13] + 0x28),L"outline");
    uVar6 = FUN_018039f0(uVar4,*(undefined4 *)((longlong)param_1 + 100));
    while( true ) {
      iVar1 = FUN_01803a10(uVar6);
      if (iVar1 <= (int)param_1[0xc]) break;
      uVar7 = FUN_018039f0(uVar6,(int)param_1[0xc]);
      FUN_00410f20(uVar7);
    }
    while( true ) {
      iVar1 = (**(code **)*param_1)(param_1);
      iVar8 = *(int *)((longlong)param_1 + 100) + 1;
      if (iVar1 <= iVar8) break;
      uVar6 = FUN_018039f0(uVar4,iVar8);
      FUN_00410f20(uVar6);
    }
    while( true ) {
      iVar1 = FUN_01803a10(uVar5);
      if (iVar1 <= (int)param_1[0xd]) break;
      uVar4 = FUN_018039f0(uVar5,(int)param_1[0xd]);
      FUN_00410f20(uVar4);
    }
  }
  (**(code **)(*param_1 + 0x98))(param_1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + 100);
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

