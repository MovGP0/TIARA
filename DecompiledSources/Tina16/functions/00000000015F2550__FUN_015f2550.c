/* Ghidra address: 015f2550 */
/* Ghidra symbol: FUN_015f2550 */


undefined8 FUN_015f2550(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 4;
  piVar1 = &DAT_01f74ba8;
  do {
    if (*piVar1 == param_1) {
      return 1;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

