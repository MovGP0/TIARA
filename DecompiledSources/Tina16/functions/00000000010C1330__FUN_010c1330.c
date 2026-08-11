/* Ghidra address: 010c1330 */
/* Ghidra symbol: FUN_010c1330 */


undefined8
FUN_010c1330(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
            undefined1 param_5)

{
  undefined1 local_128 [256];
  undefined8 local_28;
  undefined1 local_20 [16];
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  FUN_00b8fd60(&local_10,param_2,param_5,0,0);
  FUN_00b909e0(local_20,param_3);
  FUN_004169a0(&local_28,local_20);
  FUN_00416ad0(&local_10,local_28);
  FUN_00416910(local_128,local_10,0xff);
  FUN_00415020(param_4,local_128,0x50);
  FUN_00415020(param_1,param_4,0x50);
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  return param_1;
}

