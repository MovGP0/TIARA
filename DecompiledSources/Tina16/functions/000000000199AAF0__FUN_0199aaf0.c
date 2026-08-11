/* Ghidra address: 0199aaf0 */
/* Ghidra symbol: FUN_0199aaf0 */


undefined8 FUN_0199aaf0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_00b94e60(param_1,iVar3);
      cVar1 = FUN_0199aac0(auStack_48,uVar2);
      if (cVar1 != '\0') {
        uVar2 = FUN_00b94e60(param_1,iVar3);
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

