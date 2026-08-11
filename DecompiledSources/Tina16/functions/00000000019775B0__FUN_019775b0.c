/* Ghidra address: 019775b0 */
/* Ghidra symbol: FUN_019775b0 */


void FUN_019775b0(longlong param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_00468700(&local_30,param_2);
  (**(code **)(**(longlong **)(param_1 + 0x1e0) + 8))(*(longlong **)(param_1 + 0x1e0),&local_30);
  FUN_00460ba0(&local_30);
  return;
}

