/* Ghidra address: 01475300 */
/* Ghidra symbol: FUN_01475300 */


void FUN_01475300(longlong param_1)

{
  undefined1 uVar1;
  
  *(undefined4 *)(param_1 + 0x6dc) = 6;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  *(undefined1 *)(param_1 + 0x6d8) = uVar1;
  FUN_00805200(param_1);
  return;
}

