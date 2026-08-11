/* Ghidra address: 0058b0b0 */
/* Ghidra symbol: FUN_0058b0b0 */


undefined8 FUN_0058b0b0(undefined8 param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = *param_2;
  if (cVar1 == '\x01') {
    FUN_0043f750(param_1,param_3);
  }
  else if ((cVar1 == '\x02') || (cVar1 == '\t')) {
    FUN_0043f750(&local_10,param_3);
    FUN_00416ba0(param_1,&LAB_0058b174,local_10);
  }
  else {
    FUN_005894c0(param_1,param_2,param_3);
  }
  FUN_00414480(&local_10);
  return param_1;
}

