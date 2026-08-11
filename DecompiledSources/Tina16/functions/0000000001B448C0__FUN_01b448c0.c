/* Ghidra address: 01b448c0 */
/* Ghidra symbol: FUN_01b448c0 */


void FUN_01b448c0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  *(undefined4 *)(param_1 + 0x6c8) = uVar1;
  *(undefined4 *)(param_1 + 0x508) = 1;
  return;
}

