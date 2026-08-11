/* Ghidra address: 01d05040 */
/* Ghidra symbol: FUN_01d05040 */


undefined8 FUN_01d05040(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_01d04d40(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x80))(*(longlong **)(param_1 + 0x1a8));
  }
  return uVar2;
}

