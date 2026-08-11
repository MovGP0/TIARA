/* Ghidra address: 009d7bc0 */
/* Ghidra symbol: FUN_009d7bc0 */


undefined4 FUN_009d7bc0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  plVar1 = (longlong *)FUN_009d7890(param_1);
  FUN_004168e0(&local_28,param_4);
  (**(code **)(*plVar1 + 0x2f8))(plVar1,param_2,param_3,local_28);
  local_20 = 0;
  FUN_00414520(&local_28);
  return local_20;
}

