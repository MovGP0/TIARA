/* Ghidra address: 006ecaf0 */
/* Ghidra symbol: FUN_006ecaf0 */


void FUN_006ecaf0(undefined8 param_1,longlong *param_2)

{
  undefined8 local_48;
  undefined8 uStack_40;
  code *local_38;
  undefined8 local_30;
  
  FUN_006556b0(param_1,param_2);
  local_38 = FUN_006ecfe0;
  local_48 = 0;
  uStack_40 = 0;
  local_30 = param_1;
  (**(code **)(*param_2 + 0x10))(param_2,L"DoubleBuffered",&local_38,&local_48,0);
  local_38 = FUN_006ecfe0;
  local_48 = 0;
  uStack_40 = 0;
  local_30 = param_1;
  (**(code **)(*param_2 + 0x10))(param_2,L"ParentDoubleBuffered",&local_38,&local_48,0);
  return;
}

