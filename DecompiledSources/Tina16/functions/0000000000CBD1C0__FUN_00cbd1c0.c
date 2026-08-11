/* Ghidra address: 00cbd1c0 */
/* Ghidra symbol: FUN_00cbd1c0 */


void FUN_00cbd1c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x108) + 0x30);
  (**(code **)(*plVar1 + 0x38))(plVar1,local_20);
  uVar2 = (**(code **)(param_2 + 0x10))(param_2,1,local_20[0]);
  FUN_004134c0(uVar2);
  FUN_00414480(local_20);
  return;
}

