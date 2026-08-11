/* Ghidra address: 00a33a10 */
/* Ghidra symbol: FUN_00a33a10 */


undefined8 FUN_00a33a10(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_00a33e20(param_1,iVar3);
      cVar1 = FUN_004113d0(uVar2,param_2);
      if (cVar1 != '\0') {
        uVar2 = FUN_00a33e20(param_1,iVar3);
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

