/* Ghidra address: 007de0d0 */
/* Ghidra symbol: FUN_007de0d0 */


void FUN_007de0d0(undefined8 param_1,longlong *param_2)

{
  undefined8 local_48;
  undefined8 uStack_40;
  code *local_38;
  undefined8 local_30;
  
  FUN_004d2e60(param_1,param_2);
  local_38 = FUN_007ddd50;
  local_48 = 0;
  uStack_40 = 0;
  local_30 = param_1;
  (**(code **)(*param_2 + 8))(param_2,L"ShortCutText",&local_38,&local_48,0);
  return;
}

