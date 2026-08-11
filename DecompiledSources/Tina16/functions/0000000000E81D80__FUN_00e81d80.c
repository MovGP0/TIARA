/* Ghidra address: 00e81d80 */
/* Ghidra symbol: FUN_00e81d80 */


undefined8 FUN_00e81d80(void)

{
  undefined8 uVar1;
  
  if (DAT_0202ea38 == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*DAT_0202ea38)();
  }
  return uVar1;
}

