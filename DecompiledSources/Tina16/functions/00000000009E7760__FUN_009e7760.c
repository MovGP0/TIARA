/* Ghidra address: 009e7760 */
/* Ghidra symbol: FUN_009e7760 */


void FUN_009e7760(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  code *local_38;
  undefined8 local_30;
  code *local_28;
  undefined8 local_20;
  
  local_28 = FUN_009e8820;
  local_38 = FUN_009e9170;
  local_30 = param_1;
  local_20 = param_1;
  local_48 = FUN_009e76f0(auStack_68);
  (**(code **)(*param_2 + 8))(param_2,L"Strings",&local_28,&local_38);
  return;
}

