/* Ghidra address: 004d4710 */
/* Ghidra symbol: FUN_004d4710 */


undefined8 FUN_004d4710(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 8))(*(longlong **)(param_1 + 0x38));
  }
  return uVar1;
}

