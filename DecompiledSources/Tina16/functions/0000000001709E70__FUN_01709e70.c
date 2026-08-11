/* Ghidra address: 01709e70 */
/* Ghidra symbol: FUN_01709e70 */


void FUN_01709e70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_10;
  
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_0064de00(*(undefined8 *)PTR_DAT_02004208,local_res10);
  FUN_00416ba0(&local_10,&LAB_01709f58,local_res18);
  FUN_00c54370(*(undefined8 *)PTR_DAT_02004208,local_10);
  FUN_0067fce0(*(undefined8 *)(*(longlong *)PTR_DAT_02004208 + 0x6b0),0);
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  FUN_00414480(&local_10);
  FUN_00414560(&local_res10,2);
  return;
}

