/* Ghidra address: 01806f20 */
/* Ghidra symbol: FUN_01806f20 */


void FUN_01806f20(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  code *local_38;
  longlong *local_30;
  code *local_28;
  longlong *local_20;
  
  local_28 = FUN_01807500;
  local_38 = (code *)0x0;
  local_30 = (longlong *)0x0;
  local_20 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  local_48 = 0 < iVar1;
  (**(code **)(*param_2 + 8))(param_2,L"Strings",&local_28,&local_38);
  local_28 = FUN_01807740;
  local_38 = (code *)0x0;
  local_30 = (longlong *)0x0;
  local_20 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  local_48 = 0 < iVar1;
  (**(code **)(*param_2 + 8))(param_2,L"UTF8",&local_28,&local_38);
  local_28 = FUN_01807670;
  local_38 = FUN_01807a90;
  local_30 = param_1;
  local_20 = param_1;
  local_48 = FUN_01806eb0(auStack_68);
  (**(code **)(*param_2 + 8))(param_2,L"UTF8W",&local_28,&local_38);
  return;
}

