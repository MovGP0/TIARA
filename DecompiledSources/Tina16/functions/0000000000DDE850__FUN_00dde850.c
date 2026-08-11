/* Ghidra address: 00dde850 */
/* Ghidra symbol: FUN_00dde850 */


longlong FUN_00dde850(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x490);
  if (*(longlong *)(lVar1 + 0x68) == 0) {
    FUN_00dddda0();
  }
  iVar3 = 0;
  iVar4 = *(int *)(*(longlong *)(lVar1 + 0x68) + 0x10);
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(lVar1 + 0x68),iVar3);
      if (*(int *)(lVar2 + 8) == param_2) {
        return lVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

