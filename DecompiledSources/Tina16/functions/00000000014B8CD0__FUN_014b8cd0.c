/* Ghidra address: 014b8cd0 */
/* Ghidra symbol: FUN_014b8cd0 */


void FUN_014b8cd0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0xa8))(*(longlong **)(param_1 + 0x6f8));
  if (cVar2 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x6f8),local_20);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4d8);
    (**(code **)(*plVar1 + 0xd8))(plVar1,local_20[0]);
  }
  FUN_00414480(local_20);
  return;
}

