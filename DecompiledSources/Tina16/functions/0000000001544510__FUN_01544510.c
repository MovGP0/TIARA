/* Ghidra address: 01544510 */
/* Ghidra symbol: FUN_01544510 */


undefined8 FUN_01544510(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x10),iVar2);
      if ((*(int *)(lVar1 + 0x10) == param_2) && (*(int *)(lVar1 + 0x14) == 1)) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

