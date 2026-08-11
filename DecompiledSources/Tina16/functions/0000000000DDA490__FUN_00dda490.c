/* Ghidra address: 00dda490 */
/* Ghidra symbol: FUN_00dda490 */


undefined8 FUN_00dda490(void)

{
  undefined8 uVar1;
  
  if (DAT_0202db68 == (code *)0x0) {
    uVar1 = 0x8000ffff;
  }
  else {
    uVar1 = (*DAT_0202db68)();
  }
  return uVar1;
}

