/* Ghidra address: 00c48b00 */
/* Ghidra symbol: FUN_00c48b00 */


longlong FUN_00c48b00(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = **(longlong **)(param_1 + 0x30);
  lVar3 = (*(longlong **)(param_1 + 0x30))[1];
  if (lVar1 < lVar3) {
    lVar3 = (lVar1 + 0x100000) - lVar3;
  }
  else {
    lVar3 = lVar1 - lVar3;
  }
  if (lVar3 != 0) {
    iVar2 = 0;
    if (DAT_01ea40d8 != 0) {
      iVar2 = *(int *)(DAT_01ea40d8 + -4);
    }
    lVar3 = lVar3 - iVar2;
    if (lVar3 < 0) {
      FUN_00c48570(param_1,L"ReadableSize invalid...");
    }
  }
  return lVar3;
}

