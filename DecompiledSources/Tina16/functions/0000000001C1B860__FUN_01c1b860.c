/* Ghidra address: 01c1b860 */
/* Ghidra symbol: FUN_01c1b860 */


undefined ** FUN_01c1b860(void)

{
  char cVar1;
  undefined **ppuVar2;
  
  cVar1 = FUN_01c1b7b0();
  if (cVar1 == '\0') {
    ppuVar2 = &PTR_FUN_01bce028;
  }
  else if (cVar1 == '\x01') {
    ppuVar2 = &PTR_FUN_01bce7c8;
  }
  else {
    ppuVar2 = &PTR_FUN_01bcef60;
  }
  return ppuVar2;
}

