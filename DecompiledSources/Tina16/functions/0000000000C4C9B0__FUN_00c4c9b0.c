/* Ghidra address: 00c4c9b0 */
/* Ghidra symbol: FUN_00c4c9b0 */


void FUN_00c4c9b0(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  code *local_38;
  longlong local_30;
  code *local_28;
  longlong local_20;
  
  FUN_004d2e60(param_1,param_2);
  local_28 = FUN_00c4cea0;
  local_38 = FUN_00c4cfd0;
  if ((*(longlong *)(param_1 + 0x88) == 0) && (*(longlong *)(param_1 + 0x90) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  local_30 = param_1;
  local_20 = param_1;
  (**(code **)(*param_2 + 8))(param_2,L"LinkInfo",&local_28,&local_38,uVar1);
  return;
}

