/* Ghidra address: 015fcf20 */
/* Ghidra symbol: FUN_015fcf20 */


void FUN_015fcf20(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res8 [3];
  undefined8 local_res20;
  
  local_res8[0] = param_1;
  local_res20 = param_4;
  FUN_00414610(param_1);
  FUN_00414610(local_res20);
  uVar1 = FUN_01574660(&PTR_FUN_015726b8,1,local_res8[0],param_2,param_3,local_res20);
  FUN_004134c0(uVar1);
  FUN_00414480(local_res8);
  FUN_00414480(&local_res20);
  return;
}

