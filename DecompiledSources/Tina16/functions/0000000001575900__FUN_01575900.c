/* Ghidra address: 01575900 */
/* Ghidra symbol: FUN_01575900 */


undefined8 FUN_01575900(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(param_1,iVar3);
      cVar1 = FUN_01574d70(uVar2,param_2);
      if (cVar1 == '\0') {
        return 0;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 1;
}

