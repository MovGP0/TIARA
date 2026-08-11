/* Ghidra address: 01cc4590 */
/* Ghidra symbol: FUN_01cc4590 */


void FUN_01cc4590(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar4 = *(int *)(lVar1 + 0x44c);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_01d347d0(lVar1,*(int *)(lVar1 + 0x450) + iVar3);
      FUN_01cc0ac0(lVar2,param_2,param_3);
      *(undefined1 *)(lVar2 + 0x2a) = 0;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

