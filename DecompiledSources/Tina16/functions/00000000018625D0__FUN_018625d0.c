/* Ghidra address: 018625d0 */
/* Ghidra symbol: FUN_018625d0 */


void FUN_018625d0(longlong *param_1,longlong *param_2)

{
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_28 = *(undefined8 *)(*param_1 + 0x68);
  local_38 = *(undefined8 *)(*param_1 + 0x90);
  local_30 = param_1;
  local_20 = param_1;
  (**(code **)(*param_2 + 0x10))(param_2,L"Data",&local_28,&local_38,1);
  return;
}

