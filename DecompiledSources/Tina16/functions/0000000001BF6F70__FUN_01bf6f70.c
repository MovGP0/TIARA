/* Ghidra address: 01bf6f70 */
/* Ghidra symbol: FUN_01bf6f70 */


void FUN_01bf6f70(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  code *local_38;
  undefined8 local_30;
  code *local_28;
  undefined8 local_20;
  
  FUN_004d2e60(param_1,param_2);
  local_28 = FUN_01bf8e30;
  local_38 = FUN_01bf8fc0;
  local_30 = param_1;
  local_20 = param_1;
  local_48 = FUN_01bf6f30(auStack_68);
  (**(code **)(*param_2 + 8))(param_2,L"StyleName",&local_28,&local_38);
  return;
}

