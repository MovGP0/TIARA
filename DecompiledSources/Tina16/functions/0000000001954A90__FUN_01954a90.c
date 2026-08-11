/* Ghidra address: 01954a90 */
/* Ghidra symbol: FUN_01954a90 */


void FUN_01954a90(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  code *local_48;
  longlong *local_40;
  code *local_38;
  longlong *local_30;
  
  FUN_004d2e60(param_1,param_2);
  local_38 = FUN_01954b80;
  local_48 = FUN_01954be0;
  local_40 = param_1;
  local_30 = param_1;
  lVar1 = (**(code **)(*param_1 + 0x118))(param_1);
  (**(code **)(*param_2 + 8))(param_2,L"pLeft",&local_38,&local_48,lVar1 != 0);
  local_38 = FUN_01954bb0;
  local_48 = FUN_01954c10;
  local_40 = param_1;
  local_30 = param_1;
  lVar1 = (**(code **)(*param_1 + 0x118))(param_1);
  (**(code **)(*param_2 + 8))(param_2,L"pTop",&local_38,&local_48,lVar1 != 0);
  return;
}

