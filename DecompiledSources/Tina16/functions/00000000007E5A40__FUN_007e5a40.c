/* Ghidra address: 007e5a40 */
/* Ghidra symbol: FUN_007e5a40 */


undefined8 FUN_007e5a40(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  uVar4 = 0;
  if ((((*(char *)(param_1 + 0x10) == '\0') &&
       (*(ulonglong *)(param_1 + 8) == (ulonglong)*(ushort *)(param_2 + 0xa8))) ||
      ((*(char *)(param_1 + 0x10) == '\x01' &&
       (cVar1 = FUN_007e5a30(*(undefined8 *)(param_2 + 0x158),*(undefined8 *)(param_1 + 8)),
       cVar1 != '\0')))) ||
     ((*(char *)(param_1 + 0x10) == '\x02' &&
      (*(ulonglong *)(param_1 + 8) == (ulonglong)*(ushort *)(param_2 + 0xc0))))) {
    *(longlong *)(param_1 + 0x18) = param_2;
    uVar4 = 1;
  }
  else {
    iVar2 = FUN_007e2ef0();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = FUN_007e2f10(param_2,iVar5);
        cVar1 = FUN_007e5a40(param_1,uVar3);
        if (cVar1 != '\0') {
          return 1;
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return uVar4;
}

