/* Ghidra address: 006df8b0 */
/* Ghidra symbol: FUN_006df8b0 */


void FUN_006df8b0(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  code *local_38;
  undefined8 local_30;
  code *local_28;
  undefined8 local_20;
  
  FUN_004b11b0(param_1,param_2);
  local_28 = FUN_006df9a0;
  local_38 = (code *)0x0;
  local_30 = 0;
  local_48 = 0;
  local_20 = param_1;
  (**(code **)(*param_2 + 0x10))(param_2,L"Data",&local_28,&local_38);
  local_28 = FUN_006dfb20;
  local_38 = FUN_006dfcd0;
  local_30 = param_1;
  local_20 = param_1;
  local_48 = FUN_006df7f0(auStack_68);
  (**(code **)(*param_2 + 0x10))(param_2,L"NodeData",&local_28,&local_38);
  return;
}

