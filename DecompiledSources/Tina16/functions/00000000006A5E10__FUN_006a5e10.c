/* Ghidra address: 006a5e10 */
/* Ghidra symbol: FUN_006a5e10 */


void FUN_006a5e10(longlong *param_1,undefined2 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  (**(code **)(*param_1 + 0x30))(param_1);
  FUN_006a5190(param_1);
  thunk_FUN_0415744e(param_2,param_3);
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}

