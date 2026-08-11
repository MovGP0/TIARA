/* Ghidra address: 0054be10 */
/* Ghidra symbol: FUN_0054be10 */


undefined8 FUN_0054be10(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  (**(code **)(*param_1 + 0x10))(param_1,local_20);
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
  (**(code **)(*plVar1 + 0x10))(plVar1,&local_28);
  FUN_00416cd0(param_2,4,L"property ",local_20[0],&LAB_0054bef8,local_28);
  FUN_00414560(&local_28,2);
  return param_2;
}

