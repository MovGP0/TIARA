/* Ghidra address: 006252d0 */
/* Ghidra symbol: FUN_006252d0 */


void FUN_006252d0(longlong *param_1,byte *param_2,undefined4 *param_3,undefined8 param_4,
                 longlong param_5)

{
  int iVar1;
  undefined1 auStack_6f8 [32];
  undefined2 local_6d8;
  ushort **local_6d0;
  longlong local_6c8;
  undefined1 *local_6c0;
  undefined8 local_6b8;
  undefined1 *local_6a0;
  longlong *local_698;
  longlong local_690 [192];
  int local_8c;
  undefined1 local_88 [64];
  ushort *local_48;
  undefined4 *local_40;
  uint local_38;
  uint local_34;
  uint local_2c;
  undefined4 local_28;
  ushort *local_20;
  
  local_6a0 = auStack_6f8;
  local_20 = (ushort *)0x0;
  FUN_00417580(local_88,&DAT_00470720);
  FUN_00417600(local_690,&DAT_0045ffc0,0x40);
  FUN_0040d200(local_690,0x600,0);
  local_6d8 = (ushort)local_6d8._1_1_ << 8;
  FUN_00460e00(&local_20,param_2,param_4,local_690);
  local_38 = (uint)param_2[1];
  if (param_2[1] == 0) {
    local_48 = (ushort *)0x0;
  }
  else {
    local_48 = local_20;
  }
  if (param_2[2] == 0) {
    local_40 = (undefined4 *)0x0;
  }
  else {
    local_40 = param_3 + 1;
  }
  local_34 = (uint)param_2[2];
  local_28 = *param_3;
  local_2c = (uint)*param_2;
  if (local_2c == 4) {
    if (((*local_20 & 0xfff) == 9) || ((*local_20 & 0xfff) == 0xd)) {
      local_2c = 0xc;
    }
    *param_3 = 0xfffffffd;
    local_34 = local_34 + 1;
    local_40 = param_3;
  }
  else if (((local_2c == 1) && (param_2[1] == 0)) && (param_5 != 0)) {
    local_2c = 3;
  }
  else if ((local_2c == 2) && (param_2[1] != 0)) {
    local_2c = 3;
  }
  FUN_0040d200(local_88,0x40,0);
  local_6d8 = (undefined2)local_2c;
  local_6d0 = &local_48;
  local_6c8 = param_5;
  local_6c0 = local_88;
  local_6b8 = 0;
  local_8c = (**(code **)(*param_1 + 0x30))(param_1,local_28,PTR_DAT_02003150,0);
  if (local_8c != 0) {
    FUN_00625ac0(local_8c,local_88);
  }
  FUN_00461400(param_2,local_20,0);
  iVar1 = 0x40;
  local_698 = local_690;
  do {
    if (*local_698 == 0) break;
    if (local_698[1] == 0) {
      if (local_698[2] != 0) {
        FUN_004168b0(local_698[2],*local_698);
      }
    }
    else {
      FUN_00415530(local_698[1],*local_698,0);
    }
    local_698 = local_698 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00417840(local_690,&DAT_0045ffc0,0x40);
  FUN_00417740(local_88,&DAT_00470720);
  FUN_00419430(&local_20,&DAT_0045e9a0);
  return;
}

