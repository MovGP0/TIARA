/* Ghidra address: 01b10530 */
/* Ghidra symbol: FUN_01b10530 */


longlong FUN_01b10530(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  lVar3 = 1;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  uVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x10);
      if (*(uint *)(lVar2 + 0x10) <= uVar4) {
        FUN_00594f90();
      }
      puVar1 = *(undefined8 **)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar4 * 8);
      lVar2 = (**(code **)*puVar1)(puVar1);
      lVar3 = lVar3 * lVar2;
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return lVar3;
}

