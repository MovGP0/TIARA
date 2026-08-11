/* Ghidra address: 0179c7c0 */
/* Ghidra symbol: FUN_0179c7c0 */


longlong FUN_0179c7c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  lVar2 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar3);
      if (*(char *)(lVar1 + 0x21) != '\0') {
        if (lVar2 != 0) {
          return 0;
        }
        lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar3);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return lVar2;
}

