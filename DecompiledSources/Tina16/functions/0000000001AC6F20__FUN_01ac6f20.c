/* Ghidra address: 01ac6f20 */
/* Ghidra symbol: FUN_01ac6f20 */


undefined8 FUN_01ac6f20(undefined8 param_1,char param_2,byte param_3,undefined8 param_4)

{
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  if (param_2 == '\x03') {
    if (param_3 < 4) {
      if (param_3 == 3) {
        FUN_00de8980(param_1,0x308,local_res20);
      }
      else if (param_3 == 0) {
        FUN_00de8980(param_1,0x305,local_res20);
      }
      else if (param_3 == 1) {
        FUN_00de8980(param_1,0x306,local_res20);
      }
      else if (param_3 == 2) {
        FUN_00de8980(param_1,0x307,local_res20);
      }
    }
    else if (param_3 == 4) {
      FUN_00de8980(param_1,0x309,local_res20);
    }
    else if (param_3 == 5) {
      FUN_00de8980(param_1,0x30a,local_res20);
    }
  }
  else if (param_3 == 0) {
    FUN_00de8980(param_1,0x301,local_res20);
  }
  else if (param_3 == 1) {
    FUN_00de8980(param_1,0x302,local_res20);
  }
  else if (param_3 == 2) {
    FUN_00de8980(param_1,0x300,local_res20);
  }
  FUN_00414480(&local_res20);
  return param_1;
}

