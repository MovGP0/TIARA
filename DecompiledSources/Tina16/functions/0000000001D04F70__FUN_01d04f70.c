/* Ghidra address: 01d04f70 */
/* Ghidra symbol: FUN_01d04f70 */


undefined8 FUN_01d04f70(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_01d04d40(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0176a450(*(undefined8 *)(param_1 + 0x1a8),param_2);
  }
  return uVar2;
}

