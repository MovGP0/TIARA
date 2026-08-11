/* Ghidra address: 00a45980 */
/* Ghidra symbol: FUN_00a45980 */


longlong FUN_00a45980(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  char local_res18;
  undefined1 auStack_d8 [32];
  int local_b8;
  undefined1 *local_a0;
  undefined8 local_90;
  undefined4 *local_88;
  undefined4 *local_78;
  int local_6c;
  longlong local_68;
  char *local_60;
  int local_58;
  int local_54;
  int local_50;
  char local_4b;
  char local_4a;
  char local_49;
  longlong local_48;
  undefined4 *local_40;
  longlong local_38;
  longlong *local_30;
  uint local_24;
  undefined4 *local_20;
  
  local_a0 = auStack_d8;
  local_38 = 0;
  local_res18 = (char)param_3;
  local_49 = local_res18;
  local_4a = (char)((uint)param_3 >> 8);
  local_4b = (char)((uint)param_3 >> 0x10);
  local_30 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  (**(code **)(*local_30 + 0x10))(local_30,param_1);
  FUN_0060bbf0(local_30,7);
  local_24 = 100;
  local_20 = (undefined4 *)FUN_004095c0(0x660);
  FUN_0040d200(local_20,0x660,0);
  local_78 = local_20;
  *local_20 = 0x20;
  local_20[1] = 1;
  local_20[2] = 0;
  local_20[3] = 0;
  local_b8 = 0;
  thunk_FUN_0415f13b(local_20 + 4,0x7fffffff,0x7fffffff,0);
  local_68 = FUN_0060a050(local_30,0);
  iVar2 = (**(code **)(*local_30 + 0x48))(local_30);
  if (iVar2 < 2) {
    local_6c = 0;
  }
  else {
    local_90 = FUN_0060a050(local_30,1);
    local_6c = (int)local_90 - (int)local_68;
  }
  iVar2 = (**(code **)(*local_30 + 0x48))();
  local_54 = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_50 = 0;
      while (iVar3 = (**(code **)(*local_30 + 0x60))(local_30), local_50 < iVar3) {
        local_58 = local_50;
        while ((iVar3 = (**(code **)(*local_30 + 0x60))(local_30), local_50 < iVar3 &&
               (((local_60 = (char *)(local_68 + local_50 * 4), local_60[2] != local_49 ||
                 (local_60[1] != local_4a)) || (*local_60 != local_4b))))) {
          local_50 = local_50 + 1;
        }
        if (local_58 < local_50) {
          if (local_24 <= (uint)local_20[2]) {
            local_24 = local_24 + 100;
            FUN_00409620(&local_20,local_24 * 0x10 + 0x20);
            local_40 = local_20 + 8;
            FUN_0040d200(local_40 + (ulonglong)(local_24 - 100) * 4,0x640,0);
          }
          local_40 = local_20 + 8;
          local_88 = local_20;
          iVar3 = local_54 + 1;
          local_b8 = iVar3;
          thunk_FUN_0415f13b(local_40 + (ulonglong)(uint)local_20[2] * 4,local_58,local_54,local_50)
          ;
          if (local_58 < (int)local_88[4]) {
            local_88[4] = local_58;
          }
          if (local_54 < (int)local_88[5]) {
            local_88[5] = local_54;
          }
          if ((int)local_88[6] < local_50) {
            local_88[6] = local_50;
          }
          if ((int)local_88[7] < iVar3) {
            local_88[7] = iVar3;
          }
          local_88[2] = local_88[2] + 1;
        }
        if (local_20[2] == 2000) {
          local_48 = thunk_FUN_039a03c6(param_2,local_24 * 0x10 + 0x20,local_20);
          lVar1 = local_48;
          if (local_38 != 0) {
            thunk_FUN_04199bfe(local_38,local_38,local_48,2);
            thunk_FUN_0416f828(local_48);
            lVar1 = local_38;
          }
          local_38 = lVar1;
          local_20[2] = 0;
          local_b8 = 0;
          thunk_FUN_0415f13b(local_20 + 4,0x7fffffff,0x7fffffff,0);
        }
        local_50 = local_50 + 1;
      }
      local_68 = local_68 + local_6c;
      local_54 = local_54 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_20[2] == 0) {
    local_48 = 0;
  }
  else {
    local_48 = thunk_FUN_039a03c6(param_2,local_24 * 0x10 + 0x20,local_20);
  }
  if (local_38 == 0) {
    local_38 = local_48;
  }
  else {
    thunk_FUN_04199bfe(local_38,local_38,local_48,2);
    thunk_FUN_0416f828(local_48);
  }
  FUN_004095f0(local_20,local_24 * 0x10 + 0x20);
  FUN_00410f20(local_30);
  return local_38;
}

