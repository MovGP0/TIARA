/* Ghidra address: 0195f420 */
/* Ghidra symbol: FUN_0195f420 */


undefined8 FUN_0195f420(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_0195b9c0(param_1);
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x328) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

