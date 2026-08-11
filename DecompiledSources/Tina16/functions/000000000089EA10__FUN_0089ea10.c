/* Ghidra address: 0089ea10 */
/* Ghidra symbol: FUN_0089ea10 */


undefined8 * FUN_0089ea10(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414ad0(param_1,param_2);
  cVar1 = FUN_00879090(*param_1,&LAB_0089eac4);
  if (cVar1 != '\0') {
    FUN_00879060(param_1,1,1);
    FUN_00874ee0(&local_10,param_1,&LAB_0089eac4,1,1);
    FUN_00414ad0(param_1,local_10);
  }
  FUN_00414480(&local_10);
  return param_1;
}

