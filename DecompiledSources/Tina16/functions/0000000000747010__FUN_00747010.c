/* Ghidra address: 00747010 */
/* Ghidra symbol: FUN_00747010 */


longlong FUN_00747010(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_00747090(param_1,iVar2);
      if ((((*(int *)(lVar1 + 0x24) <= param_3) &&
           (param_3 <= *(int *)(lVar1 + 0x24) + *(int *)(lVar1 + 0x2c) + -1)) &&
          (*(int *)(lVar1 + 0x20) <= param_2)) &&
         (param_2 <= *(int *)(lVar1 + 0x20) + *(int *)(lVar1 + 0x28) + -1)) {
        return lVar1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

