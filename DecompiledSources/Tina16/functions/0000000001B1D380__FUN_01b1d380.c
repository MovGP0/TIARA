/* Ghidra address: 01b1d380 */
/* Ghidra symbol: FUN_01b1d380 */


undefined8 FUN_01b1d380(undefined8 param_1,undefined8 param_2,ushort param_3)

{
  undefined1 local_118 [264];
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0040e780(local_118,param_3,1);
  FUN_004169a0(&local_10,local_118);
  if (param_3 < 10) {
    FUN_00416ba0(&local_10,&LAB_01b1d448,local_10);
  }
  FUN_00414ad0(param_2,local_10);
  FUN_00414480(&local_10);
  return param_2;
}

