/* Ghidra address: 019ee820 */
/* Ghidra symbol: FUN_019ee820 */


undefined8
FUN_019ee820(undefined8 param_1,undefined8 param_2,ushort param_3,undefined8 param_4,
            undefined4 param_5)

{
  undefined8 local_res20;
  undefined8 local_10;
  
  local_10 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00416760(&local_10,(&DAT_01fc43d0)[param_3]);
  FUN_019ee690(param_1,param_2,local_10,local_res20,param_5);
  FUN_00414480(&local_10);
  FUN_00414480(&local_res20);
  return param_2;
}

