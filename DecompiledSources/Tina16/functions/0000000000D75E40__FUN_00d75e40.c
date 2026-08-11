/* Ghidra address: 00d75e40 */
/* Ghidra symbol: FUN_00d75e40 */


undefined8 FUN_00d75e40(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_00d75e80();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x20000;
  }
  return uVar2;
}

