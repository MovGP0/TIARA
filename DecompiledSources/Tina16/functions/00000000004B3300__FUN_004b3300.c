/* Ghidra address: 004b3300 */
/* Ghidra symbol: FUN_004b3300 */


void FUN_004b3300(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  code *local_38;
  undefined8 local_30;
  code *local_28;
  undefined8 local_20;
  
  local_28 = FUN_004b4820;
  local_38 = FUN_004b5000;
  local_30 = param_1;
  local_20 = param_1;
  local_48 = FUN_004b3290(auStack_68);
  (**(code **)(*param_2 + 8))(param_2,L"Strings",&local_28,&local_38);
  return;
}

