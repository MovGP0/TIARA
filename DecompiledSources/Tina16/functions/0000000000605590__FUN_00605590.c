/* Ghidra address: 00605590 */
/* Ghidra symbol: FUN_00605590 */


void FUN_00605590(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  code *local_38;
  undefined8 local_30;
  code *local_28;
  undefined8 local_20;
  
  local_28 = FUN_006051d0;
  local_38 = FUN_006053f0;
  local_30 = param_1;
  local_20 = param_1;
  local_48 = FUN_00605500(auStack_68);
  (**(code **)(*param_2 + 0x10))(param_2,L"Data",&local_28,&local_38);
  return;
}

