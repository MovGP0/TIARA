/* Ghidra address: 01609a70 */
/* Ghidra symbol: FUN_01609a70 */


bool FUN_01609a70(undefined8 param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined8 local_10;
  
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_0043e130(&local_10,local_res8[0]);
  iVar1 = FUN_00416db0(local_10,L"WIFI");
  FUN_00414480(&local_10);
  FUN_00414480(local_res8);
  return iVar1 == 0;
}

