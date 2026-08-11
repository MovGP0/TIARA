/* Ghidra address: 004d8910 */
/* Ghidra symbol: FUN_004d8910 */


void FUN_004d8910(longlong param_1,longlong *param_2)

{
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  (**(code **)(*param_2 + -0x60))(param_2,&local_28);
  FUN_00459ca0(*(undefined8 *)(param_1 + 0x10),local_20,local_28);
  FUN_004d8330(param_1,local_20[0]);
  FUN_00414480(&local_28);
  FUN_00419430(local_20,&DAT_00406578);
  return;
}

