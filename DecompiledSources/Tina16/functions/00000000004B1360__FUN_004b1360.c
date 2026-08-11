/* Ghidra address: 004b1360 */
/* Ghidra symbol: FUN_004b1360 */


undefined8 FUN_004b1360(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8));
  }
  return uVar1;
}

