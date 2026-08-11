/* Ghidra address: 0162f1d0 */
/* Ghidra symbol: FUN_0162f1d0 */


undefined8 FUN_0162f1d0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 8);
  if (((cVar1 == '1') || (cVar1 == '3')) || (cVar1 == '\x01')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

