/* Ghidra address: 006a5da0 */
/* Ghidra symbol: FUN_006a5da0 */


undefined8 FUN_006a5da0(longlong *param_1,undefined2 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  (**(code **)(*param_1 + 0x30))(param_1);
  local_20 = thunk_FUN_0413b85d(param_2);
  (**(code **)(*param_1 + 0x28))(param_1);
  return local_20;
}

