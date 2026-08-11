/* Ghidra address: 012c7a60 */
/* Ghidra symbol: FUN_012c7a60 */


void FUN_012c7a60(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = FUN_006decb0();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x550),iVar3);
      FUN_004095f0(*(undefined8 *)(lVar2 + 0x18));
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_006ded30(*(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x550));
  return;
}

