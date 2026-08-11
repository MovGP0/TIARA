/* Ghidra address: 01cf1be0 */
/* Ghidra symbol: FUN_01cf1be0 */


undefined8 FUN_01cf1be0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_2 + 0x78);
  if (cVar1 == '\0') {
    uVar2 = 0x47;
  }
  else if (cVar1 == '\x05') {
    uVar2 = 0x46;
  }
  else if (cVar1 == '\x04') {
    uVar2 = 0x45;
  }
  else if (cVar1 == '\x03') {
    uVar2 = 0x44;
  }
  else if (cVar1 == '\x02') {
    uVar2 = 0x42;
  }
  else {
    uVar2 = 0x39;
  }
  return uVar2;
}

