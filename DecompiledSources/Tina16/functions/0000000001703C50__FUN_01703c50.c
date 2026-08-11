/* Ghidra address: 01703c50 */
/* Ghidra symbol: FUN_01703c50 */


undefined8 FUN_01703c50(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x728) + 0xa9) == '\0') {
    iVar2 = FUN_006decb0(*(undefined8 *)(*(longlong *)(param_1 + 0x720) + 0x550));
    if (0 < iVar2) {
      lVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x720));
      if (lVar4 != 0) {
        lVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x720));
        uVar5 = *(undefined8 *)(lVar4 + 0x18);
      }
    }
  }
  else {
    iVar2 = FUN_006efc30(*(undefined8 *)(*(longlong *)(param_1 + 0x728) + 0x4e0));
    uVar5 = 0;
    if (0 < iVar2) {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))
                        (*(longlong **)(param_1 + 0x728));
      if (-1 < iVar2) {
        plVar1 = *(longlong **)(param_1 + 0x728);
        uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
        lVar4 = FUN_006efcb0(plVar1[0x9c],uVar3);
        uVar5 = *(undefined8 *)(lVar4 + 0x40);
      }
    }
  }
  return uVar5;
}

