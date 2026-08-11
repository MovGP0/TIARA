/* Ghidra address: 008f7810 */
/* Ghidra symbol: FUN_008f7810 */


void FUN_008f7810(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8));
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))(*(longlong **)(param_1 + 0x10),uVar1);
  return;
}

