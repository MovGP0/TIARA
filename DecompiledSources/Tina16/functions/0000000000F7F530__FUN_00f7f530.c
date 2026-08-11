/* Ghidra address: 00f7f530 */
/* Ghidra symbol: FUN_00f7f530 */


undefined8 FUN_00f7f530(longlong param_1,undefined8 param_2)

{
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  FUN_00416780(&local_10,*(undefined2 *)(param_1 + 0x38));
  FUN_00f7f400(param_1);
  while (*(short *)(param_1 + 0x38) != 0x20) {
    FUN_00416780(local_20,*(short *)(param_1 + 0x38));
    FUN_00416ad0(&local_10,local_20[0]);
    FUN_00f7f400(param_1);
  }
  FUN_00414ad0(param_2,local_10);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return param_2;
}

