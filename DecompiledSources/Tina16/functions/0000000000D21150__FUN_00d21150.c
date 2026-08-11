/* Ghidra address: 00d21150 */
/* Ghidra symbol: FUN_00d21150 */


void FUN_00d21150(longlong *param_1,int *param_2)

{
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_68 = 0;
  local_28 = 0;
  local_60 = 0;
  (**(code **)(*param_1 + 0x38))(param_1,1,0);
  (**(code **)(*param_1 + 0x78))(param_1);
  if (*param_2 < 0) {
    *param_2 = 0;
  }
  if ((int)param_1[8] < *param_2) {
    if (DAT_01ebbdc4 == '\0') {
      *param_2 = (int)param_1[8];
    }
    else {
      FUN_0041ddd0(&local_28,PTR_PTR_02001d10);
      FUN_00410ae0(*param_1,&local_60);
      local_58 = local_60;
      local_50 = 0x11;
      local_48 = 0;
      local_40 = 0;
      local_38 = (undefined4)param_1[8];
      local_30 = 0;
      FUN_00442f70(local_20,local_28,&local_58,2);
      FUN_00415dd0(&local_68,local_20[0],0);
      FUN_00d20b50(2,local_68);
    }
  }
  FUN_004144d0(&local_68);
  FUN_00414480(&local_60);
  FUN_00414560(&local_28,2);
  return;
}

