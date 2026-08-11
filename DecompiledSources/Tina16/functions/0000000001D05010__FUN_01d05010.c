/* Ghidra address: 01d05010 */
/* Ghidra symbol: FUN_01d05010 */


undefined8 FUN_01d05010(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_01d04d40(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0176a4c0(*(undefined8 *)(param_1 + 0x1a8));
  }
  return uVar2;
}

