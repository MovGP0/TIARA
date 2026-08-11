/* Ghidra address: 006a5ac0 */
/* Ghidra symbol: FUN_006a5ac0 */


void FUN_006a5ac0(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = auStack_58;
  (**(code **)(*param_1 + 0x30))(param_1);
  local_20 = thunk_FUN_0413b85d(3);
  local_28 = thunk_FUN_0413b85d(9);
  (**(code **)(*param_2 + 0xd0))(param_2,3,local_20,local_28);
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}

