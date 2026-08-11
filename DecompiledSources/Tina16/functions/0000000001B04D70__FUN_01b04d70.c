/* Ghidra address: 01b04d70 */
/* Ghidra symbol: FUN_01b04d70 */


void FUN_01b04d70(short param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  longlong local_res18;
  short local_22;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  local_22 = param_1;
  if (param_1 == 0x103) {
    local_22 = 0x83;
  }
  if (*PTR_DAT_020052b8 == '\0') {
    FUN_00de8980(&local_10,local_22,local_res10);
    if (local_res18 != 0) {
      FUN_00416cd0(&local_10,4,local_10,&DAT_01b04ed0,local_res18,&LAB_01b04ee4);
    }
    uVar1 = FUN_0044d490(&PTR_FUN_01af2c90,1,local_10);
    FUN_004134c0(uVar1);
  }
  else {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,local_20,local_22);
    FUN_013a4820(*(undefined8 *)PTR_DAT_020032b8,local_20[0]);
    FUN_0044d440();
  }
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  FUN_00414560(&local_res10,2);
  return;
}

