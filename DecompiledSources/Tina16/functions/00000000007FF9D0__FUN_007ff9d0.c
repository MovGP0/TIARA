/* Ghidra address: 007ff9d0 */
/* Ghidra symbol: FUN_007ff9d0 */


int FUN_007ff9d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar4 = iVar3;
  if ((*(char *)(param_1 + 0x4d6) == '\x02') && (iVar4 = 0, *(longlong *)(param_1 + 0x698) != 0)) {
    iVar1 = FUN_00808090();
    iVar5 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar2 = FUN_00808070(DAT_02012670,iVar5);
        if (*(char *)(lVar2 + 0x4d6) == '\x01') {
          iVar3 = iVar3 + 1;
        }
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
        iVar4 = iVar3;
      } while (iVar1 != 0);
    }
  }
  return iVar4;
}

