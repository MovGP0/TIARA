/* Ghidra address: 01b4b1e0 */
/* Ghidra symbol: FUN_01b4b1e0 */


undefined8 FUN_01b4b1e0(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_118 [264];
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0040fb60(local_118,param_2,5,0xffffffff);
  FUN_004169a0(&local_10,local_118);
  FUN_00414ad0(param_1,local_10);
  FUN_00414480(&local_10);
  return param_1;
}

