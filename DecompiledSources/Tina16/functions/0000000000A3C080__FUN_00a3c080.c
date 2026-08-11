/* Ghidra address: 00a3c080 */
/* Ghidra symbol: FUN_00a3c080 */


void FUN_00a3c080(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  
  *(undefined1 *)(param_1 + 0x158) = *(undefined1 *)(param_2 + 0x158);
  FUN_00a39c40(param_1,*(undefined4 *)(param_2 + 0x154));
  *(undefined1 *)(param_1 + 0x151) = *(undefined1 *)(param_2 + 0x151);
  *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(param_2 + 0x150);
  FUN_00a39570(param_1);
  FUN_00a339b0(*(undefined8 *)(param_1 + 0x160),
               *(undefined4 *)(*(longlong *)(param_2 + 0x160) + 0x10));
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x160) + 0x10);
  iVar5 = 0;
  if (-1 < iVar8 + -1) {
    do {
      uVar3 = *(undefined8 *)(param_2 + 0x160);
      plVar1 = (longlong *)FUN_00a33e20(uVar3,iVar5);
      uVar2 = (**(code **)(*plVar1 + 0x10))(*plVar1,1,param_1);
      FUN_00a33990(*(undefined8 *)(param_1 + 0x160),iVar5,uVar2);
      plVar1 = (longlong *)FUN_00a33e20(*(undefined8 *)(param_1 + 0x160),iVar5);
      uVar3 = FUN_00a33e20(uVar3,iVar5);
      (**(code **)(*plVar1 + 8))(plVar1,uVar3);
      iVar5 = iVar5 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  puVar6 = (undefined8 *)(param_2 + 0x48);
  puVar7 = (undefined8 *)(param_1 + 0x48);
  for (lVar4 = 0x20; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  return;
}

