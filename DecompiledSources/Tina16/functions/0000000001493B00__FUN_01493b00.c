/* Ghidra address: 01493b00 */
/* Ghidra symbol: FUN_01493b00 */


bool FUN_01493b00(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_0072d440(local_res10[0],3,3,0);
  FUN_00414480(local_res10);
  return iVar1 == 6;
}

