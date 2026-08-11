/* Ghidra address: 010b2440 */
/* Ghidra symbol: FUN_010b2440 */


int FUN_010b2440(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar3 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      cVar1 = FUN_010af9d0(uVar2);
      if (cVar1 == '\0') {
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return iVar4;
}

