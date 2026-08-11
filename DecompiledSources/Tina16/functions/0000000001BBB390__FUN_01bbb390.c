/* Ghidra address: 01bbb390 */
/* Ghidra symbol: FUN_01bbb390 */


void FUN_01bbb390(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_3 + 8,local_res10[0]);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),param_3);
  FUN_00414480(local_res10);
  return;
}

