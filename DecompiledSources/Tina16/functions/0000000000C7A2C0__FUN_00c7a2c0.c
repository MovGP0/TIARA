/* Ghidra address: 00c7a2c0 */
/* Ghidra symbol: FUN_00c7a2c0 */


undefined8 FUN_00c7a2c0(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_00c7b1b0();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else if (cVar1 == '\x01') {
    uVar2 = 1;
  }
  else if (cVar1 == '\x02') {
    uVar2 = 2;
  }
  else if (cVar1 == '\x03') {
    uVar2 = 3;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

