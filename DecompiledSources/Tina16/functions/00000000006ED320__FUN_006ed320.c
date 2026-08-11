/* Ghidra address: 006ed320 */
/* Ghidra symbol: FUN_006ed320 */


void FUN_006ed320(longlong param_1,longlong *param_2)

{
  code *local_38;
  longlong local_30;
  code *local_28;
  longlong local_20;
  
  FUN_004b11b0(param_1,param_2);
  local_28 = FUN_006ed3b0;
  local_38 = FUN_006ed3f0;
  local_30 = param_1;
  local_20 = param_1;
  (**(code **)(*param_2 + 8))(param_2,L"WidthType",&local_28,&local_38,*(int *)(param_1 + 0x38) < 0)
  ;
  return;
}

