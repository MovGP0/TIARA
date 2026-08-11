/* Ghidra address: 007ffa40 */
/* Ghidra symbol: FUN_007ffa40 */


longlong FUN_007ffa40(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if ((*(char *)(param_1 + 0x4d6) == '\x02') && (*(longlong *)(param_1 + 0x698) != 0)) {
    iVar1 = FUN_00808090();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar2 = FUN_00808070(DAT_02012670,iVar3);
        if ((*(char *)(lVar2 + 0x4d6) == '\x01') && (param_2 = param_2 + -1, param_2 < 0)) {
          return lVar2;
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return 0;
}

