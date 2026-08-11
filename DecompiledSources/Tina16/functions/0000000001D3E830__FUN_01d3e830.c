/* Ghidra address: 01d3e830 */
/* Ghidra symbol: FUN_01d3e830 */


undefined4 FUN_01d3e830(short param_1)

{
  short *psVar1;
  undefined4 *puVar2;
  char cVar3;
  
  cVar3 = '\x1a';
  psVar1 = &DAT_01ff57f4;
  puVar2 = &DAT_01ff5d8c;
  do {
    if (*psVar1 == param_1) {
      return *puVar2;
    }
    puVar2 = puVar2 + 0xc;
    psVar1 = psVar1 + 1;
    cVar3 = cVar3 + -1;
  } while (cVar3 != '\0');
  return 0xffffffff;
}

