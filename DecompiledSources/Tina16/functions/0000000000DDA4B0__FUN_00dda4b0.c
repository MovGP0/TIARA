/* Ghidra address: 00dda4b0 */
/* Ghidra symbol: FUN_00dda4b0 */


undefined8 FUN_00dda4b0(void)

{
  undefined8 uVar1;
  
  if (DAT_0202db70 == (code *)0x0) {
    uVar1 = 0x8000ffff;
  }
  else {
    uVar1 = (*DAT_0202db70)();
  }
  return uVar1;
}

