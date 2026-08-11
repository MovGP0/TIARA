/* Ghidra address: 013ac0c0 */
/* Ghidra symbol: FUN_013ac0c0 */


void FUN_013ac0c0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar2 = FUN_006decb0();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x550),iVar5);
      if (*(longlong *)(lVar3 + 0x18) == param_2) {
        uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x550);
        uVar4 = FUN_006df500(uVar1,iVar5);
        FUN_006ded10(uVar1,uVar4);
        return;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

