/* Ghidra address: 0067f810 */
/* Ghidra symbol: FUN_0067f810 */


void FUN_0067f810(longlong *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined1 *local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  double local_58;
  double local_50;
  char local_45;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_70 = auStack_a8;
  if (((*(ushort *)((longlong)param_1 + 0x34) & 2) == 0) &&
     (*(char *)((longlong)param_1 + 0x321) != '\0')) {
    (**(code **)(*param_1 + 0xe0))(param_1,&local_44);
    local_30 = thunk_FUN_040ef593(0);
    FUN_005ffb10(param_1[0x62],local_30);
    iVar2 = FUN_005fcff0(param_1[0x17]);
    if (iVar2 == 0) {
      pcVar4 = (code *)FUN_00411550(param_1,0xffc3);
      (*pcVar4)(param_1,&local_44,
                *(ushort *)(&DAT_01df957a + (ulonglong)*(byte *)((longlong)param_1 + 0x33d) * 2) |
                0x800440);
    }
    else {
      pcVar4 = (code *)FUN_00411550(param_1,0xffc3);
      (*pcVar4)(param_1,&local_44,0x440);
    }
    FUN_005ffb10(param_1[0x62],0);
    thunk_FUN_041a9b5c(0,local_30);
    iVar2 = FUN_005fcff0(param_1[0x17]);
    if (iVar2 == 0) {
      local_34 = (int)param_1[0x12];
      local_45 = (char)param_1[100];
      pcVar4 = (code *)FUN_00411550(param_1,0xffc5);
      cVar1 = (*pcVar4)(param_1);
      if (cVar1 != '\0') {
        FUN_00648400(&local_45);
      }
      if (local_45 == '\x01') {
        local_34 = local_34 + ((int)param_1[0x13] - local_3c);
      }
      local_88 = local_38;
      (**(code **)(*param_1 + 400))
                (param_1,local_34,*(undefined4 *)((longlong)param_1 + 0x94),local_3c);
    }
    else {
      iVar2 = FUN_005fcff0(param_1[0x17]);
      local_50 = (double)FUN_0040bdd0((((double)iVar2 / 10.0) * 3.141592653589793) / 180.0);
      iVar2 = FUN_005fcff0(param_1[0x17]);
      local_58 = (double)FUN_0040bcd0((((double)iVar2 / 10.0) * 3.141592653589793) / 180.0);
      iVar2 = FUN_004230a0(&local_44);
      local_5c = local_44 + iVar2 / 2;
      iVar2 = FUN_004230c0(&local_44,(longlong)iVar2 % 2 & 0xffffffff);
      local_60 = local_40 + iVar2 / 2;
      local_68 = local_44 - local_5c;
      local_64 = local_40 - local_60;
      iVar2 = FUN_0040c770((double)local_68 * local_58 - (double)local_64 * local_50,
                           (longlong)iVar2 % 2 & 0xffffffff);
      iVar3 = FUN_0040c770((double)local_68 * local_50 - (double)local_64 * local_58);
      local_88._0_1_ = 1;
      FUN_0067f770(auStack_a8,0,iVar2 + local_5c,iVar3 + local_60);
      local_68 = local_3c - local_5c;
      iVar2 = FUN_0040c770((double)local_68 * local_58 - (double)local_64 * local_50);
      iVar3 = FUN_0040c770((double)local_68 * local_50 - (double)local_64 * local_58);
      local_88._0_1_ = 0;
      FUN_0067f770(auStack_a8,1,iVar2 + local_5c,iVar3 + local_60);
      local_64 = local_38 - local_60;
      iVar2 = FUN_0040c770((double)local_68 * local_58 - (double)local_64 * local_50);
      iVar3 = FUN_0040c770((double)local_68 * local_50 - (double)local_64 * local_58);
      local_88._0_1_ = 0;
      FUN_0067f770(auStack_a8,2,iVar2 + local_5c,iVar3 + local_60);
      local_68 = local_44 - local_5c;
      iVar2 = FUN_0040c770((double)local_68 * local_58 - (double)local_64 * local_50);
      iVar3 = FUN_0040c770((double)local_68 * local_50 - (double)local_64 * local_58);
      local_88 = (uint)local_88._1_3_ << 8;
      FUN_0067f770(auStack_a8,3,iVar2 + local_5c,iVar3 + local_60);
      FUN_00423b50(&local_28,-local_28,-local_24);
      local_88 = local_1c;
      (**(code **)(*param_1 + 400))
                (param_1,(int)param_1[0x12] + local_28,*(int *)((longlong)param_1 + 0x94) + local_24
                 ,local_20);
    }
  }
  return;
}

