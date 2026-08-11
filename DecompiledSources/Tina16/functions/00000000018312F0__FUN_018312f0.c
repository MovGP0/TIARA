/* Ghidra address: 018312f0 */
/* Ghidra symbol: FUN_018312f0 */


undefined8 FUN_018312f0(longlong param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))(*(longlong **)(param_1 + 0x88),&local_30);
  FUN_0046b960(&local_30);
  FUN_00461840(param_2,&local_30);
  FUN_00460ba0(&local_30);
  return param_2;
}

