/* Ghidra address: 007d7e90 */
/* Ghidra symbol: FUN_007d7e90 */


void FUN_007d7e90(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  FUN_004d2e60(param_1,param_2);
  local_28 = *(undefined8 *)(*param_1 + 0xb0);
  local_38 = *(undefined8 *)(*param_1 + 0xb8);
  local_30 = param_1;
  local_20 = param_1;
  local_48 = FUN_007d7e10(auStack_68);
  (**(code **)(*param_2 + 0x10))(param_2,L"Bitmap",&local_28,&local_38);
  return;
}

