/* Ghidra address: 006a5130 */
/* Ghidra symbol: FUN_006a5130 */


void FUN_006a5130(longlong *param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  (**(code **)(*param_1 + 0x30))(param_1);
  thunk_FUN_03ff56c8();
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}

