/* Ghidra address: 00c37150 */
/* Ghidra symbol: FUN_00c37150 */


undefined8 FUN_00c37150(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong local_res18;
  undefined8 local_res20;
  longlong local_10;
  
  local_10 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  if (local_res18 != 0) {
    FUN_00441a10(&local_10,local_res18);
    if (local_10 == 0) {
      FUN_00416cd0(&local_res18,3,local_res18,&LAB_00c37228,local_res20);
    }
  }
  FUN_00414ad0(param_2,local_res18);
  FUN_00414480(&local_10);
  FUN_00414560(&local_res18,2);
  return param_2;
}

