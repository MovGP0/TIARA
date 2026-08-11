/* Ghidra address: 00ac5050 */
/* Ghidra symbol: FUN_00ac5050 */


void FUN_00ac5050(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar2) {
    do {
      lVar1 = FUN_00ac50c0(param_1,iVar2);
      if (*(int *)(lVar1 + 0x68) <= param_2) {
        return;
      }
      *(int *)(lVar1 + 0x68) = *(int *)(lVar1 + 0x68) + -1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return;
}

