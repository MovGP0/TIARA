/* Ghidra address: 00d06020 */
/* Ghidra symbol: FUN_00d06020 */


undefined8 FUN_00d06020(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar1 = FUN_00d05e00(param_1);
  FUN_00ce1e60(uVar1,*(undefined8 *)(param_4 + 0x20));
  FUN_00d01ce0(param_1,param_2,local_res18[0],param_4);
  FUN_00414480(local_res18);
  return param_2;
}

