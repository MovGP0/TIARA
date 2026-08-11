/* Ghidra address: 00acb2f0 */
/* Ghidra symbol: FUN_00acb2f0 */


void FUN_00acb2f0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  bVar2 = false;
  lVar1 = *(longlong *)(param_1 + 0x158);
  iVar4 = (**(code **)(**(longlong **)(lVar1 + 0x4a0) + 0x28))(*(longlong **)(lVar1 + 0x4a0));
  if (iVar4 == *(int *)(param_1 + 0x160)) {
    iVar4 = (**(code **)(**(longlong **)(lVar1 + 0x4a0) + 0x28))();
    iVar4 = iVar4 + -1;
    if (0x31 < iVar4) {
      iVar4 = 0x32;
    }
    iVar5 = 0;
    if (-1 < iVar4) {
      iVar4 = iVar4 + 1;
      do {
        cVar3 = FUN_0068bca0(lVar1,iVar5);
        if (*(char *)(param_1 + 0x164 + (longlong)iVar5) != cVar3) {
          bVar2 = true;
          break;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) && (lVar1 = *(longlong *)(param_1 + 0x18), *(longlong *)(lVar1 + 0x148) != 0)) {
    (**(code **)(lVar1 + 0x148))
              (*(undefined8 *)(lVar1 + 0x150),*(undefined8 *)(lVar1 + 0xb8),param_1,
               *(undefined8 *)(param_1 + 0x128));
  }
  return;
}

