/* Ghidra address: 00b28670 */
/* Ghidra symbol: FUN_00b28670 */


undefined8 FUN_00b28670(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00b19380(*(undefined8 *)(param_1 + 0x10),&local_10,param_3);
  FUN_00b15310(param_2,local_10);
  FUN_004144d0(&local_10);
  return param_2;
}

