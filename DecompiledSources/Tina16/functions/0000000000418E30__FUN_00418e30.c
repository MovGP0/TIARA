/* Ghidra address: 00418e30 */
/* Ghidra symbol: FUN_00418e30 */


void FUN_00418e30(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_30;
  longlong local_28;
  
  local_80 = auStack_a8;
  local_30 = *param_1;
  local_48 = *param_4;
  if (local_48 < 1) {
    local_80 = auStack_a8;
    if (local_48 < 0) {
      local_80 = auStack_a8;
      FUN_004098e0(4);
    }
    FUN_00419430(param_1,param_2);
  }
  else {
    local_50 = 0;
    if (local_30 != 0) {
      local_50 = *(longlong *)(local_30 + -8);
      local_30 = local_30 + -0x10;
    }
    local_68 = param_2 + (ulonglong)*(byte *)(param_2 + 1);
    local_60 = (longlong)*(int *)(local_68 + 2);
    if (*(longlong **)(local_68 + 6) == (longlong *)0x0) {
      local_40 = 0;
    }
    else {
      local_40 = **(longlong **)(local_68 + 6);
    }
    local_70 = local_48 * local_60;
    puVar1 = auStack_a8;
    if (local_70 / local_48 != local_60) {
      FUN_004098e0(4,local_70 % local_48);
      puVar1 = local_80;
    }
    local_80 = puVar1;
    local_70 = local_70 + 0x10;
    if (local_70 < 0) {
      FUN_004098e0(4);
    }
    if ((local_30 == 0) || (*(int *)(local_30 + 4) == 1)) {
      local_78 = local_30;
      if (local_40 == 0) {
        FUN_00409620(&local_78,local_70);
      }
      else {
        cVar2 = FUN_00418dd0(local_40);
        if (cVar2 == '\0') {
          if (local_48 < local_50) {
            FUN_004185d0(local_30 + 0x10 + local_48 * local_60,local_40,local_50 - local_48);
          }
          FUN_00409620(&local_78,local_70);
        }
        else {
          if (local_48 < local_50) {
            local_58 = local_48;
          }
          else {
            local_58 = local_50;
          }
          local_78 = FUN_004095c0(local_70);
          FUN_0040d200(local_78 + 0x10,local_58 * local_60,0);
          if (local_30 != 0) {
            FUN_00418410(local_78 + 0x10,local_30 + 0x10,local_40,local_58);
            if (local_48 < local_50) {
              FUN_004185d0(local_30 + 0x10 + local_48 * local_60,local_40,local_50 - local_48);
            }
            FUN_004095f0(local_30);
          }
        }
      }
      local_30 = local_78;
    }
    else {
      local_30 = FUN_004095c0(local_70);
      local_58 = local_50;
      if (local_48 < local_50) {
        local_58 = local_48;
      }
      if (local_40 == 0) {
        FUN_00409a70(*param_1,local_30 + 0x10,local_58 * local_60);
      }
      else {
        FUN_0040d200(local_30 + 0x10,local_58 * local_60,0);
        FUN_00418240(local_30 + 0x10,*param_1,local_40,local_58);
      }
      FUN_00419430(param_1,param_2);
    }
    *(undefined4 *)(local_30 + 4) = 1;
    *(longlong *)(local_30 + 8) = local_48;
    local_30 = local_30 + 0x10;
    if (local_50 < local_48) {
      FUN_0040d200(local_30 + local_60 * local_50,local_60 * (local_48 - local_50),0);
    }
    if (1 < param_3) {
      for (local_28 = 0; local_28 < local_48; local_28 = local_28 + 1) {
        FUN_00418e30(local_30 + local_28 * 8,local_40,param_3 + -1,param_4 + 1);
      }
    }
    *param_1 = local_30;
  }
  return;
}

