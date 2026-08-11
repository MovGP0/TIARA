/* Ghidra address: 004d5dd0 */
/* Ghidra symbol: FUN_004d5dd0 */


void FUN_004d5dd0(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  code *local_48;
  undefined8 local_40;
  code *local_38;
  undefined8 local_30;
  longlong local_20;
  
  FUN_004d2e60(param_1,param_2);
  local_20 = param_2[8];
  local_38 = FUN_004d6130;
  local_48 = FUN_004d61b0;
  local_40 = param_1;
  local_30 = param_1;
  local_58 = FUN_004d5da0(auStack_78);
  (**(code **)(*param_2 + 8))(param_2,L"Height",&local_38,&local_48);
  local_38 = FUN_004d60f0;
  local_48 = FUN_004d6170;
  local_40 = param_1;
  local_30 = param_1;
  local_58 = FUN_004d5d20(auStack_78);
  (**(code **)(*param_2 + 8))(param_2,L"HorizontalOffset",&local_38,&local_48);
  local_38 = FUN_004d6110;
  local_48 = FUN_004d6190;
  local_40 = param_1;
  local_30 = param_1;
  local_58 = FUN_004d5d60(auStack_78);
  (**(code **)(*param_2 + 8))(param_2,L"VerticalOffset",&local_38,&local_48);
  local_38 = FUN_004d60d0;
  local_48 = FUN_004d6150;
  local_40 = param_1;
  local_30 = param_1;
  local_58 = FUN_004d5cf0(auStack_78);
  (**(code **)(*param_2 + 8))(param_2,L"Width",&local_38,&local_48);
  return;
}

