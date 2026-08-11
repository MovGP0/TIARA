/* Ghidra address: 00814620 */
/* Ghidra symbol: FUN_00814620 */


int FUN_00814620(longlong param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x3c);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = (longlong)iVar3;
      if (((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + lVar2 * 0x20) + 0x86) !=
            '\0') &&
          (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + lVar2 * 0x20) + 0x81) != '\0'
          )) && (cVar1 = FUN_007f9a80(param_2,*(undefined8 *)
                                               (*(longlong *)
                                                 (*(longlong *)(param_1 + 0x40) + 8 + lVar2 * 0x20)
                                               + 0x78)), cVar1 != '\0')) {
        if (param_3 == '\0') {
          return iVar3;
        }
        *(int *)(param_1 + 8) = iVar3;
        FUN_00814f60();
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return -1;
}

