/* Ghidra address: 01850ce0 */
/* Ghidra symbol: FUN_01850ce0 */


void FUN_01850ce0(longlong param_1)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_0184f110(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28),&local_30);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 8))(*(longlong **)(param_1 + 0x30),&local_30);
  FUN_00460ba0(&local_30);
  return;
}

