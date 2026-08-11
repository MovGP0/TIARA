/* Ghidra address: 00acbeb0 */
/* Ghidra symbol: FUN_00acbeb0 */


void FUN_00acbeb0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x260))(*(longlong **)(param_1 + 0x158));
  *(undefined4 *)(param_1 + 0x160) = uVar1;
  return;
}

