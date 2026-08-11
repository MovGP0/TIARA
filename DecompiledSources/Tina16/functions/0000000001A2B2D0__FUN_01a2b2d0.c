/* Ghidra address: 01a2b2d0 */
/* Ghidra symbol: FUN_01a2b2d0 */


undefined1 FUN_01a2b2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 local_res18;
  char local_res20;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined2 local_50;
  undefined1 *local_48;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  undefined1 local_20 [15];
  undefined1 local_11;
  undefined8 local_10;
  
  local_30 = auStack_78;
  local_38 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  local_58 = local_58 & 0xffffffffffffff00;
  local_50 = 0;
  local_48 = local_24;
  FUN_014b7d50(0,param_2,1,0);
  local_10 = FUN_019c7500(&DAT_019bfa70,1,param_2);
  FUN_00416ba0(&local_38,*(undefined8 *)PTR_DAT_02005010,L"\\VhdlSession0\\graph.json");
  local_58 = local_res18;
  local_50 = CONCAT11(local_50._1_1_,1);
  FUN_019c42e0(local_10,param_2,local_20,local_38);
  if (local_res20 == '\0') {
    FUN_0072d440(L"The JSON file has been saved.",1,4,0);
  }
  local_11 = 1;
  FUN_00410f20(local_10);
  FUN_00414480(&local_38);
  FUN_00414480(&local_res18);
  return local_11;
}

