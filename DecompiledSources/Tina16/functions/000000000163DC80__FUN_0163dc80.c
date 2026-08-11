/* Ghidra address: 0163dc80 */
/* Ghidra symbol: FUN_0163dc80 */


undefined8 FUN_0163dc80(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0043f750(&local_10,*(undefined4 *)(param_1 + 0x88));
  FUN_00416ba0(param_2,&LAB_0163dd14,local_10);
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  FUN_00414480(&local_10);
  return param_2;
}

