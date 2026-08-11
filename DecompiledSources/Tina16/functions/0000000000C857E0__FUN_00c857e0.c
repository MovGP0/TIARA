/* Ghidra address: 00c857e0 */
/* Ghidra symbol: FUN_00c857e0 */


undefined8
FUN_00c857e0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,char param_6)

{
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  if (param_6 == '\0') {
    FUN_00c83240(*(undefined8 *)(param_1 + 0x30),param_2,param_3,local_res20,param_5);
  }
  else {
    FUN_00c83240(*(undefined8 *)(param_1 + 8),param_2,param_3,local_res20,param_5);
  }
  FUN_00414560(&local_res20,2);
  return param_2;
}

