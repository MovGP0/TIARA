/* Ghidra address: 01d3d620 */
/* Ghidra symbol: FUN_01d3d620 */


undefined8 FUN_01d3d620(short param_1)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = 0x29;
  psVar1 = &DAT_01ff57f4;
  do {
    if (*psVar1 == param_1) {
      return 1;
    }
    psVar1 = psVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

