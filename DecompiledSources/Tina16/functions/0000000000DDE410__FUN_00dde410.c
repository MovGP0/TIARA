/* Ghidra address: 00dde410 */
/* Ghidra symbol: FUN_00dde410 */


void FUN_00dde410(longlong param_1,longlong *param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  code *local_50;
  longlong local_48;
  code *local_40;
  longlong local_38;
  undefined1 *local_30;
  
  local_30 = auStack_88;
  FUN_006556b0(param_1,param_2);
  local_40 = FUN_00ddfbb0;
  local_50 = FUN_00de0bb0;
  local_68 = *(longlong *)(param_1 + 0x4b0) != 0;
  local_48 = param_1;
  local_38 = param_1;
  (**(code **)(*param_2 + 0x10))(param_2,L"ControlData",&local_40,&local_50);
  return;
}

