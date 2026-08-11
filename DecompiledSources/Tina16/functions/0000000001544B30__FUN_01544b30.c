/* Ghidra address: 01544b30 */
/* Ghidra symbol: FUN_01544b30 */


ulonglong FUN_01544b30(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x10),iVar3);
      if (*(int *)(lVar1 + 0x10) == param_2) {
        uVar2 = 0;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return uVar2 & 0xffffffff;
}

