/* Ghidra address: 009da720 */
/* Ghidra symbol: FUN_009da720 */


undefined4 FUN_009da720(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  local_30 = 0;
  *param_2 = 0;
  plVar1 = (longlong *)FUN_009da5a0(param_1);
  (**(code **)(*plVar1 + 0x150))(plVar1,&local_30);
  FUN_00416020(&local_28,L"xmlns:",local_30);
  FUN_004168b0(param_2,local_28);
  local_20 = 0;
  FUN_004145c0(&local_30,2);
  return local_20;
}

