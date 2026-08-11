/* Ghidra address: 0068e660 */
/* Ghidra symbol: FUN_0068e660 */


undefined8 FUN_0068e660(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_0064e910(param_1);
  if ((cVar1 == '\0') || (*(char *)(param_1 + 0x490) == '\x01')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

