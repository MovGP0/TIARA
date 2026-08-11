/* Ghidra address: 016ba340 */
/* Ghidra symbol: FUN_016ba340 */


undefined8 FUN_016ba340(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414480(param_2);
  while (*(char *)(param_1 + 0x9a0) != '\0') {
    FUN_00416760(&local_10,*(char *)(param_1 + 0x9a0));
    FUN_00416ad0(param_2,local_10);
    FUN_016b9d20(param_1);
  }
  FUN_00414480(&local_10);
  return param_2;
}

