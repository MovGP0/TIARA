/* Ghidra address: 00d2a1a0 */
/* Ghidra symbol: FUN_00d2a1a0 */


void FUN_00d2a1a0(longlong param_1,longlong *param_2)

{
  code *local_38;
  longlong local_30;
  code *local_28;
  longlong local_20;
  
  FUN_004d2e60(param_1,param_2);
  local_28 = FUN_00d2a000;
  local_38 = FUN_00d2a130;
  local_30 = param_1;
  local_20 = param_1;
  (**(code **)(*param_2 + 8))
            (param_2,L"Hash",&local_28,&local_38,*(longlong *)(param_1 + 0x78) != 0);
  return;
}

