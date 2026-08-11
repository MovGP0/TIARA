/* Ghidra address: 00ea6ce0 */
/* Ghidra symbol: FUN_00ea6ce0 */


undefined8 FUN_00ea6ce0(int *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_20;
  int local_1c;
  int *local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_10 = 0;
  FUN_00414480(&local_10);
  local_18 = param_1 + 4;
  local_1c = *param_1 + -1;
  local_20 = param_1[1];
  FUN_00416dc0(&local_10,*(undefined8 *)local_18,*param_1,local_20);
  FUN_00414ad0(param_2,local_10);
  FUN_00414480(&local_10);
  FUN_00414480(&local_10);
  return param_2;
}

