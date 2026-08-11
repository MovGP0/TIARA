/* Ghidra address: 00622100 */
/* Ghidra symbol: FUN_00622100 */


undefined8 FUN_00622100(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_00411110();
  if (cVar1 == '\0') {
    uVar2 = 0x80004002;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

