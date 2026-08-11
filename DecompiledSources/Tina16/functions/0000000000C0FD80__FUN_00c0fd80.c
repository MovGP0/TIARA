/* Ghidra address: 00c0fd80 */
/* Ghidra symbol: FUN_00c0fd80 */


void FUN_00c0fd80(undefined8 param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  code *local_38;
  undefined8 local_30;
  code *local_28;
  undefined8 local_20;
  
  FUN_006556b0(param_1,param_2);
  uVar1 = FUN_00c0fcb0(auStack_68);
  local_28 = FUN_00c0ffb0;
  local_38 = FUN_00c10290;
  local_48 = uVar1;
  local_30 = param_1;
  local_20 = param_1;
  (**(code **)(*param_2 + 8))(param_2,L"RemovedKeystrokes",&local_28,&local_38);
  local_28 = FUN_00c0fed0;
  local_38 = FUN_00c100f0;
  local_48 = uVar1;
  local_30 = param_1;
  local_20 = param_1;
  (**(code **)(*param_2 + 8))(param_2,L"AddedKeystrokes",&local_28,&local_38);
  return;
}

