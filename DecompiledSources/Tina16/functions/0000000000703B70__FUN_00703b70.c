/* Ghidra address: 00703b70 */
/* Ghidra symbol: FUN_00703b70 */


void FUN_00703b70(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_004b1a00(param_1);
  uVar1 = FUN_004b1870(param_1);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),uVar1);
  return;
}

