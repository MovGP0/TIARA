/* Ghidra address: 01a8db90 */
/* Ghidra symbol: FUN_01a8db90 */


short FUN_01a8db90(int param_1)

{
  short sVar1;
  int *piVar2;
  
  sVar1 = 0;
  piVar2 = &DAT_01fcc838;
  do {
    if (*piVar2 == param_1) {
      return sVar1;
    }
    sVar1 = sVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (sVar1 != 0xb);
  return 0;
}

