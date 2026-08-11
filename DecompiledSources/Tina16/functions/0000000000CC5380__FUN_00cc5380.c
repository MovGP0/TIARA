/* Ghidra address: 00cc5380 */
/* Ghidra symbol: FUN_00cc5380 */


undefined8 FUN_00cc5380(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00cc5df0(param_1,&local_10,3);
  FUN_00414ad0(param_1 + 0x18,local_10);
  FUN_00cc5df0(param_1,param_2,0);
  FUN_00414480(&local_10);
  return param_2;
}

