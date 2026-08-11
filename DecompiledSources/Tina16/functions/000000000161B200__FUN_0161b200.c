/* Ghidra address: 0161b200 */
/* Ghidra symbol: FUN_0161b200 */


int FUN_0161b200(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar2 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar2);
      if ((*(int *)(lVar1 + 8) == 0) || (*(int *)(lVar1 + 8) == 1)) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar3;
}

