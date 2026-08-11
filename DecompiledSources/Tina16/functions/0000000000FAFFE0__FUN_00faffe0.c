/* Ghidra address: 00faffe0 */
/* Ghidra symbol: FUN_00faffe0 */


void FUN_00faffe0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  *(undefined4 *)(param_1 + 0x9f8) = uVar1;
  return;
}

