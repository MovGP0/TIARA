/* Ghidra address: 019962b0 */
/* Ghidra symbol: FUN_019962b0 */


undefined8 FUN_019962b0(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  
  if (param_2 == '\0') {
    iVar3 = *(int *)(param_1 + 0x10);
    iVar4 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar2 = FUN_00b94e60(param_1,iVar4);
        cVar1 = FUN_01996280(auStack_48,uVar2);
        if (cVar1 != '\0') {
          uVar2 = FUN_00b94e60(param_1,iVar4);
          return uVar2;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x10) + -1;
    if (-1 < iVar3) {
      do {
        uVar2 = FUN_00b94e60(param_1,iVar3);
        cVar1 = FUN_01996280(auStack_48,uVar2);
        if (cVar1 != '\0') {
          uVar2 = FUN_00b94e60(param_1,iVar3);
          return uVar2;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
  }
  return 0;
}

