/* Ghidra address: 01d43570 */
/* Ghidra symbol: FUN_01d43570 */


undefined8 FUN_01d43570(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_118 [264];
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0040fb60(local_118,param_2,1,param_3);
  FUN_004169a0(&local_10,local_118);
  FUN_00414ad0(param_1,local_10);
  FUN_00414480(&local_10);
  return param_1;
}

