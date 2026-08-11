/* Ghidra address: 010f6df0 */
/* Ghidra symbol: FUN_010f6df0 */


void FUN_010f6df0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x150) + 0x9b0) + 0x68);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x150) + 0x8f0);
  local_28 = ((*(int *)(param_3 + 0x90) + *(int *)(param_3 + 0x98)) - *(int *)(lVar2 + 0x90)) + 5;
  local_24 = *(int *)(param_3 + 0x94) - *(int *)(lVar2 + 0x94);
  local_20 = local_28 + *(int *)(param_1 + 0x11c);
  local_1c = local_24 + *(int *)(param_3 + 0x9c);
  (**(code **)(*plVar1 + 0xa8))(plVar1,&local_28);
  (**(code **)(*plVar1 + 0x130))(plVar1,&local_28,local_28,local_24,local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

