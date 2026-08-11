/* Ghidra address: 0142a6c0 */
/* Ghidra symbol: FUN_0142a6c0 */


void FUN_0142a6c0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0xa8))(*(longlong **)(param_1 + 0x6e0));
  if (cVar2 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x6e0),local_20);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_20[0]);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),&local_28);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4d8);
    (**(code **)(*plVar1 + 0xd8))(plVar1,local_28);
  }
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

