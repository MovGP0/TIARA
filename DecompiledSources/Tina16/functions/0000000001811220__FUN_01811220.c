/* Ghidra address: 01811220 */
/* Ghidra symbol: FUN_01811220 */


void FUN_01811220(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar4);
      lVar3 = 0;
      plVar1 = *(longlong **)(param_1 + 0x18);
      if (plVar1 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar1 + 0x1e8))(plVar1,*(undefined8 *)(lVar2 + 0x18));
      }
      if (lVar3 == 0) {
        lVar3 = FUN_0180d1d0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(lVar2 + 0x18));
      }
      if (lVar3 != 0) {
        FUN_0058af20(*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),lVar3);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_004be830(*(undefined8 *)(param_1 + 0x20));
  FUN_004be2c0(*(undefined8 *)(param_1 + 0x20));
  FUN_01811140(param_1);
  return;
}

