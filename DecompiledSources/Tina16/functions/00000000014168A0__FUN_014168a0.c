/* Ghidra address: 014168a0 */
/* Ghidra symbol: FUN_014168a0 */


void FUN_014168a0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x260))(*(longlong **)(param_1 + 0x778));
  (**(code **)(**(longlong **)(param_1 + 0x758) + 0x128))(*(longlong **)(param_1 + 0x758),uVar1);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x260))(*(longlong **)(param_1 + 0x778));
  (**(code **)(**(longlong **)(param_1 + 0x760) + 0x128))(*(longlong **)(param_1 + 0x760),uVar1);
  return;
}

