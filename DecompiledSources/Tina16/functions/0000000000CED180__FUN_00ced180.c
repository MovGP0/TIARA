/* Ghidra address: 00ced180 */
/* Ghidra symbol: FUN_00ced180 */


char FUN_00ced180(short param_1)

{
  char cVar1;
  short *psVar2;
  
  cVar1 = '\0';
  psVar2 = &DAT_01eb1a38;
  do {
    if (param_1 == *psVar2) {
      return cVar1;
    }
    cVar1 = cVar1 + '\x01';
    psVar2 = psVar2 + 1;
  } while (cVar1 != '@');
  return '\0';
}

