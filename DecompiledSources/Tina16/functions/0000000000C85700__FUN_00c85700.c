/* Ghidra address: 00c85700 */
/* Ghidra symbol: FUN_00c85700 */


undefined8
FUN_00c85700(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,char param_5,
            undefined8 param_6)

{
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  if (param_5 == '\0') {
    FUN_00c83050(*(undefined8 *)(param_1 + 0x30),param_2,param_3,local_res20,param_6);
  }
  else {
    FUN_00c83050(*(undefined8 *)(param_1 + 8),param_2,param_3,local_res20,param_6);
  }
  FUN_00414480(&local_res20);
  return param_2;
}

