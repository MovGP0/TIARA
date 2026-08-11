/* Ghidra address: 006556b0 */
/* Ghidra symbol: FUN_006556b0 */


void FUN_006556b0(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  code *local_38;
  undefined8 local_30;
  code *local_28;
  undefined8 local_20;
  
  FUN_00650560(param_1,param_2);
  local_28 = FUN_006554b0;
  local_38 = FUN_00655500;
  local_30 = param_1;
  local_20 = param_1;
  local_48 = FUN_00655590(auStack_68);
  (**(code **)(*param_2 + 8))(param_2,L"DesignSize",&local_28,&local_38);
  return;
}

