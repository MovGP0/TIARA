/* Ghidra address: 00a658f0 */
/* Ghidra symbol: FUN_00a658f0 */


undefined8 FUN_00a658f0(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  char cVar2;
  undefined **ppuVar3;
  
  cVar2 = '\0';
  ppuVar3 = &PTR_u_italic_01e77388;
  do {
    iVar1 = FUN_00416db0(*ppuVar3,param_2);
    if (iVar1 == 0) {
      *param_3 = cVar2;
      return 1;
    }
    cVar2 = cVar2 + '\x01';
    ppuVar3 = ppuVar3 + 1;
  } while (cVar2 != '\x10');
  return 0;
}

