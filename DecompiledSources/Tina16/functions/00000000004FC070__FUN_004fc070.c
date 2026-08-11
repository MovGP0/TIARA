/* Ghidra address: 004fc070 */
/* Ghidra symbol: FUN_004fc070 */


undefined8 FUN_004fc070(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (param_4 == '\0') {
    uVar1 = FUN_00414480(param_2);
    FUN_00596580(param_1 + 8,local_res18,uVar1);
  }
  else {
    uVar1 = FUN_00414480(param_2);
    FUN_005965d0(param_1 + 8,local_res18,uVar1);
  }
  return param_2;
}

