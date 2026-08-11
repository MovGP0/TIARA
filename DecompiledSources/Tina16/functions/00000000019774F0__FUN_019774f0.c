/* Ghidra address: 019774f0 */
/* Ghidra symbol: FUN_019774f0 */


undefined8 FUN_019774f0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x10))(*(longlong **)(param_1 + 0x1e0),&local_30);
  uVar1 = FUN_004634b0(&local_30);
  FUN_00460ba0(&local_30);
  return uVar1;
}

