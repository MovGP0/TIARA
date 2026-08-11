/* Ghidra address: 00847b00 */
/* Ghidra symbol: FUN_00847b00 */


void FUN_00847b00(longlong param_1,char param_2,undefined2 param_3,uint param_4,undefined4 param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined1 *local_b0;
  uint local_a4;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined8 local_94;
  int local_8c;
  undefined1 local_88 [56];
  undefined1 local_50 [64];
  
  local_b0 = auStack_e8;
  cVar2 = *(char *)(param_1 + 0x550);
  if (cVar2 == '\x01') {
    pcVar5 = (code *)FUN_00411550(param_1,0xffd2);
    (*pcVar5)(param_1,param_3,param_4,param_5);
    uVar4 = FUN_0065b870(param_1);
    thunk_FUN_040dee27(uVar4,1);
    FUN_00848f80(param_1);
    pcVar5 = (code *)FUN_00411550(param_1,0xffea);
    (*pcVar5)(param_1);
  }
  else if ((byte)(cVar2 - 2U) < 2) {
    local_b0 = auStack_e8;
    FUN_00841d10(param_1,local_88);
    FUN_00842b00(param_1,local_88);
    if (*(char *)(param_1 + 0x550) == '\x03') {
      pcVar5 = (code *)FUN_00411550(param_1,0xffc5);
      cVar2 = (*pcVar5)(param_1);
      if (cVar2 != '\0') {
        iVar3 = FUN_0064d0b0(param_1);
        *(int *)(param_1 + 0x4f4) = iVar3 - *(int *)(param_1 + 0x4f4);
      }
    }
    if (*(char *)(param_1 + 0x550) == '\x03') {
      local_8c = FUN_00847a80(auStack_e8,local_88);
      if (1 < local_8c) {
        FUN_00848460(param_1,*(undefined4 *)(param_1 + 0x4f0),local_8c);
        FUN_00849c40(param_1);
      }
    }
    else {
      local_8c = FUN_00847a80(auStack_e8,local_50);
      if (1 < local_8c) {
        FUN_00848ac0(param_1,*(undefined4 *)(param_1 + 0x4f0),local_8c);
        FUN_00849c40(param_1);
      }
    }
  }
  else if (cVar2 == '\x04') {
    local_b0 = auStack_e8;
    FUN_00843b70(param_1);
    uVar4 = FUN_0065b870(param_1);
    thunk_FUN_040dee27(uVar4,1);
    local_a0 = param_5;
    local_a4 = param_4;
    pcVar5 = (code *)FUN_00411550(param_1,0xff96);
    cVar2 = (*pcVar5)(param_1,param_1 + 0x4fc,param_1 + 0x500,&local_a4);
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x4fc) != *(int *)(param_1 + 0x500)) {
        FUN_0083fd00(param_1,*(int *)(param_1 + 0x4fc),*(int *)(param_1 + 0x500));
        FUN_00849c40(param_1);
      }
    }
    FUN_00848f80(param_1);
  }
  else if (cVar2 == '\x05') {
    local_b0 = auStack_e8;
    FUN_00843b70(param_1);
    uVar4 = FUN_0065b870(param_1);
    thunk_FUN_040dee27(uVar4,1);
    local_98 = param_5;
    local_9c = param_4;
    pcVar5 = (code *)FUN_00411550(param_1,0xff97);
    cVar2 = (*pcVar5)(param_1,param_1 + 0x4fc,param_1 + 0x500,&local_9c);
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x4fc) != *(int *)(param_1 + 0x500)) {
        FUN_0083fbd0(param_1,*(int *)(param_1 + 0x4fc),*(int *)(param_1 + 0x500));
        FUN_00849c40(param_1);
      }
    }
    FUN_00848f80(param_1);
  }
  else {
    local_b0 = auStack_e8;
    FUN_00848f80(param_1);
    uVar6 = FUN_0083fdd0(param_1,param_4,param_5);
    local_94 = uVar6;
    if (((((param_2 == '\0') && (*(char *)(param_1 + 0x560) != '\0')) &&
         (*(int *)(param_1 + 0x564) != -1)) && (*(int *)(param_1 + 0x568) != -1)) &&
       (((((*(uint *)(param_1 + 0x4d4) & 0x8000) != 0 &&
          (local_94._0_4_ = (int)uVar6, (int)local_94 < *(int *)(param_1 + 0x4bc))) &&
         (-1 < (int)local_94)) ||
        ((((*(uint *)(param_1 + 0x4d4) & 0x10000) != 0 &&
          (local_94._4_4_ = (int)(uVar6 >> 0x20), bVar1 = local_94._4_4_ < *(int *)(param_1 + 0x4c0)
          , bVar1)) && (-1 < (longlong)uVar6)))))) {
      pcVar5 = (code *)FUN_00411550(param_1,0xffa8);
      (*pcVar5)(param_1,local_94 & 0xffffffff,local_94._4_4_);
    }
  }
  local_c8 = param_5;
  FUN_00650ea0(param_1,param_2,param_3,param_4);
  *(undefined1 *)(param_1 + 0x550) = 0;
  *(undefined1 *)(param_1 + 0x560) = 0;
  FUN_00844240(param_1,param_1 + 0x564);
  return;
}

