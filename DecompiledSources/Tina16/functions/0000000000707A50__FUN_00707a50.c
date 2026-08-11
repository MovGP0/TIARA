/* Ghidra address: 00707a50 */
/* Ghidra symbol: FUN_00707a50 */


void FUN_00707a50(undefined8 param_1,longlong *param_2)

{
  undefined8 local_48;
  undefined8 uStack_40;
  code *local_38;
  undefined8 local_30;
  
  local_38 = FUN_007079d0;
  local_48 = 0;
  uStack_40 = 0;
  local_30 = param_1;
  (**(code **)(*param_2 + 8))(param_2,L"ExtendedImage",&local_38,&local_48,0);
  local_38 = FUN_007079f0;
  local_48 = 0;
  uStack_40 = 0;
  local_30 = param_1;
  (**(code **)(*param_2 + 8))(param_2,L"SubsetTitle",&local_38,&local_48,0);
  local_38 = FUN_007078f0;
  local_48 = 0;
  uStack_40 = 0;
  local_30 = param_1;
  (**(code **)(*param_2 + 8))(param_2,L"TopDescription",&local_38,&local_48,0);
  local_38 = FUN_00707960;
  local_48 = 0;
  uStack_40 = 0;
  local_30 = param_1;
  (**(code **)(*param_2 + 8))(param_2,L"BottomDescription",&local_38,&local_48,0);
  return;
}

