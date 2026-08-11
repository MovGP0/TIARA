/* Ghidra address: 006f8f70 */
/* Ghidra symbol: FUN_006f8f70 */


longlong FUN_006f8f70(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x500) + 0x10) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_006edb10(*(undefined8 *)(param_1 + 0x500),iVar2);
      if (*(int *)(lVar1 + 0x3c) == param_2) {
        return lVar1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

