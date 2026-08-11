/* Ghidra address: 0195f180 */
/* Ghidra symbol: FUN_0195f180 */


void FUN_0195f180(longlong param_1,longlong *param_2)

{
  int iVar1;
  code *local_48;
  longlong local_40;
  code *local_38;
  longlong local_30;
  
  FUN_004d2e60(param_1,param_2);
  local_38 = FUN_0195f2c0;
  local_48 = FUN_0195f280;
  local_40 = param_1;
  local_30 = param_1;
  iVar1 = FUN_004b2060(*(undefined8 *)(param_1 + 0x2c8));
  (**(code **)(*param_2 + 8))(param_2,L"Formats",&local_38,&local_48,1 < iVar1);
  local_38 = FUN_0195f2e0;
  local_48 = FUN_0195f2a0;
  local_40 = param_1;
  local_30 = param_1;
  iVar1 = FUN_004b2060(*(undefined8 *)(param_1 + 0x2f8));
  (**(code **)(*param_2 + 8))(param_2,L"Highlights",&local_38,&local_48,1 < iVar1);
  return;
}

