/* Ghidra address: 013d0440 */
/* Ghidra symbol: FUN_013d0440 */


void FUN_013d0440(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  if (*(char *)(param_1 + 0x949) == '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x800) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_28,0xc);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x808),local_28);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x800) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,local_20,0xd);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x808),local_20[0]);
  }
  FUN_00414560(&local_28,2);
  return;
}

