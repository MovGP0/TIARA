/* Ghidra address: 004b1330 */
/* Ghidra symbol: FUN_004b1330 */


undefined8 FUN_004b1330(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8));
  }
  return uVar1;
}

