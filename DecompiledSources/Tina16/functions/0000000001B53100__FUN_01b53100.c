/* Ghidra address: 01b53100 */
/* Ghidra symbol: FUN_01b53100 */


void FUN_01b53100(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  *(undefined1 *)(param_1 + 0x5568) = 1;
  FUN_0072d5c0(local_res10[0],1,4,0,0xffffffff,0xffffffff,0);
  FUN_00414480(local_res10);
  return;
}

