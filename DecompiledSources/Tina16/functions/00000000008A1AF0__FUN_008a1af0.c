/* Ghidra address: 008a1af0 */
/* Ghidra symbol: FUN_008a1af0 */


undefined8 FUN_008a1af0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined **ppuVar2;
  int iVar3;
  
  iVar3 = 0xf5;
  ppuVar2 = &PTR_DAT_01e24928;
  do {
    cVar1 = FUN_00879070(param_2,*ppuVar2);
    if (cVar1 != '\0') {
      FUN_00414ad0(param_1,ppuVar2[1]);
      return param_1;
    }
    ppuVar2 = ppuVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00414ad0(param_1,L"-0000");
  return param_1;
}

