/* Ghidra address: 00e81d60 */
/* Ghidra symbol: FUN_00e81d60 */


undefined8 FUN_00e81d60(void)

{
  undefined8 uVar1;
  
  if (DAT_0202ea30 == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*DAT_0202ea30)();
  }
  return uVar1;
}

