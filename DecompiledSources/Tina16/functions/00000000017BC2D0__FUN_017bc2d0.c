/* Ghidra address: 017bc2d0 */
/* Ghidra symbol: FUN_017bc2d0 */


void FUN_017bc2d0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      uVar2 = (**(code **)(*plVar1 + 0x170))(plVar1,5);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_017bb310(param_1);
  return;
}

