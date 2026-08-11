/* Ghidra address: 01a2a060 */
/* Ghidra symbol: FUN_01a2a060 */


undefined8 FUN_01a2a060(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_38 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00441920(&local_38,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
  FUN_0147d310(&local_30,local_38);
  local_28 = local_30;
  local_20 = 0x11;
  FUN_00442f70(&local_10,local_res10[0],&local_28,0);
  FUN_00416cd0(&local_18,3,*(undefined8 *)PTR_DAT_02005010,L"\\VhdlSession0\\Temp\\",local_10);
  FUN_00414ad0(param_1,local_18);
  FUN_00414560(&local_38,2);
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res10);
  return param_1;
}

