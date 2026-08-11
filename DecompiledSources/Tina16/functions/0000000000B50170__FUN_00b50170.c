/* Ghidra address: 00b50170 */
/* Ghidra symbol: FUN_00b50170 */


void FUN_00b50170(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = FUN_00b573b0();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_00b57390(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x28),
                           iVar3);
      if (*(char *)(lVar2 + 0x20) != '\0') {
        FUN_00b225c0(lVar2,*(undefined2 *)(param_1 + 0x78),*(undefined2 *)(param_1 + 0x80),
                     *(undefined2 *)(param_1 + 0x88),*(undefined2 *)(param_1 + 0x90),
                     *(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xa0),
                     *(undefined1 *)(param_1 + 0xa8));
        FUN_00b568a0(lVar2);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

