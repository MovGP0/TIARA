/* Ghidra address: 00687390 */
/* Ghidra symbol: FUN_00687390 */


void FUN_00687390(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_34 [2];
  int local_2c;
  int local_24;
  longlong *local_20;
  
  local_40 = auStack_68;
  FUN_00657db0(param_1,param_2);
  if (*(char *)((longlong)param_1 + 0x31d) != '\0') {
    local_20 = (longlong *)FUN_005fe0d0(&PTR_FUN_006385a0,1);
    FUN_0064b200(local_20,param_1);
    (**(code **)(*param_1 + 0xe0))(param_1,local_34);
    FUN_005fdab0(local_20[0x10],(int)param_1[0x19]);
    (**(code **)(*local_20 + 0xb8))(local_20,local_34);
    FUN_00423b10(local_34,0xffffffff,0xffffffff);
    (**(code **)(*local_20 + 0xb8))(local_20,local_34);
    if (*(char *)((longlong)param_1 + 0x31d) != '\0') {
      local_24 = 0;
      if (*(char *)((longlong)param_1 + 0x31b) != '\0') {
        local_24 = (int)param_1[100];
      }
      if (*(char *)((longlong)param_1 + 0x31c) != '\0') {
        local_24 = local_24 + (int)param_1[100];
      }
      if (local_24 == 0) {
        (**(code **)(*param_1 + 0xe0))(param_1,local_34);
        FUN_005fdab0(local_20[0x10],(int)param_1[0x19]);
        (**(code **)(*local_20 + 0xb8))(local_20,local_34);
        FUN_00423b10(local_34,0xffffffff,0xffffffff);
        (**(code **)(*local_20 + 0xb8))(local_20,local_34);
      }
      (**(code **)(*param_1 + 0xe0))(param_1,local_34);
      uVar2 = FUN_005ffa40(local_20);
      thunk_FUN_03998bad(uVar2,local_34,
                         *(uint *)(&DAT_01df9ba8 +
                                  (ulonglong)*(byte *)((longlong)param_1 + 0x31b) * 4) |
                         *(uint *)(&DAT_01df9bb8 +
                                  (ulonglong)*(byte *)((longlong)param_1 + 0x31c) * 4),
                         (uint)*(byte *)((longlong)param_1 + 0x31a) |
                         *(uint *)(&DAT_01df9bc8 +
                                  (ulonglong)*(byte *)((longlong)param_1 + 0x31d) * 4) |
                         *(uint *)(&DAT_01df9bd8 + (ulonglong)*(byte *)(param_1 + 0x72) * 4) |
                         0x2000);
      local_34[0] = (**(code **)(*param_1 + 0x1a0))(param_1,10);
      local_34[0] = local_2c - local_34[0];
      if (*(char *)((longlong)param_1 + 0x54a) != '\x01') {
        cVar1 = FUN_006838c0(param_1);
        if (cVar1 == '\0') {
          uVar2 = FUN_005ffa40(local_20);
          thunk_FUN_03ea73e5(uVar2,local_34,3,0x4005);
        }
        else {
          uVar2 = FUN_005ffa40(local_20);
          thunk_FUN_03ea73e5(uVar2,local_34,3,0x4005);
        }
      }
    }
    FUN_00410f20(local_20);
  }
  return;
}

