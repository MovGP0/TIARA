/* Ghidra address: 00c799d0 */
/* Ghidra symbol: FUN_00c799d0 */


void FUN_00c799d0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1 + 0x3e0,local_res10[0]);
  thunk_FUN_0413e052(*(undefined8 *)(param_1 + 0x298),0xbbc,0,0);
  FUN_00414480(local_res10);
  return;
}

