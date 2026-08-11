/* Ghidra address: 00bb5a40 */
/* Ghidra symbol: FUN_00bb5a40 */


undefined8 FUN_00bb5a40(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (param_4 == '\0') {
    uVar1 = FUN_0041b800(param_2);
    FUN_005963a0(param_1 + 8,local_res18,uVar1);
  }
  else {
    uVar1 = FUN_0041b800(param_2);
    FUN_005963f0(param_1 + 8,local_res18,uVar1);
  }
  return param_2;
}

