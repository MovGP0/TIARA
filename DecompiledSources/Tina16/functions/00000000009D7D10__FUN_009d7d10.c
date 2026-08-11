/* Ghidra address: 009d7d10 */
/* Ghidra symbol: FUN_009d7d10 */


undefined4
FUN_009d7d10(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)FUN_009d7890(param_1);
  (**(code **)(*plVar1 + 0x2d8))(plVar1,&local_28,param_2,param_3);
  FUN_004168b0(param_4,local_28);
  local_20 = 0;
  FUN_00414520(&local_28);
  return local_20;
}

