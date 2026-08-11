/* Ghidra address: 0146f570 */
/* Ghidra symbol: FUN_0146f570 */


void FUN_0146f570(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0xa8))(*(longlong **)(param_1 + 0x6c0));
  if (cVar2 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x6c0),local_20);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x4e8);
    (**(code **)(*plVar1 + 0xd8))(plVar1,local_20[0]);
    FUN_00724270(*(undefined8 *)(param_1 + 0x6c0),&local_28);
    FUN_00414ad0(param_1 + 0x7f0,local_28);
    FUN_00414ad0(param_1 + 0x7e8,*(undefined8 *)(param_1 + 0x7f0));
    FUN_0146fe10(param_1);
  }
  FUN_00414560(&local_28,2);
  return;
}

