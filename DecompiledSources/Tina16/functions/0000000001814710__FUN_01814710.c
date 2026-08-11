/* Ghidra address: 01814710 */
/* Ghidra symbol: FUN_01814710 */


undefined8
FUN_01814710(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_00410ae0(*param_3,&local_10);
  FUN_01813180(param_1,&local_18,param_3,0,param_4);
  FUN_00416ba0(param_2,local_10,local_18);
  FUN_00414560(&local_18,2);
  return param_2;
}

