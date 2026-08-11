/* Ghidra address: 01968a80 */
/* Ghidra symbol: FUN_01968a80 */


int FUN_01968a80(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  
  iVar2 = 0;
  iVar3 = 0;
  ppuVar4 = &PTR_PTR_01fb7e10;
  do {
    cVar1 = FUN_004113d0(param_1,*ppuVar4);
    if (cVar1 != '\0') {
      iVar2 = iVar3;
    }
    iVar3 = iVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
  } while (iVar3 != 0x12);
  return iVar2;
}

