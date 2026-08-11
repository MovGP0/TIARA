/* Ghidra address: 00b2e0c0 */
/* Ghidra symbol: FUN_00b2e0c0 */


void FUN_00b2e0c0(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x28) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      pcVar1 = (char *)FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x28),iVar3);
      if (((*pcVar1 == '\0') && (**(char **)(pcVar1 + 5) == ':')) &&
         (iVar5 = (iVar3 - *(int *)(pcVar1 + 0x1b)) + 1, iVar5 <= iVar3)) {
        iVar6 = (iVar5 - iVar3) + -1;
        iVar5 = iVar3;
        do {
          lVar2 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x28),iVar5);
          *(undefined1 *)(lVar2 + 0x1a) = 1;
          iVar5 = iVar5 + -1;
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

