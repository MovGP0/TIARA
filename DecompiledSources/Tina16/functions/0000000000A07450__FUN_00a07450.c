/* Ghidra address: 00a07450 */
/* Ghidra symbol: FUN_00a07450 */


char * FUN_00a07450(void)

{
  longlong lVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)0x0;
  lVar1 = FUN_004aeac0();
  if (*(longlong *)(lVar1 + 0x28) != 0) {
    iVar5 = *(int *)(*(longlong *)(lVar1 + 0x28) + 0x10);
    iVar3 = 0;
    if (-1 < iVar5 + -1) {
      do {
        pcVar2 = (char *)FUN_004aeac0(*(undefined8 *)(lVar1 + 0x28),iVar3);
        if ((*pcVar2 == DAT_01e6e057) && (pcVar4 == (char *)0x0)) {
          pcVar4 = pcVar2 + 8;
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return pcVar4;
}

