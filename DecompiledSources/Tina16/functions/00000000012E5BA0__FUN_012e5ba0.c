/* Ghidra address: 012e5ba0 */
/* Ghidra symbol: FUN_012e5ba0 */


int FUN_012e5ba0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x10);
  iVar5 = iVar4;
  if ((iVar6 != 0) && (iVar3 = 0, iVar5 = 0, -1 < iVar6 + -1)) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),iVar3);
      cVar1 = FUN_012e52a0(uVar2);
      if (cVar1 != '\0') {
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + -1;
      iVar5 = iVar4;
    } while (iVar6 != 0);
  }
  return iVar5;
}

