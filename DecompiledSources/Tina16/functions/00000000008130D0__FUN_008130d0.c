/* Ghidra address: 008130d0 */
/* Ghidra symbol: FUN_008130d0 */


void FUN_008130d0(longlong *param_1,undefined8 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int extraout_var;
  int extraout_var_00;
  int extraout_var_01;
  int extraout_var_02;
  longlong lVar6;
  int extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  FUN_00786bc0(param_1,param_2);
  if ((char)param_1[0xe] == '\x1c') {
    FUN_00811d00(param_1,&local_64);
    local_4c = local_64;
    local_54 = local_5c;
    uVar5 = FUN_00786090(param_1);
    thunk_FUN_0415f9d2(uVar5,&local_4c);
    uVar5 = FUN_00786090(param_1);
    thunk_FUN_0415f9d2(uVar5,&local_54);
    FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    if ((extraout_var < local_4c._4_4_) &&
       (FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8), (int)param_1[0xb] <= extraout_var_00)) {
      *(int *)(param_1 + 0xb) = local_4c._4_4_;
      return;
    }
    FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    if ((local_54._4_4_ < extraout_var_01) &&
       (FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8), extraout_var_02 <= (int)param_1[0xb])) {
      *(int *)(param_1 + 0xb) = local_54._4_4_;
      return;
    }
    local_40 = 0x17;
    local_44 = 0x1c;
    uVar5 = FUN_00786090(param_1);
    thunk_FUN_04083ff6(uVar5,1,&local_44);
    lVar6 = FUN_0040c770((double)*(float *)((longlong)param_1 + 0x5c));
    if (local_30 != lVar6) {
      *(float *)((longlong)param_1 + 0x5c) = (float)local_30;
    }
    FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    iVar2 = FUN_004230c0(&local_64);
    *(float *)((longlong)param_1 + 0x5c) =
         *(float *)((longlong)param_1 + 0x5c) +
         (float)(local_38 - local_3c) *
         ((float)(extraout_var_03 - (int)param_1[0xb]) / (float)iVar2);
    if (*(float *)((longlong)param_1 + 0x5c) < (float)local_3c) {
      *(float *)((longlong)param_1 + 0x5c) = (float)local_3c;
    }
    if ((float)local_38 < *(float *)((longlong)param_1 + 0x5c)) {
      *(float *)((longlong)param_1 + 0x5c) = (float)local_38;
    }
    if (local_34 != 0) {
      lVar6 = FUN_0040c770((double)*(float *)((longlong)param_1 + 0x5c));
      iVar2 = (local_38 - local_34) + 1;
      if (iVar2 < lVar6) {
        *(float *)((longlong)param_1 + 0x5c) = (float)iVar2;
      }
    }
    FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    *(undefined4 *)(param_1 + 0xb) = extraout_var_04;
    local_30 = FUN_0040c770((double)*(float *)((longlong)param_1 + 0x5c));
    uVar5 = FUN_00786090(param_1);
    thunk_FUN_03d770e4(uVar5,1,&local_44,0);
    uVar5 = FUN_00786090(param_1);
    uVar1 = FUN_0040c770((double)*(float *)((longlong)param_1 + 0x5c));
    local_68 = CONCAT22(uVar1,5);
    thunk_FUN_0413e052(uVar5,0x115,(longlong)local_68,0);
    (**(code **)(*param_1 + 0xa0))(param_1);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else if ((char)param_1[10] == '\x18') {
    FUN_00812380(param_1,&local_64);
    local_4c = local_64;
    local_54 = local_5c;
    uVar5 = FUN_00786090(param_1);
    thunk_FUN_0415f9d2(uVar5,&local_4c);
    uVar5 = FUN_00786090(param_1);
    thunk_FUN_0415f9d2(uVar5,&local_54);
    iVar2 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    if ((iVar2 < (int)local_4c) &&
       (iVar2 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8), (int)param_1[0xb] <= iVar2)) {
      *(int *)(param_1 + 0xb) = (int)local_4c;
      return;
    }
    iVar2 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    if (((int)local_54 < iVar2) &&
       (iVar2 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8), iVar2 <= (int)param_1[0xb])) {
      *(int *)(param_1 + 0xb) = (int)local_54;
      return;
    }
    local_40 = 0x17;
    local_44 = 0x1c;
    uVar5 = FUN_00786090(param_1);
    thunk_FUN_04083ff6(uVar5,0,&local_44);
    lVar6 = FUN_0040c770((double)*(float *)((longlong)param_1 + 0x5c));
    if (local_30 != lVar6) {
      *(float *)((longlong)param_1 + 0x5c) = (float)local_30;
    }
    iVar2 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    iVar3 = FUN_004230a0(&local_64);
    *(float *)((longlong)param_1 + 0x5c) =
         *(float *)((longlong)param_1 + 0x5c) +
         (float)(local_38 - local_3c) * ((float)(iVar2 - (int)param_1[0xb]) / (float)iVar3);
    if (*(float *)((longlong)param_1 + 0x5c) < (float)local_3c) {
      *(float *)((longlong)param_1 + 0x5c) = (float)local_3c;
    }
    if ((float)local_38 < *(float *)((longlong)param_1 + 0x5c)) {
      *(float *)((longlong)param_1 + 0x5c) = (float)local_38;
    }
    if (local_34 != 0) {
      lVar6 = FUN_0040c770((double)*(float *)((longlong)param_1 + 0x5c));
      iVar2 = (local_38 - local_34) + 1;
      if (iVar2 < lVar6) {
        *(float *)((longlong)param_1 + 0x5c) = (float)iVar2;
      }
    }
    uVar4 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    *(undefined4 *)(param_1 + 0xb) = uVar4;
    local_30 = FUN_0040c770((double)*(float *)((longlong)param_1 + 0x5c));
    uVar5 = FUN_00786090(param_1);
    thunk_FUN_03d770e4(uVar5,0,&local_44,0);
    uVar5 = FUN_00786090(param_1);
    uVar1 = FUN_0040c770((double)*(float *)((longlong)param_1 + 0x5c));
    local_6c = CONCAT22(uVar1,5);
    thunk_FUN_0413e052(uVar5,0x114,(longlong)local_6c,0);
    (**(code **)(*param_1 + 0xa0))(param_1);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    if (((char)param_1[10] != '\x18') && ((char)param_1[10] == '\x17')) {
      *(undefined1 *)(param_1 + 10) = 0x16;
      (**(code **)(*param_1 + 0xa0))(param_1);
    }
    if (((char)param_1[0xe] != '\x1c') && ((char)param_1[0xe] == '\x1b')) {
      *(undefined1 *)(param_1 + 0xe) = 0x1a;
      (**(code **)(*param_1 + 0xa0))(param_1);
    }
    if ((*(char *)((longlong)param_1 + 0x51) != '\f') &&
       (*(char *)((longlong)param_1 + 0x51) == '\v')) {
      *(undefined1 *)((longlong)param_1 + 0x51) = 10;
      (**(code **)(*param_1 + 0xa0))(param_1);
    }
    if (((char)param_1[8] != '\x10') && ((char)param_1[8] == '\x0f')) {
      *(undefined1 *)(param_1 + 8) = 0xe;
      (**(code **)(*param_1 + 0xa0))(param_1);
    }
    if ((*(char *)((longlong)param_1 + 0x71) != '\x04') &&
       (*(char *)((longlong)param_1 + 0x71) == '\x03')) {
      *(undefined1 *)((longlong)param_1 + 0x71) = 2;
      (**(code **)(*param_1 + 0xa0))(param_1);
    }
    if (((char)param_1[0xc] != '\b') && ((char)param_1[0xc] == '\a')) {
      *(undefined1 *)(param_1 + 0xc) = 6;
      (**(code **)(*param_1 + 0xa0))(param_1);
    }
    FUN_00785c20(param_1,param_2);
    if (*(char *)((longlong)param_1 + 0x52) != '\0') {
      (**(code **)(*param_1 + 0xa0))(param_1);
    }
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}

