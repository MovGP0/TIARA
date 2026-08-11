/* Ghidra address: 00f9c370 */
/* Ghidra symbol: FUN_00f9c370 */


void FUN_00f9c370(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  *(undefined4 *)(param_1 + 0x860) = uVar1;
  return;
}

