/* Ghidra address: 01871210 */
/* Ghidra symbol: FUN_01871210 */


void FUN_01871210(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x70),local_20);
  FUN_004168e0(&local_28,local_20[0]);
  (**(code **)(*plVar1 + 0x358))(plVar1,local_28);
  FUN_00414520(&local_28);
  FUN_00414480(local_20);
  return;
}

