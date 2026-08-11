/* Ghidra address: 00c37020 */
/* Ghidra symbol: FUN_00c37020 */


undefined8 FUN_00c37020(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (*(int *)(param_1 + 0xcc) == 1) {
    *(undefined1 *)(param_1 + 0xcb) = 0xe;
    FUN_00416cd0(param_1 + 0xc0,3,L" Missing parameter for ",*(undefined8 *)(param_1 + 0xc0),
                 &LAB_00c37140);
    FUN_00414480(&local_10);
  }
  else {
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
    *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + -1;
    FUN_00409da0(&local_10,*(undefined4 *)(param_1 + 0xbc));
  }
  FUN_00414ad0(param_2,local_10);
  FUN_00414480(&local_10);
  return param_2;
}

