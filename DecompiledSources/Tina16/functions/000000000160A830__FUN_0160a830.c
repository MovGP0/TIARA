/* Ghidra address: 0160a830 */
/* Ghidra symbol: FUN_0160a830 */


undefined8 FUN_0160a830(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined4 local_a4;
  undefined4 local_a0;
  
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  FUN_01609da0(&local_a4);
  local_a4 = 0x400;
  local_a0 = 0x120;
  FUN_0160aa50(param_1,&local_a4);
  FUN_004144d0(local_res10);
  return param_1;
}

