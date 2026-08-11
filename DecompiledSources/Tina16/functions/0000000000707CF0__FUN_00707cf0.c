/* Ghidra address: 00707cf0 */
/* Ghidra symbol: FUN_00707cf0 */


int FUN_00707cf0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x10) == 0) {
    return 0;
  }
  do {
    do {
      iVar3 = 0;
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
    } while (iVar4 + -1 < 0);
    do {
      lVar1 = FUN_00707cd0(param_1,iVar3);
      if (*(int *)(lVar1 + 0x28) == iVar2) {
        iVar2 = iVar2 + 1;
        break;
      }
      if (iVar3 == *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1) {
        return iVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  } while( true );
}

