/* Ghidra address: 00bb15d0 */
/* Ghidra symbol: FUN_00bb15d0 */


undefined8 FUN_00bb15d0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar1 = FUN_00bb32b0(param_1[3]);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 8))(param_1,local_20);
    FUN_00bad1a0(param_2,local_20[0]);
  }
  else {
    (**(code **)(*param_1 + 8))(param_1,param_2);
  }
  FUN_00414480(local_20);
  return param_2;
}

