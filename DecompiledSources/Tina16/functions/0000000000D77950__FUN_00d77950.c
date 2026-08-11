/* Ghidra address: 00d77950 */
/* Ghidra symbol: FUN_00d77950 */


void FUN_00d77950(undefined8 param_1,longlong *param_2)

{
  code *local_48;
  undefined8 local_40;
  code *local_38;
  undefined8 local_30;
  
  FUN_004d2e60(param_1,param_2);
  local_38 = FUN_00d77a70;
  local_48 = FUN_00d77b10;
  local_40 = param_1;
  local_30 = param_1;
  (**(code **)(*param_2 + 0x10))(param_2,L"Objects",&local_38,&local_48,1);
  local_38 = FUN_00d77a30;
  local_48 = FUN_00d77a50;
  local_40 = param_1;
  local_30 = param_1;
  (**(code **)(*param_2 + 8))(param_2,L"Locked",&local_38,&local_48,1);
  return;
}

