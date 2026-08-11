/* Ghidra address: 00bc1d70 */
/* Ghidra symbol: FUN_00bc1d70 */


undefined8 FUN_00bc1d70(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  if (param_1[0x1a] == 0) {
    FUN_00410ae0(*param_1,&local_18);
    FUN_00bcc3f0(&local_10,local_18);
    FUN_00414ad0(param_1 + 0x1a,local_10);
  }
  FUN_00414ad0(param_2,param_1[0x1a]);
  FUN_00414560(&local_18,2);
  return param_2;
}

