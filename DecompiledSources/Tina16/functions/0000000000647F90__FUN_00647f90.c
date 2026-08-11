/* Ghidra address: 00647f90 */
/* Ghidra symbol: FUN_00647f90 */


undefined8 FUN_00647f90(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_18 = 0;
  local_10 = 0;
  if (param_3 == (undefined8 *)0x0) {
    local_20 = auStack_58;
    FUN_00414ad0(param_2,&DAT_00648104);
  }
  else if (param_3[2] == 0) {
    local_10 = 0;
    FUN_00410ae0(*param_3,&local_28);
    FUN_00416ba0(&local_10,local_28,&DAT_00648118);
    FUN_00414480(&local_18);
    FUN_0043fbe0(&local_18,param_3,0x10);
    local_38 = &DAT_0064812c;
    FUN_00416cd0(param_2,3,local_10,local_18);
    FUN_00414480(&local_10);
    FUN_00414480(&local_18);
  }
  else {
    local_20 = auStack_58;
    FUN_00414ad0(param_2,param_3[2]);
  }
  FUN_00414480(&local_28);
  FUN_00414480(&local_18);
  return param_2;
}

