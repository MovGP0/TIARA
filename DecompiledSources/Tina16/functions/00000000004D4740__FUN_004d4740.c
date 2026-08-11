/* Ghidra address: 004d4740 */
/* Ghidra symbol: FUN_004d4740 */


undefined8 FUN_004d4740(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))(*(longlong **)(param_1 + 0x38));
  }
  return uVar1;
}

