/* Ghidra address: 009d8b70 */
/* Ghidra symbol: FUN_009d8b70 */


undefined4 FUN_009d8b70(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  plVar1 = (longlong *)FUN_009d81f0(param_1);
  FUN_004168e0(&local_28,param_2);
  (**(code **)(*plVar1 + 0x328))(plVar1,0,local_28);
  local_20 = 0;
  FUN_00414520(&local_28);
  return local_20;
}

