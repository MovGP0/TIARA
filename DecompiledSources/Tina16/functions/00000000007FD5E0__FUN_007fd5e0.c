/* Ghidra address: 007fd5e0 */
/* Ghidra symbol: FUN_007fd5e0 */


void FUN_007fd5e0(longlong param_1,longlong *param_2)

{
  code *local_48;
  longlong local_40;
  code *local_38;
  longlong local_30;
  
  FUN_006556b0(param_1,param_2);
  local_38 = (code *)0x0;
  local_30 = 0;
  local_48 = FUN_007fd7b0;
  local_40 = param_1;
  (**(code **)(*param_2 + 8))
            (param_2,L"PixelsPerInch",&local_38,&local_48,*(char *)(param_1 + 0xb0) == '\0');
  local_38 = FUN_007fd770;
  local_48 = FUN_007fd790;
  local_40 = param_1;
  local_30 = param_1;
  (**(code **)(*param_2 + 8))
            (param_2,L"TextHeight",&local_38,&local_48,*(char *)(param_1 + 0xb0) == '\0');
  local_38 = FUN_007fd740;
  local_48 = (code *)0x0;
  local_40 = 0;
  local_30 = param_1;
  (**(code **)(*param_2 + 8))(param_2,L"IgnoreFontProperty",&local_38,&local_48,0);
  return;
}

