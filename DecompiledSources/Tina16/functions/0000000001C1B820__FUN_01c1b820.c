/* Ghidra address: 01c1b820 */
/* Ghidra symbol: FUN_01c1b820 */


undefined ** FUN_01c1b820(void)

{
  char cVar1;
  undefined **ppuVar2;
  
  cVar1 = FUN_01c1b7b0();
  if (cVar1 == '\0') {
    ppuVar2 = &PTR_FUN_01c0f7d8;
  }
  else if (cVar1 == '\x01') {
    ppuVar2 = &PTR_FUN_01c0a0b0;
  }
  else {
    ppuVar2 = &PTR_FUN_01c157f0;
  }
  return ppuVar2;
}

