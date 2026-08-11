/* Ghidra address: 006a5ea0 */
/* Ghidra symbol: FUN_006a5ea0 */


undefined2 FUN_006a5ea0(longlong *param_1,int param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined2 local_1a;
  
  local_30 = auStack_58;
  (**(code **)(*param_1 + 0x30))(param_1);
  local_1a = thunk_FUN_03a59683(0);
  for (; 0 < param_2; param_2 = param_2 + -1) {
    local_1a = thunk_FUN_03a59683(local_1a);
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  return local_1a;
}

