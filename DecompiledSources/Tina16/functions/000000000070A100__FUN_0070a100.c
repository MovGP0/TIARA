/* Ghidra address: 0070a100 */
/* Ghidra symbol: FUN_0070a100 */


void FUN_0070a100(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int extraout_var;
  undefined4 extraout_var_00;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64 [16];
  undefined1 local_54 [16];
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  if ((char)param_1[0xe] == '\x1c') {
    local_40 = 0x17;
    local_44 = 0x1c;
    uVar6 = FUN_00786090(param_1);
    thunk_FUN_04083ff6(uVar6,1,&local_44);
    FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    FUN_00811d00(param_1,local_54);
    iVar3 = FUN_004230c0(local_54);
    *(float *)((longlong)param_1 + 0x5c) =
         *(float *)((longlong)param_1 + 0x5c) +
         (float)(local_38 - local_3c) * ((float)(extraout_var - (int)param_1[0xb]) / (float)iVar3);
    if (*(float *)((longlong)param_1 + 0x5c) < (float)local_3c) {
      *(float *)((longlong)param_1 + 0x5c) = (float)local_3c;
    }
    if ((float)local_38 < *(float *)((longlong)param_1 + 0x5c)) {
      *(float *)((longlong)param_1 + 0x5c) = (float)local_38;
    }
    FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    *(undefined4 *)(param_1 + 0xb) = extraout_var_00;
    cVar1 = FUN_004113d0(param_1[2],&PTR_FUN_006b8830);
    if (cVar1 == '\0') {
      uVar6 = FUN_00786090(param_1);
      uVar2 = FUN_0040c770((double)*(float *)((longlong)param_1 + 0x5c));
      local_6c = CONCAT22(uVar2,4);
      thunk_FUN_0413e052(uVar6,0x115,(longlong)local_6c,0);
    }
    else {
      uVar6 = FUN_00786090(param_1);
      uVar2 = FUN_0040c770((double)*(float *)((longlong)param_1 + 0x5c));
      local_68 = CONCAT22(uVar2,5);
      thunk_FUN_0413e052(uVar6,0x115,(longlong)local_68,0);
      local_30 = FUN_0040c770((double)*(float *)((longlong)param_1 + 0x5c));
      local_2c = local_30;
      uVar6 = FUN_00786090(param_1);
      thunk_FUN_03d770e4(uVar6,1,&local_44,0xffffffff);
    }
    (**(code **)(*param_1 + 0xa0))(param_1);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else if ((char)param_1[10] == '\x18') {
    local_40 = 0x17;
    local_44 = 0x1c;
    uVar6 = FUN_00786090(param_1);
    thunk_FUN_04083ff6(uVar6,0,&local_44);
    iVar3 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    FUN_00812380(param_1,local_64);
    iVar4 = FUN_004230a0(local_64);
    *(float *)((longlong)param_1 + 0x5c) =
         *(float *)((longlong)param_1 + 0x5c) +
         (float)(local_38 - local_3c) * ((float)(iVar3 - (int)param_1[0xb]) / (float)iVar4);
    if (*(float *)((longlong)param_1 + 0x5c) < (float)local_3c) {
      *(float *)((longlong)param_1 + 0x5c) = (float)local_3c;
    }
    if ((float)local_38 < *(float *)((longlong)param_1 + 0x5c)) {
      *(float *)((longlong)param_1 + 0x5c) = (float)local_38;
    }
    uVar5 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    *(undefined4 *)(param_1 + 0xb) = uVar5;
    cVar1 = FUN_004113d0(param_1[2],&PTR_FUN_006b8830);
    if (cVar1 == '\0') {
      uVar6 = FUN_00786090(param_1);
      uVar2 = FUN_0040c770((double)*(float *)((longlong)param_1 + 0x5c));
      local_74 = CONCAT22(uVar2,4);
      thunk_FUN_0413e052(uVar6,0x114,(longlong)local_74,0);
    }
    else {
      uVar6 = FUN_00786090(param_1);
      uVar2 = FUN_0040c770((double)*(float *)((longlong)param_1 + 0x5c));
      local_70 = CONCAT22(uVar2,5);
      thunk_FUN_0413e052(uVar6,0x114,(longlong)local_70,0);
      local_30 = FUN_0040c770((double)*(float *)((longlong)param_1 + 0x5c));
      local_2c = local_30;
      uVar6 = FUN_00786090(param_1);
      thunk_FUN_03d770e4(uVar6,0,&local_44,0xffffffff);
    }
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

