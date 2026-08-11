/* Ghidra address: 01615600 */
/* Ghidra symbol: FUN_01615600 */


bool FUN_01615600(undefined8 param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar1 = FUN_00416db0(local_res8[0],L"IntReserved1258");
  FUN_00414480(local_res8);
  return iVar1 == 0;
}

