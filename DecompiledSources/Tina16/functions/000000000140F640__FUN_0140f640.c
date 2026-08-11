/* Ghidra address: 0140f640 */
/* Ghidra symbol: FUN_0140f640 */


void FUN_0140f640(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  ushort local_28 [4];
  longlong local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_20 = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0xa8))(*(longlong **)(param_1 + 0x760));
  if (cVar1 != '\0') {
    FUN_0140f5d0(param_1,local_28,param_1 + 0x788);
    FUN_00724270(*(undefined8 *)(param_1 + 0x760),&local_38);
    FUN_013a67f0(local_38,local_28,0x10);
    FUN_0140f610(param_1,param_1 + 0x788,local_28);
    FUN_00b0b020(*(undefined8 *)(param_1 + 0x6d0),0);
    FUN_0140e330(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x2a8))(*(longlong **)(param_1 + 0x6d0),1,1);
  }
  if (local_20 != 0) {
    FUN_004095f0(local_20,(uint)local_28[0] * 2);
  }
  FUN_00414480(&local_38);
  return;
}

