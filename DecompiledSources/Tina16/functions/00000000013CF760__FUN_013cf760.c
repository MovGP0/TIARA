/* Ghidra address: 013cf760 */
/* Ghidra symbol: FUN_013cf760 */


void FUN_013cf760(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  bVar2 = *(char *)(param_1 + 0x949) == '\0';
  *(bool *)(param_1 + 0x949) = bVar2;
  if (bVar2) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x800) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,local_20,0xd);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x808),local_20[0]);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x800) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_28,0xc);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x808),local_28);
  }
  FUN_013cd390(param_1);
  FUN_00414560(&local_28,2);
  return;
}

