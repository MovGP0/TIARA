/* Ghidra address: 00faca70 */
/* Ghidra symbol: FUN_00faca70 */


void FUN_00faca70(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_01b1cf30(param_1 + 0x700,local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

