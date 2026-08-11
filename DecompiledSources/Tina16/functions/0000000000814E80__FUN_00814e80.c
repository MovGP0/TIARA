/* Ghidra address: 00814e80 */
/* Ghidra symbol: FUN_00814e80 */


undefined4 FUN_00814e80(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined4 local_40;
  undefined4 local_3c;
  
  iVar4 = *(int *)(param_1 + 0x3c);
  iVar2 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar3 = (longlong)iVar2;
      if (((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + lVar3 * 0x20) + 0x86) !=
            '\0') &&
          (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + lVar3 * 0x20) + 0x81) != '\0'
          )) && (local_40 = param_2, local_3c = param_3,
                cVar1 = FUN_00423210(*(longlong *)(param_1 + 0x40) + 0x10 + lVar3 * 0x20,&local_40),
                cVar1 != '\0')) {
        return *(undefined4 *)(*(longlong *)(param_1 + 0x40) + lVar3 * 0x20);
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0xffffffff;
}

