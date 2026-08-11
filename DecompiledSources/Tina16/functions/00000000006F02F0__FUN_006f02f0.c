/* Ghidra address: 006f02f0 */
/* Ghidra symbol: FUN_006f02f0 */


void FUN_006f02f0(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  code *local_38;
  undefined8 local_30;
  code *local_28;
  undefined8 local_20;
  
  FUN_004b11b0(param_1,param_2);
  local_28 = FUN_006f03e0;
  local_38 = (code *)0x0;
  local_30 = 0;
  local_48 = 0;
  local_20 = param_1;
  (**(code **)(*param_2 + 0x10))(param_2,L"Data",&local_28,&local_38);
  local_28 = FUN_006f0740;
  local_38 = FUN_006f0f80;
  local_30 = param_1;
  local_20 = param_1;
  local_48 = FUN_006f0210(auStack_68);
  (**(code **)(*param_2 + 0x10))(param_2,L"ItemData",&local_28,&local_38);
  return;
}

