/* Ghidra address: 01d07330 */
/* Ghidra symbol: FUN_01d07330 */


undefined4 FUN_01d07330(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_01d07320(param_1);
  cVar1 = (**(code **)(*param_1 + 0x2d8))(param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_0173d730(param_1[0x33]);
  }
  return uVar2;
}

