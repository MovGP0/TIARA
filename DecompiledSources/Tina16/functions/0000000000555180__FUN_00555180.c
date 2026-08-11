/* Ghidra address: 00555180 */
/* Ghidra symbol: FUN_00555180 */


undefined8 FUN_00555180(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_005471b0();
  if (cVar1 == '\x05') {
    uVar2 = 0;
  }
  else if (cVar1 == '\n') {
    uVar2 = 1;
  }
  else if (cVar1 == '\v') {
    uVar2 = 2;
  }
  else if (cVar1 == '\x12') {
    uVar2 = 3;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

