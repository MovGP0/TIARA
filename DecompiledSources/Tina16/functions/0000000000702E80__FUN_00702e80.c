/* Ghidra address: 00702e80 */
/* Ghidra symbol: FUN_00702e80 */


undefined8 FUN_00702e80(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_0064b760(param_1);
  if ((cVar1 == '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x28) + 0x338) !=
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x148))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

