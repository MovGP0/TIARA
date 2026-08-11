/* Ghidra address: 00ddfb10 */
/* Ghidra symbol: FUN_00ddfb10 */


void FUN_00ddfb10(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x500);
  if ((lVar2 != 0) && (cVar1 = FUN_004113d0(param_2,&DAT_005f7500), cVar1 != '\0')) {
    iVar4 = *(int *)(lVar2 + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x500),iVar3);
        if (lVar2 == param_2) {
          if (*(longlong *)(param_2 + 0x30) == 0) {
            return;
          }
          FUN_00de0120(param_1,*(undefined4 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x490) + 0x58) +
                                (longlong)iVar3 * 4),param_2);
          return;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

