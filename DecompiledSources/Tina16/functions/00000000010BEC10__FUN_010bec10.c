/* Ghidra address: 010bec10 */
/* Ghidra symbol: FUN_010bec10 */


void FUN_010bec10(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  plVar1 = *(longlong **)(param_1 + 0x510);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  FUN_010be120(param_1,plVar1[0x9e],uVar2,local_20);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x4f0),local_20[0]);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x4f8),local_20[0]);
  FUN_00414480(local_20);
  return;
}

