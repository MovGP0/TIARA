/* Ghidra address: 0138c940 */
/* Ghidra symbol: FUN_0138c940 */


void FUN_0138c940(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 local_29 [9];
  
  FUN_010f6580(param_1);
  (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x50))(*(longlong **)(param_1 + 0xe88),local_29);
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xba0) + 0x4f0) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xba0) + 0x4f0);
      lVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
      FUN_00410f20(*(undefined8 *)(lVar3 + 0x50));
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xba0) + 0x4f0);
      uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
      FUN_00410f20(uVar4);
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xba0) + 0x4f0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0xe88));
  return;
}

