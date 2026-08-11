/* Ghidra address: 00786090 */
/* Ghidra symbol: FUN_00786090 */


undefined8 FUN_00786090(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_0065be20(*(undefined8 *)(param_1 + 0x10));
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x10));
  }
  return uVar2;
}

