/* Ghidra address: 007a6210 */
/* Ghidra symbol: FUN_007a6210 */


void FUN_007a6210(longlong param_1,longlong param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_007adfe0(&PTR_FUN_007cd780,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    *(code **)(param_1 + 0x30) = FUN_007a61f0;
  }
  FUN_0041b800(&local_10);
  return;
}

