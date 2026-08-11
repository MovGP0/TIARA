/* Ghidra address: 00fc1870 */
/* Ghidra symbol: FUN_00fc1870 */


void FUN_00fc1870(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  *(undefined4 *)(param_1 + 0xaf0) = uVar1;
  return;
}

