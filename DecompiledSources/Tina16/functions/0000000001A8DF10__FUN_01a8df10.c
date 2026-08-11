/* Ghidra address: 01a8df10 */
/* Ghidra symbol: FUN_01a8df10 */


short FUN_01a8df10(char param_1)

{
  short sVar1;
  char *pcVar2;
  
  sVar1 = 0;
  pcVar2 = &DAT_01fcc876;
  do {
    if (*pcVar2 == param_1) {
      return sVar1;
    }
    sVar1 = sVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (sVar1 != 7);
  return 0;
}

