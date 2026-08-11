/* Ghidra address: 00458730 */
/* Ghidra symbol: FUN_00458730 */


int FUN_00458730(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_01dbe834;
  do {
    if (param_1 == *piVar2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 != 0xfc);
  return -1;
}

