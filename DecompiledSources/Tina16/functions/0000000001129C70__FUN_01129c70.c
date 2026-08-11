/* Ghidra address: 01129c70 */
/* Ghidra symbol: FUN_01129c70 */


void FUN_01129c70(longlong param_1,undefined8 param_2,short *param_3,short param_4)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  short *local_40;
  short *local_38;
  short *local_30;
  short *local_28;
  undefined2 local_20 [4];
  undefined8 local_18;
  
  local_50 = auStack_98;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  if (*param_3 == *(short *)(param_1 + 8)) {
    if (param_4 == 8) {
      local_50 = auStack_98;
      local_28 = param_3;
      FUN_0112cfc0(*(undefined8 *)(param_3 + 4),&local_58);
      FUN_004168e0(&local_60,local_58);
      FUN_0046e870(param_1,param_2,local_60);
    }
    else if (param_4 == 0x100) {
      local_50 = auStack_98;
      local_30 = param_3;
      FUN_0112cfc0(*(undefined8 *)(param_3 + 4),&local_68);
      FUN_00415dd0(&local_70,local_68,0);
      FUN_0046e850(param_1,param_2,local_70);
    }
    else if (param_4 == 0x102) {
      local_50 = auStack_98;
      local_38 = param_3;
      FUN_0112cfc0(*(undefined8 *)(param_3 + 4),&local_78);
      FUN_0046e830(param_1,param_2,local_78);
    }
    else {
      local_50 = auStack_98;
      FUN_0046e790(param_1,local_20);
      local_20[0] = 7;
      local_40 = param_3;
      local_18 = FUN_0112cf80(*(undefined8 *)(param_3 + 4));
      FUN_0046e7f0(param_1,param_2,local_20,param_4);
      FUN_0046e7b0(param_1,local_20);
    }
  }
  else {
    FUN_0046e600(param_1,param_2,param_3,param_4);
  }
  FUN_00414480(&local_78);
  FUN_004144d0(&local_70);
  FUN_00414480(&local_68);
  FUN_00414520(&local_60);
  FUN_00414480(&local_58);
  return;
}

