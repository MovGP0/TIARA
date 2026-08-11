/* Ghidra address: 01609410 */
/* Ghidra symbol: FUN_01609410 */


bool FUN_01609410(undefined8 param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar1 = FUN_004170c0(L"XMC7",local_res8[0],1);
  FUN_00414480(local_res8);
  return iVar1 == 1;
}

