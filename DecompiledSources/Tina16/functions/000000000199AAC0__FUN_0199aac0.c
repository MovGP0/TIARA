/* Ghidra address: 0199aac0 */
/* Ghidra symbol: FUN_0199aac0 */


undefined8 FUN_0199aac0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_0198a580(param_2);
  if ((cVar1 == '\x06') && (*(short *)(param_2 + 0x2d8) == -1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

