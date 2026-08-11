/* Ghidra address: 00bf4820 */
/* Ghidra symbol: FUN_00bf4820 */


void FUN_00bf4820(longlong *param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = auStack_68;
  thunk_FUN_03cc0d62(&local_20);
  uVar4 = FUN_0064d3a0(param_1,&local_20);
  local_20._4_4_ = (undefined4)(uVar4 >> 0x20);
  uVar3 = local_20._4_4_;
  local_20 = uVar4;
  local_28 = FUN_00bf19b0(param_1,uVar4 & 0xffffffff,uVar3);
  uVar3 = FUN_00c10fb0(param_1);
  uVar3 = FUN_00bcbe50(local_28._4_4_,1,uVar3);
  local_28._4_4_ = uVar3;
  if ((int)param_1[0xcf] != 0) {
    FUN_00bfb1b0(param_1,*(int *)((longlong)param_1 + 0x50c) + (int)param_1[0xcf]);
    local_2c = *(int *)((longlong)param_1 + 0x50c);
    if (0 < (int)param_1[0xcf]) {
      local_2c = local_2c + (int)param_1[0x9a];
    }
    local_28._0_4_ = local_2c;
  }
  if (*(int *)((longlong)param_1 + 0x67c) != 0) {
    sVar2 = thunk_FUN_040bd713(0x10);
    if (sVar2 < 0) {
      FUN_00bfcc50(param_1,*(int *)((longlong)param_1 + 0x534) +
                           *(int *)((longlong)param_1 + 0x67c) * (int)param_1[0xa1]);
    }
    else {
      FUN_00bfcc50(param_1,*(int *)((longlong)param_1 + 0x534) + *(int *)((longlong)param_1 + 0x67c)
                  );
    }
    local_30 = *(int *)((longlong)param_1 + 0x534);
    if (0 < *(int *)((longlong)param_1 + 0x67c)) {
      local_30 = local_30 + (int)param_1[0xa1] + -1;
    }
    uVar3 = FUN_00c10fb0(param_1);
    local_28._4_4_ = FUN_00bcbe50(local_30,1,uVar3);
  }
  local_38 = FUN_00c0ee50(param_1,&local_28);
  if ((*(int *)((longlong)param_1 + 0x4c4) != (int)local_38) ||
     (local_38._4_4_ = (int)((ulonglong)local_38 >> 0x20),
     bVar5 = *(int *)((longlong)param_1 + 0x4cc) != local_38._4_4_, bVar5)) {
    FUN_00bf3750(param_1);
    (**(code **)(*param_1 + 0x2a8))(param_1,&local_38);
    cVar1 = FUN_0064e170(param_1);
    if ((cVar1 != '\0') && ((*(ushort *)(param_1 + 199) & 0x400) != 0)) {
      local_48 = FUN_00bfaa10(param_1);
      FUN_00bfa6c0(param_1,&local_48);
    }
    FUN_00bf28a0(param_1);
  }
  FUN_00bf1aa0(param_1,local_20 & 0xffffffff,local_20._4_4_);
  return;
}

