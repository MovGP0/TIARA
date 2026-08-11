/* Ghidra address: 00a7c8e0 */
/* Ghidra symbol: FUN_00a7c8e0 */


void FUN_00a7c8e0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  param_1[1] = param_2;
  (**(code **)(*param_1 + 8))(param_1,param_2);
  param_1[1] = 0;
  return;
}

