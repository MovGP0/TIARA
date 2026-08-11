/* Ghidra address: 00a2c0c0 */
/* Ghidra symbol: FUN_00a2c0c0 */


double FUN_00a2c0c0(longlong param_1,char param_2,double param_3,double param_4,double param_5)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  byte local_56;
  char local_55;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  char local_41;
  undefined8 *local_40;
  byte local_31;
  longlong local_30;
  double local_28;
  double local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_70 = auStack_a8;
  local_80 = 0;
  local_78 = 0;
  local_30 = 0;
  local_18 = 0;
  local_10 = 0;
  local_20 = param_5;
  FUN_00414480(&local_30);
  local_28 = (double)FUN_00410100(param_1,&local_48);
  local_41 = local_48 != 1;
  if ((bool)local_41) {
    local_54 = 0;
    if (param_1 != 0) {
      local_54 = *(int *)(param_1 + -4);
    }
    local_50 = local_54;
    if (local_48 == 0) {
      local_48 = local_54 + 1;
    }
    local_4c = FUN_004170c0(&LAB_00a2c478,param_1,1);
    if ((0 < local_4c) && (local_4c < local_48)) {
      local_48 = local_4c;
    }
    if (local_48 <= local_50) {
      FUN_00416dc0(&local_78,param_1,1,local_48 + -1);
      local_28 = (double)FUN_00410100(local_78,&local_4c);
      FUN_00416dc0(&local_80,param_1,local_48,(local_50 - local_48) + 1);
      FUN_0043ea00(&local_30,local_80);
    }
  }
  if (local_41 != '\0') {
    if (local_30 == 0) {
      if (param_2 != '\0') {
        local_20 = local_28 * param_3;
      }
    }
    else {
      local_18 = 0;
      local_10 = 0;
      FUN_00414480(&local_10);
      FUN_0043e600(&local_10,local_30);
      FUN_00414b50(&local_18,local_10);
      FUN_00414480(&local_10);
      local_56 = 0;
      local_68 = &DAT_01e712d0;
      do {
        local_60 = *local_68;
        iVar2 = FUN_0043e210(local_60,local_18);
        if (iVar2 == 0) {
          local_55 = '\x01';
          local_31 = local_56;
          goto code_r0x00a2c315;
        }
        local_56 = local_56 + 1;
        local_68 = local_68 + 3;
      } while (local_56 != 10);
      local_55 = '\0';
code_r0x00a2c315:
      FUN_00414480(&local_10);
      FUN_00414480(&local_18);
      if (local_55 != '\0') {
        lVar1 = (ulonglong)local_31 * 0x18;
        local_40 = &DAT_01e712d0 + (ulonglong)local_31 * 3;
        if ((&DAT_01e712e4)[lVar1] == '\0') {
          if (local_31 == 3) {
            local_20 = local_28 * dRam0000000001e71320 * param_3;
          }
          else {
            local_20 = local_28 * *(double *)(&DAT_01e712d8 + lVar1) * param_4;
          }
        }
        else {
          local_20 = local_28 * *(double *)(&DAT_01e712d8 + lVar1);
        }
      }
    }
  }
  FUN_00414560(&local_80,2);
  FUN_00414480(&local_30);
  return local_20;
}

