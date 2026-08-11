/* Ghidra address: 00c994a0 */
/* Ghidra symbol: FUN_00c994a0 */


void FUN_00c994a0(longlong param_1,int param_2,int param_3,longlong param_4)

{
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined1 local_c9 [160];
  undefined1 local_29;
  undefined8 local_28;
  longlong local_20;
  int local_14;
  undefined8 local_10;
  
  local_e0 = auStack_118;
  local_f8 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_28 = 0;
  local_10 = 0;
  if (param_4 == 0) {
    FUN_00414480(&local_28);
  }
  else {
    local_e0 = auStack_118;
    FUN_00416ba0(&local_28,param_4,&LAB_00c99768);
  }
  if (param_2 == 1) {
    FUN_00c99220(&PTR_FUN_00c98108,param_4);
  }
  else if (param_2 == 5) {
    local_14 = (*DAT_01eaa938)();
    if (local_14 != 0) {
      FUN_00c99250(&PTR_FUN_00c98108,local_14,param_4);
    }
    if (param_3 == 0) {
      FUN_0041ddd0(&local_f0,PTR_PTR_02001e18);
      FUN_00416ba0(&local_e8,local_28,local_f0);
      local_20 = (**(code **)(param_1 + 0x10))(param_1,1,local_e8);
      *(undefined4 *)(local_20 + 0x30) = 5;
      *(undefined4 *)(local_20 + 0x34) = 0;
      FUN_004134c0(local_20);
    }
    if (param_3 == -1) {
      FUN_0089ca80(*(undefined8 *)PTR_DAT_020050b0);
    }
  }
  FUN_00414480(&local_10);
  (*DAT_01eaa928)(param_2,local_c9,0xa0);
  local_29 = 0;
  FUN_00416800(&local_10,local_c9,0xa1);
  FUN_00416ba0(&local_f8,local_28,local_10);
  local_20 = (**(code **)(param_1 + 0x10))(param_1,1,local_f8);
  FUN_00414480(&local_10);
  *(int *)(local_20 + 0x30) = param_2;
  *(int *)(local_20 + 0x34) = param_3;
  FUN_004134c0(local_20);
  FUN_00414560(&local_f8,3);
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  return;
}

