/* Ghidra address: 01ba1310 */
/* Ghidra symbol: FUN_01ba1310 */


void FUN_01ba1310(longlong param_1,undefined8 param_2)

{
  longlong local_res8 [4];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00416780(&local_10,*(undefined2 *)(local_res8[0] + 4));
  FUN_00416780(&local_18,*(undefined2 *)(local_res8[0] + 6));
  FUN_00416ba0(param_2,local_10,local_18);
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res8);
  return;
}

