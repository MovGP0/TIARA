/* Ghidra address: 00bb36a0 */
/* Ghidra symbol: FUN_00bb36a0 */


undefined8 FUN_00bb36a0(undefined8 param_1,undefined8 param_2)

{
  longlong *local_20 [2];
  
  local_20[0] = (longlong *)0x0;
  FUN_00bb3000(param_1,local_20);
  if (local_20[0] == (longlong *)0x0) {
    FUN_00414480(param_2);
  }
  else {
    (**(code **)(*local_20[0] + 0xb8))(local_20[0],param_2);
  }
  FUN_0041b800(local_20);
  return param_2;
}

