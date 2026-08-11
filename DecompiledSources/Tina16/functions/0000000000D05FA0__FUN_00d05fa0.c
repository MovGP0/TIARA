/* Ghidra address: 00d05fa0 */
/* Ghidra symbol: FUN_00d05fa0 */


void FUN_00d05fa0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar1 = FUN_00d05e00(param_1);
  FUN_00ce1e60(uVar1,*(undefined8 *)(param_3 + 0x20));
  FUN_00d00e60(param_1,local_res10[0],param_3,param_4);
  FUN_00414480(local_res10);
  return;
}

