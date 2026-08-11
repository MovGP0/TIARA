/* Ghidra address: 00601eb0 */
/* Ghidra symbol: FUN_00601eb0 */


void FUN_00601eb0(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_28 = *(undefined8 *)(*param_1 + 0x68);
  local_38 = *(undefined8 *)(*param_1 + 0x90);
  local_30 = param_1;
  local_20 = param_1;
  local_48 = FUN_00601e40(auStack_68);
  (**(code **)(*param_2 + 0x10))(param_2,L"Data",&local_28,&local_38);
  return;
}

