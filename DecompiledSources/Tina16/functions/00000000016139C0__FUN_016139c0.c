/* Ghidra address: 016139c0 */
/* Ghidra symbol: FUN_016139c0 */


void FUN_016139c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  uVar1 = FUN_01619130(&DAT_016171d0,1,local_res8[0],param_2);
  FUN_004ae7e0(param_3,uVar1);
  FUN_00414480(local_res8);
  return;
}

