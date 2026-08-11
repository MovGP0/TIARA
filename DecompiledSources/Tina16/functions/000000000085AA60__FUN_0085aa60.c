/* Ghidra address: 0085aa60 */
/* Ghidra symbol: FUN_0085aa60 */


undefined8 FUN_0085aa60(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (param_3 == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_0085a610(&local_10,param_3);
    FUN_0085a5f0(param_2,local_10);
  }
  FUN_00414480(&local_10);
  return param_2;
}

