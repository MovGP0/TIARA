/* Ghidra address: 01544810 */
/* Ghidra symbol: FUN_01544810 */


void FUN_01544810(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_2 + 8) + 0x288))(*(longlong **)(param_2 + 8),local_20);
  uVar1 = FUN_0153f7d0(&DAT_0153e548,1,*(undefined8 *)(param_2 + 8),1,local_20[0]);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))(*(longlong **)(param_1 + 0x28),uVar1);
  FUN_00414480(local_20);
  return;
}

