/* Ghidra address: 00703c40 */
/* Ghidra symbol: FUN_00703c40 */


void FUN_00703c40(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x38) = param_2;
  uVar1 = FUN_004b1870(param_1);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),uVar1);
  return;
}

