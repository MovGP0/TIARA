/* Ghidra address: 010cb790 */
/* Ghidra symbol: FUN_010cb790 */


bool FUN_010cb790(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 local_res8 [4];
  int local_c;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  uVar1 = FUN_0040e860(local_res8[0],&local_c);
  *param_2 = uVar1;
  FUN_00414480(local_res8);
  return local_c != 0;
}

