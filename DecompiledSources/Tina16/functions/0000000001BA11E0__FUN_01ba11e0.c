/* Ghidra address: 01ba11e0 */
/* Ghidra symbol: FUN_01ba11e0 */


void FUN_01ba11e0(undefined2 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined2 *local_res8 [4];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00416780(&local_20,*local_res8[0]);
  FUN_00416780(&local_28,local_res8[0][1]);
  FUN_00416ba0(&local_10,local_20,local_28);
  uVar1 = FUN_01ba1080(local_10);
  *param_2 = uVar1;
  FUN_00416780(&local_30,local_res8[0][2]);
  FUN_00416780(&local_38,local_res8[0][3]);
  FUN_00416ba0(&local_18,local_30,local_38);
  uVar1 = FUN_01ba1080(local_18);
  *param_3 = uVar1;
  FUN_00414560(&local_38,6);
  FUN_00414480(local_res8);
  return;
}

