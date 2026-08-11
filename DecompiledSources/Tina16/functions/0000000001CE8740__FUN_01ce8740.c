/* Ghidra address: 01ce8740 */
/* Ghidra symbol: FUN_01ce8740 */


undefined8 FUN_01ce8740(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
  iVar2 = iVar2 + -2;
  if (-1 < iVar2) {
    do {
      iVar4 = 0;
      if (-1 < iVar2) {
        iVar5 = iVar2 + 1;
        do {
          cVar1 = FUN_01ce81c0(param_1,iVar4,iVar4 + 1);
          if (cVar1 != '\0') {
            FUN_01ce83a0(param_1,iVar4,iVar4 + 1);
            uVar3 = 1;
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return uVar3;
}

