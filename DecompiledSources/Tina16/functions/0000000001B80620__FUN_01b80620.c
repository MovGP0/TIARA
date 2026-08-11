/* Ghidra address: 01b80620 */
/* Ghidra symbol: FUN_01b80620 */


bool FUN_01b80620(undefined8 param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar1 = FUN_00416db0(local_res8[0],L"dflop");
  FUN_00414480(local_res8);
  return iVar1 == 0;
}

