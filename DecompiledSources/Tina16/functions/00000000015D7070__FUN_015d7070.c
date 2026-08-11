/* Ghidra address: 015d7070 */
/* Ghidra symbol: FUN_015d7070 */


undefined8
FUN_015d7070(longlong param_1,undefined8 param_2,short *param_3,undefined8 param_4,
            undefined1 *param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_88;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  if (param_3 != (short *)0x0) {
    local_1c = *(int *)(param_3 + -2);
  }
  puVar1 = auStack_88;
  if (0 < local_1c) {
    if ((*param_3 == 0x5c) || (*param_3 == 0x2f)) {
      *param_5 = 0;
      local_20 = 0;
      if (param_3 != (short *)0x0) {
        local_20 = *(int *)(param_3 + -2);
      }
      if (local_20 < 2) {
        local_30 = auStack_88;
        FUN_015c1220(param_2,param_4,0,*(undefined8 *)(param_1 + 0x78));
        puVar1 = local_30;
      }
      else if ((param_3[1] == 0x5c) || (param_3[1] == 0x2f)) {
        local_30 = auStack_88;
        FUN_00414ad0(param_2,param_3);
        puVar1 = local_30;
      }
      else {
        local_10 = 0;
        local_30 = auStack_88;
        FUN_015c1220(&local_38,param_4,0,*(undefined8 *)(param_1 + 0x78));
        FUN_015bf040(&local_10,local_38);
        local_24 = 0;
        if (param_3 != (short *)0x0) {
          local_24 = *(int *)(param_3 + -2);
        }
        FUN_00416dc0(&local_40,param_3,2,local_24 + -1);
        FUN_00416ba0(param_2,local_10,local_40);
        FUN_00414480(&local_10);
        puVar1 = local_30;
      }
    }
    else {
      iVar2 = FUN_004170c0(&DAT_015d7498,param_3,1);
      if (iVar2 == 1) {
        *param_5 = 0;
        local_18 = 0;
        FUN_015c1220(&local_48,param_4,0,*(undefined8 *)(param_1 + 0x78));
        FUN_015bf040(&local_18,local_48);
        local_28 = 0;
        if (param_3 != (short *)0x0) {
          local_28 = *(int *)(param_3 + -2);
        }
        FUN_00416dc0(&local_50,param_3,3,local_28 + -2);
        FUN_00416ba0(param_2,local_18,local_50);
        FUN_00414480(&local_18);
        puVar1 = local_30;
      }
      else {
        iVar2 = FUN_004170c0(&DAT_015d74ac,param_3,1);
        if (iVar2 < 1) {
          iVar2 = FUN_004170c0(&DAT_015d74bc,param_3,1);
          if (iVar2 < 1) {
            iVar2 = FUN_004170c0(&LAB_015d74d0,param_3,1);
            if (iVar2 < 1) {
              FUN_00441920(&local_58,param_3);
              iVar2 = FUN_00416db0(local_58,param_3);
              if (iVar2 == 0) {
                *param_5 = 1;
              }
              else {
                *param_5 = 0;
              }
              FUN_015c1220(&local_68,param_4,0,*(undefined8 *)(param_1 + 0x78));
              FUN_015bf040(&local_60,local_68);
              FUN_00416ba0(param_2,local_60,param_3);
              puVar1 = local_30;
              goto code_r0x015d740e;
            }
          }
        }
        *param_5 = 0;
        FUN_00414ad0(param_2,param_3);
        puVar1 = local_30;
      }
    }
  }
code_r0x015d740e:
  local_30 = puVar1;
  FUN_00414560(&local_68,7);
  return param_2;
}

