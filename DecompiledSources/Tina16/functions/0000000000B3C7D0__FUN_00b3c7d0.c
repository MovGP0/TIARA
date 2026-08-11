/* Ghidra address: 00b3c7d0 */
/* Ghidra symbol: FUN_00b3c7d0 */


longlong * FUN_00b3c7d0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414630(param_3);
  FUN_0061d8e0(param_2,local_res18[0]);
  FUN_0061d490(&local_10,*param_2,&DAT_00b3c8f8,&DAT_00b3c908,1);
  FUN_00414bf0(param_2,local_10);
  FUN_0061d490(&local_18,*param_2,&DAT_00b3c918,&DAT_00b3c908,1);
  FUN_00414bf0(param_2,local_18);
  if (*param_2 == 0) {
    FUN_00414bf0(param_2,"&nbsp;");
  }
  FUN_00414590(&local_18,2);
  FUN_004144d0(local_res18);
  return param_2;
}

