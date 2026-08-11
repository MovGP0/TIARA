/* Ghidra address: 01408c30 */
/* Ghidra symbol: FUN_01408c30 */


void FUN_01408c30(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_01d347d0(param_1,iVar3);
      uVar1 = FUN_01408880(*(undefined8 *)(lVar2 + 8),param_3);
      *(undefined4 *)(param_2 + (longlong)iVar3 * 4) = uVar1;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

