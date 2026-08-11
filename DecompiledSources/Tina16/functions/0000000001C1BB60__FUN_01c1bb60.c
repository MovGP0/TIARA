/* Ghidra address: 01c1bb60 */
/* Ghidra symbol: FUN_01c1bb60 */


undefined ** FUN_01c1bb60(void)

{
  char cVar1;
  undefined **ppuVar2;
  
  cVar1 = FUN_01c1b7b0();
  if (cVar1 == '\0') {
    ppuVar2 = &PTR_FUN_01c0eae8;
  }
  else if (cVar1 == '\x01') {
    ppuVar2 = &PTR_FUN_01c09cf8;
  }
  else {
    ppuVar2 = &PTR_FUN_01c15438;
  }
  return ppuVar2;
}

