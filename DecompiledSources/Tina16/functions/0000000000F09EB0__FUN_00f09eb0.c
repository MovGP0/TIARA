/* Ghidra address: 00f09eb0 */
/* Ghidra symbol: FUN_00f09eb0 */


void FUN_00f09eb0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x260))(*(longlong **)(param_1 + 0x6f8));
  (**(code **)(**(longlong **)(param_1 + 0x700) + 0x128))(*(longlong **)(param_1 + 0x700),uVar1);
  return;
}

