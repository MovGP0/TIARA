/* Ghidra address: 01436540 */
/* Ghidra symbol: FUN_01436540 */


void FUN_01436540(longlong *param_1,undefined8 param_2)

{
  longlong local_20 [2];
  
  local_20[0] = 0;
  FUN_00414b50(local_20,param_2);
  if (local_20[0] != 0) {
    FUN_00416ba0(local_20,&LAB_014365d4,local_20[0]);
  }
  (**(code **)(*param_1 + 0x40))(param_1,local_20[0]);
  FUN_00414480(local_20);
  return;
}

