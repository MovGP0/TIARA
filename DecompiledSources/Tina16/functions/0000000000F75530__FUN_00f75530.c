/* Ghidra address: 00f75530 */
/* Ghidra symbol: FUN_00f75530 */


undefined8 FUN_00f75530(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(param_1,iVar3);
      cVar1 = FUN_00f6f450(uVar2,*(undefined4 *)(param_2 + 0x3c));
      if (cVar1 != '\0') {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

