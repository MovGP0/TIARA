/* Ghidra address: 00a65300 */
/* Ghidra symbol: FUN_00a65300 */


undefined8 FUN_00a65300(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  
  iVar3 = 9;
  ppuVar2 = &PTR_u_none_01e77340;
  do {
    iVar1 = FUN_00416db0(param_2,*ppuVar2);
    if (iVar1 == 0) {
      return 1;
    }
    ppuVar2 = ppuVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 0;
}

