/* Ghidra address: 01648af0 */
/* Ghidra symbol: FUN_01648af0 */


undefined8 FUN_01648af0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  FUN_016485d0(param_1,uVar1,local_res10[0]);
  uVar2 = FUN_01648740(param_1,uVar1,local_res10[0]);
  FUN_00410f20(uVar1);
  FUN_00414480(local_res10);
  return uVar2;
}

