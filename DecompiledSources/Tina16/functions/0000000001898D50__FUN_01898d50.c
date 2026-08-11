/* Ghidra address: 01898d50 */
/* Ghidra symbol: FUN_01898d50 */


undefined8 FUN_01898d50(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_006e4d80(param_1);
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x72c) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

