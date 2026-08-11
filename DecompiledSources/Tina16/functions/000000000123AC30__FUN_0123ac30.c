/* Ghidra address: 0123ac30 */
/* Ghidra symbol: FUN_0123ac30 */


undefined8 FUN_0123ac30(longlong param_1)

{
  short sVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  sVar1 = *(short *)(param_1 + 0x1fa4);
  if (sVar1 == 0x4c) {
    uVar2 = 0;
  }
  else if (sVar1 == 0x48) {
    uVar2 = 1;
  }
  else if (sVar1 == 0x50) {
    uVar2 = 2;
  }
  else if (sVar1 == 0x53) {
    uVar2 = 3;
  }
  return uVar2;
}

