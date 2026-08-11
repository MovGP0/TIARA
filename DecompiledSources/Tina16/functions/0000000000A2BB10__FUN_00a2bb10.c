/* Ghidra address: 00a2bb10 */
/* Ghidra symbol: FUN_00a2bb10 */


bool FUN_00a2bb10(undefined8 param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  undefined **ppuVar3;
  
  cVar2 = '\0';
  ppuVar3 = &PTR_DAT_01e71210;
  do {
    iVar1 = FUN_00416db0(*ppuVar3,param_1);
    if (iVar1 == 0) {
      *param_2 = cVar2;
      return true;
    }
    cVar2 = cVar2 + '\x01';
    ppuVar3 = ppuVar3 + 1;
  } while (cVar2 != '\n');
  iVar1 = FUN_00416db0(param_1,L"aural");
  if (iVar1 == 0) {
    *param_2 = '\a';
  }
  return iVar1 == 0;
}

