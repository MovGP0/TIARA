/* Ghidra address: 00c99250 */
/* Ghidra symbol: FUN_00c99250 */


void FUN_00c99250(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined1 *local_180;
  undefined1 local_16a [160];
  undefined1 local_ca;
  undefined1 local_c9 [160];
  undefined1 local_29;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_180 = auStack_1b8;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  if (param_3 == 0) {
    FUN_00414480(&local_18);
    (*DAT_01eaa928)(param_2,local_16a,0xa0);
    local_ca = 0;
    FUN_00416800(&local_18,local_16a,0xa1);
    FUN_00414b50(&local_20,local_18);
    FUN_00414480(&local_18);
  }
  else {
    local_180 = auStack_1b8;
    FUN_00414480(&local_10);
    (*DAT_01eaa928)(param_2,local_c9,0xa0);
    local_29 = 0;
    FUN_00416800(&local_10,local_c9,0xa1);
    local_198 = local_10;
    FUN_00416cd0(&local_20,3,param_3,&LAB_00c9944c);
    FUN_00414480(&local_10);
  }
  local_28 = (**(code **)(param_1 + 0x10))(param_1,1,local_20);
  *(undefined4 *)(local_28 + 0x30) = param_2;
  FUN_004134c0(local_28);
  FUN_00414560(&local_20,3);
  return;
}

