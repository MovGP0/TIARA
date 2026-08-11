/* Ghidra address: 00f867c0 */
/* Ghidra symbol: FUN_00f867c0 */


void FUN_00f867c0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x260))(*(longlong **)(param_1 + 0x6c8));
  *(undefined4 *)(param_1 + 0x6d8) = uVar1;
  return;
}

