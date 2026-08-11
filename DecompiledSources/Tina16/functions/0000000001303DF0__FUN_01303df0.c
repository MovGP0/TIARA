/* Ghidra address: 01303df0 */
/* Ghidra symbol: FUN_01303df0 */


void FUN_01303df0(longlong param_1)

{
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x7a0),&local_10);
  FUN_00414ad0(*(longlong *)(param_1 + 0x7a0) + 0xf0,local_10);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x7c0),&local_18);
  FUN_00414ad0(*(longlong *)(param_1 + 0x7c0) + 0xf0,local_18);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x7d8),&local_20);
  FUN_00414ad0(*(longlong *)(param_1 + 0x7d8) + 0xf0,local_20);
  FUN_00414560(&local_20,3);
  return;
}

