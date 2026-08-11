/* Ghidra address: 01994fd0 */
/* Ghidra symbol: FUN_01994fd0 */


int FUN_01994fd0(longlong param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_b8 [44];
  char local_8c [108];
  
  iVar3 = 100;
  pcVar1 = local_8c;
  do {
    *pcVar1 = '\0';
    pcVar1 = pcVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar4 = 0;
  iVar3 = *(int *)(param_1 + 0x10);
  if (-1 < iVar3 + -1) {
    do {
      uVar2 = FUN_00b94e60(param_1,iVar4);
      FUN_01994f90(auStack_b8,uVar2);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  for (iVar3 = 0; (iVar3 < 100 && (local_8c[iVar3] != '\0')); iVar3 = iVar3 + 1) {
  }
  if (99 < iVar3) {
    iVar3 = -1;
  }
  return iVar3;
}

