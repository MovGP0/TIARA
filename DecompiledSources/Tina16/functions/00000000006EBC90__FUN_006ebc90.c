/* Ghidra address: 006ebc90 */
/* Ghidra symbol: FUN_006ebc90 */


void FUN_006ebc90(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 local_28 [16];
  
  FUN_006586f0(param_1);
  (**(code **)(*param_1 + 0xe0))(param_1,local_28);
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_03a2fc9d(uVar1,local_28,0);
  return;
}

