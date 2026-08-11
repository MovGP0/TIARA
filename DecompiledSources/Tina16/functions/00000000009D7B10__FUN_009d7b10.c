/* Ghidra address: 009d7b10 */
/* Ghidra symbol: FUN_009d7b10 */


undefined4 FUN_009d7b10(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  plVar1 = (longlong *)FUN_009d7890(param_1);
  FUN_004168e0(&local_28,param_3);
  (**(code **)(*plVar1 + 0x2e8))(plVar1,param_2,local_28);
  local_20 = 0;
  FUN_00414520(&local_28);
  return local_20;
}

