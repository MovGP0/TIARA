/* Ghidra address: 01411e50 */
/* Ghidra symbol: FUN_01411e50 */


void FUN_01411e50(longlong param_1)

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
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x788) + 0xa8))(*(longlong **)(param_1 + 0x788));
  if (cVar1 != '\0') {
    FUN_01411de0(param_1,local_28,param_1 + 0x7b0);
    FUN_00724270(*(undefined8 *)(param_1 + 0x788),&local_38);
    FUN_013a67f0(local_38,local_28,0x20);
    FUN_01411e20(param_1,param_1 + 0x7b0,local_28);
    FUN_00b0b020(*(undefined8 *)(param_1 + 0x6d0),0);
    FUN_01410d70(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x2a8))(*(longlong **)(param_1 + 0x6d0),1,1);
  }
  if (local_20 != 0) {
    FUN_004095f0(local_20,(uint)local_28[0] * 2);
  }
  FUN_00414480(&local_38);
  return;
}

