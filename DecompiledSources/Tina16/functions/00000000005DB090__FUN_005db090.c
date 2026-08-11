/* Ghidra address: 005db090 */
/* Ghidra symbol: FUN_005db090 */


void FUN_005db090(longlong *param_1,longlong param_2,longlong *param_3,char param_4,char param_5)

{
  int iVar1;
  undefined1 auStack_a8 [36];
  int local_84;
  undefined1 *local_80;
  char local_6a;
  bool local_69;
  bool local_68;
  char local_67;
  bool local_66;
  bool local_65;
  int local_64;
  int local_60;
  undefined8 local_58;
  longlong local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20 [2];
  
  local_80 = auStack_a8;
  local_50 = 0;
  local_58 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*param_1 + 0x98))(param_1,local_38);
  local_60 = 0;
  if (param_2 != 0) {
    local_60 = *(int *)(param_2 + -4);
  }
  local_40 = local_60;
  local_44 = local_60 + (uint)(0 < local_60);
  FUN_004b3260(param_3);
  iVar1 = (**(code **)(*local_38 + 0x28))();
  local_84 = iVar1 + -1;
  local_48 = 0;
  if (-1 < local_84) {
    do {
      local_84 = iVar1;
      (**(code **)(*local_38 + 0x18))(local_38,&local_50,local_48);
      local_64 = 0;
      if (local_50 != 0) {
        local_64 = *(int *)(local_50 + -4);
      }
      local_3c = local_64;
      if (local_40 == 0) {
        local_67 = '\x01';
      }
      else {
        if ((param_4 == '\0') || (local_64 <= local_40)) {
          local_66 = false;
        }
        else {
          FUN_00414480(local_20);
          FUN_00416dc0(local_20,local_50,1,local_40);
          if (param_2 == local_20[0]) {
            local_65 = true;
          }
          else if ((param_2 == 0) || (local_20[0] == 0)) {
            local_65 = false;
          }
          else {
            iVar1 = FUN_0043e420(param_2,local_20[0]);
            local_65 = iVar1 == 0;
          }
          local_66 = local_65;
          FUN_00414480(local_20);
        }
        local_67 = local_66;
      }
      if (local_67 == '\0') {
        if ((param_4 == '\0') && (local_40 <= local_3c)) {
          FUN_00414480(&local_28);
          FUN_00416dc0(&local_28,local_50,1,local_40);
          if (param_2 == local_28) {
            local_68 = true;
          }
          else if ((param_2 == 0) || (local_28 == 0)) {
            local_68 = false;
          }
          else {
            iVar1 = FUN_0043e420(param_2,local_28);
            local_68 = iVar1 == 0;
          }
          local_69 = local_68;
          FUN_00414480(&local_28);
        }
        else {
          local_69 = false;
        }
        local_6a = local_69;
      }
      else {
        local_6a = '\x01';
      }
      if (local_6a != '\0') {
        FUN_00414480(&local_30);
        FUN_00416dc0(&local_30,local_50,local_44 + 1,(local_3c - local_44) + 1);
        FUN_00414b50(&local_58,local_30);
        FUN_00414480(&local_30);
        if ((param_5 != '\0') || (iVar1 = FUN_004170c0(PTR_DAT_01de8928,local_58,1), iVar1 + -1 < 0)
           ) {
          if (param_4 != '\0') {
            FUN_00414b50(&local_50,local_58);
          }
          (**(code **)(*param_3 + 0x78))(param_3,local_50);
        }
      }
      local_48 = local_48 + 1;
      local_84 = local_84 + -1;
      iVar1 = local_84;
    } while (local_84 != 0);
  }
  FUN_004b3390(param_3);
  FUN_00410f20(local_38);
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_30,3);
  return;
}

