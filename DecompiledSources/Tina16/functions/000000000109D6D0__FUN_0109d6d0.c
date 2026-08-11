/* Ghidra address: 0109d6d0 */
/* Ghidra symbol: FUN_0109d6d0 */


void FUN_0109d6d0(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = FUN_006decb0();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0xa00) + 0x550),iVar4);
      lVar3 = FUN_006dd390(uVar2);
      if (lVar3 == 0) {
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x9e8 + (longlong)param_2 * 8),uVar2);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

