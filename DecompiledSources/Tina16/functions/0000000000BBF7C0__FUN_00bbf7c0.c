/* Ghidra address: 00bbf7c0 */
/* Ghidra symbol: FUN_00bbf7c0 */


int FUN_00bbf7c0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar2 = FUN_00bbf6b0();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = FUN_00bbf9f0(param_1,iVar4);
      cVar1 = FUN_004113d0(param_2,uVar3);
      if (cVar1 != '\0') {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return -1;
}

