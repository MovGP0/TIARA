/* Ghidra address: 01b755e0 */
/* Ghidra symbol: FUN_01b755e0 */


void FUN_01b755e0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6f8) + 0x4a0) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f8) + 0x4a0);
      uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
      FUN_004095f0(uVar3);
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar6 = (undefined8 *)(param_1 + 0x854);
  puVar7 = (undefined8 *)PTR_DAT_02003ad0;
  for (lVar4 = 0xd; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)puVar7 = *(undefined4 *)puVar6;
  puVar6 = (undefined8 *)(param_1 + 0x8c0);
  puVar7 = (undefined8 *)PTR_DAT_02005048;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_0064e030(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10),
               *(undefined4 *)PTR_DAT_02003ad0);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x940));
  return;
}

