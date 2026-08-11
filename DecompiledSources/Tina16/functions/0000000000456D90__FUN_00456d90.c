/* Ghidra address: 00456d90 */
/* Ghidra symbol: FUN_00456d90 */


longlong *
FUN_00456d90(longlong *param_1,longlong *param_2,char param_3,undefined8 param_4,undefined4 param_5,
            longlong param_6,undefined4 param_7,undefined2 param_8,undefined2 param_9,int param_10,
            byte param_11)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_b8 [32];
  int local_98;
  int *local_90;
  int local_88;
  undefined1 *local_70;
  int local_5c;
  int local_58;
  int local_54;
  longlong *local_50;
  int local_44;
  longlong *local_40;
  longlong local_38;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_70 = auStack_b8;
  local_38 = 0;
  local_10 = 0;
  local_18 = 0;
  cVar2 = FUN_00456810(param_1);
  if (cVar2 == '\0') {
    local_24 = 0;
    local_20 = 0;
    local_28 = 0;
    local_2c = 0;
    if (param_3 == '\0') {
      local_98 = 0;
      local_1c = FUN_00456ae0(param_1,param_6,param_7,&local_2c);
    }
    else if (param_3 == '\x01') {
      local_98 = CONCAT22(local_98._2_2_,param_9);
      local_90 = &local_2c;
      local_88 = 0;
      local_1c = FUN_00456b60(param_1,param_6,param_7,param_8);
    }
    else if (param_3 == '\x02') {
      local_1c = FUN_004565c0(param_1,param_4,param_5,0);
    }
    else if (param_3 == '\x03') {
      local_98 = CONCAT22(local_98._2_2_,param_9);
      local_90 = (int *)((ulonglong)local_90 & 0xffffffff00000000);
      local_1c = FUN_004565f0(param_1,param_4,param_5,param_8);
    }
    else {
      local_1c = -1;
    }
    while ((-1 < local_1c && (local_24 < param_10))) {
      FUN_00414480(&local_10);
      FUN_00416dc0(&local_10,*param_1,local_20 + 1,local_1c - local_20);
      FUN_00414b50(&local_38,local_10);
      FUN_00414480(&local_10);
      if ((local_38 != 0) || (param_11 != 1)) {
        iVar1 = local_24 + 1;
        if (local_28 < iVar1) {
          local_28 = local_24 + 0x21;
          local_24 = iVar1;
          FUN_00419260(param_2,&DAT_004210c0,1,(longlong)local_28);
          iVar1 = local_24;
        }
        local_24 = iVar1;
        FUN_00414ad0(*param_2 + (longlong)(local_24 + -1) * 8,local_38);
      }
      if (param_3 == '\0') {
        local_40 = (longlong *)(param_6 + (longlong)local_2c * 8);
        local_44 = 0;
        if (*local_40 != 0) {
          local_44 = *(int *)(*local_40 + -4);
        }
        local_98 = local_1c + local_44;
        local_20 = local_98;
        local_1c = FUN_00456ae0(param_1,param_6,param_7,&local_2c);
      }
      else if (param_3 == '\x01') {
        local_50 = (longlong *)(param_6 + (longlong)local_2c * 8);
        local_54 = 0;
        if (*local_50 != 0) {
          local_54 = *(int *)(*local_50 + -4);
        }
        local_88 = local_1c + local_54;
        local_98 = CONCAT22(local_98._2_2_,param_9);
        local_90 = &local_2c;
        local_20 = local_88;
        local_1c = FUN_00456b60(param_1,param_6,param_7,param_8);
      }
      else if (param_3 == '\x02') {
        local_20 = local_1c + 1;
        local_1c = FUN_004565c0(param_1,param_4,param_5,local_20);
      }
      else if (param_3 == '\x03') {
        local_20 = local_1c + 1;
        local_98 = CONCAT22(local_98._2_2_,param_9);
        local_90 = (int *)CONCAT44(local_90._4_4_,local_20);
        local_1c = FUN_004565f0(param_1,param_4,param_5,param_8);
      }
    }
    local_58 = 0;
    if (*param_1 != 0) {
      local_58 = *(int *)(*param_1 + -4);
    }
    if ((local_58 < local_20) || (param_10 <= local_24)) {
      FUN_00419260(param_2,&DAT_004210c0,1,(longlong)local_24);
    }
    else {
      local_5c = 0;
      if (*param_1 != 0) {
        local_5c = *(int *)(*param_1 + -4);
      }
      FUN_00414480(&local_18);
      FUN_00416dc0(&local_18,*param_1,local_20 + 1,local_5c - local_20);
      FUN_00414b50(&local_38,local_18);
      uVar3 = FUN_00414480(&local_18);
      if (local_38 == 0) {
        if (param_11 < 8) {
          bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << (param_11 & 0x1f) & 6U) != 0;
        }
        else {
          bVar4 = false;
        }
        if (bVar4) {
          FUN_00419260(param_2,&DAT_004210c0,1,(longlong)local_24);
          goto LAB_004573f6;
        }
      }
      local_24 = local_24 + 1;
      FUN_00419260(param_2,&DAT_004210c0,1,(longlong)local_24);
      FUN_00414ad0(*param_2 + (longlong)(local_24 + -1) * 8,local_38);
    }
  }
  else {
    FUN_00419430(param_2,&DAT_004210c0);
  }
LAB_004573f6:
  FUN_00414480(&local_38);
  FUN_00414560(&local_18,2);
  return param_2;
}

