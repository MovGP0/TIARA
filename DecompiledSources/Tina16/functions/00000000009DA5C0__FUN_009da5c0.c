/* Ghidra address: 009da5c0 */
/* Ghidra symbol: FUN_009da5c0 */


undefined4 FUN_009da5c0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  *param_2 = 0;
  plVar1 = (longlong *)FUN_009da5a0(param_1);
  (**(code **)(*plVar1 + 0x180))(plVar1,&local_28);
  FUN_004168b0(param_2,local_28);
  local_20 = 0;
  FUN_00414520(&local_28);
  return local_20;
}

