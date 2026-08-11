/* Ghidra address: 00cd9b90 */
/* Ghidra symbol: FUN_00cd9b90 */


void FUN_00cd9b90(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 local_20 [2];
  longlong local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  FUN_00cd9270(param_1,&local_10,param_2);
  if (local_10 != 0) {
    FUN_008af330(local_20,local_10);
    FUN_00414b50(&local_10,local_20[0]);
    if (param_3 != 0) {
      FUN_00416cd0(&local_10,3,local_10,&LAB_00cd9c74,param_3);
    }
    FUN_00cd98b0(param_1,param_2,local_10);
  }
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return;
}

