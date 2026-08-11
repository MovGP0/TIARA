/* Ghidra address: 01b3b450 */
/* Ghidra symbol: FUN_01b3b450 */


undefined8 FUN_01b3b450(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  longlong local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414b50(&local_10,local_res10[0]);
  if (local_10 == 0) {
    FUN_00414b50(&local_10,L"Noname");
  }
  FUN_00b90780(param_1,local_10);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return param_1;
}

