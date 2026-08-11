/* Ghidra address: 0083f000 */
/* Ghidra symbol: FUN_0083f000 */


void FUN_0083f000(longlong param_1,int param_2,int param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  longlong local_68;
  int local_60;
  int local_5c;
  undefined8 local_50 [2];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined1 local_30 [16];
  
  if (param_3 != 0) {
    local_30._0_8_ = *(ulonglong *)(param_1 + 0x4a8);
    local_5c = *(int *)(param_1 + 0x4a4);
    local_60 = *(int *)(param_1 + 0x4e0);
    local_40 = *(int *)(param_1 + 0x4bc);
    local_38 = local_5c + -1;
    local_3c = *(int *)(param_1 + 0x4c0);
    local_34 = local_60 + -1;
    uVar3 = 0;
    uVar2 = 0;
    if (param_3 < 0) {
      param_3 = -param_3;
    }
    local_68 = param_1;
    if (param_4 == '\0') {
      local_78 = (undefined8 *)local_30;
      uVar3 = FUN_0083ee60(auStack_98,param_1 + 0x4a4,param_1 + 0x528,
                           *(undefined4 *)(param_1 + 0x4b0));
      local_40 = param_2;
      if (param_2 + param_3 <= *(int *)(local_68 + 0x4e8)) {
        local_38 = *(int *)(local_68 + 0x4e8) + -1;
      }
    }
    else {
      local_78 = (undefined8 *)(local_30 + 4);
      uVar2 = FUN_0083ee60(auStack_98,param_1 + 0x4e0,param_1 + 0x530,
                           *(undefined4 *)(param_1 + 0x4b4));
      local_3c = param_2;
      if (param_2 + param_3 <= *(int *)(local_68 + 0x4ec)) {
        local_34 = *(int *)(local_68 + 0x4ec) + -1;
      }
    }
    FUN_00844000(local_68,&local_40,local_50,1);
    cVar1 = FUN_00423b30(local_50);
    if (cVar1 == '\0') {
      uVar4 = FUN_0065b870(local_68);
      local_78 = local_50;
      thunk_FUN_0418ab71(uVar4,uVar3,uVar2,local_50);
      uVar4 = FUN_0065b870(local_68);
      thunk_FUN_0415faac(uVar4);
    }
    pcVar5 = (code *)FUN_00411550(local_68,0xffa0);
    (*pcVar5)(local_68,local_5c,local_60);
    if ((local_30._0_4_ != *(int *)(local_68 + 0x4a8)) ||
       (local_30._4_4_ != *(int *)(local_68 + 0x4ac))) {
      local_78 = (undefined8 *)CONCAT71(local_78._1_7_,1);
      FUN_00844b60(local_68,local_30._0_8_ & 0xffffffff,local_30._4_4_,1);
    }
  }
  return;
}

