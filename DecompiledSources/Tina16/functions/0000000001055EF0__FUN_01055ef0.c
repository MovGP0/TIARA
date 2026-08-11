/* Ghidra address: 01055ef0 */
/* Ghidra symbol: FUN_01055ef0 */


void FUN_01055ef0(undefined8 param_1,undefined1 *param_2)

{
  undefined8 local_res8 [4];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00416cd0(&local_10,3,local_res8[0],&DAT_01056124,&DAT_01056134);
  FUN_0041ddd0(local_20,PTR_PTR_02003990);
  FUN_00416cd0(&local_10,5,local_10,&DAT_01056144,local_20[0],&DAT_01056124,&DAT_01056134);
  FUN_0041ddd0(&local_28,PTR_PTR_02003c60);
  FUN_00416cd0(&local_10,5,local_10,&DAT_01056144,local_28,&DAT_01056124,&DAT_01056134);
  FUN_0041ddd0(&local_30,PTR_PTR_02002290);
  FUN_00416cd0(&local_10,5,local_10,&DAT_01056144,local_30,&DAT_01056124,&DAT_01056134);
  FUN_0041ddd0(&local_38,PTR_PTR_02005c08);
  FUN_00416cd0(&local_10,5,local_10,&DAT_01056144,local_38,&DAT_01056124,&DAT_01056134);
  FUN_0072d440(local_10,1,4,0);
  *param_2 = 1;
  FUN_00414560(&local_38,4);
  FUN_00414480(&local_10);
  FUN_00414480(local_res8);
  return;
}

