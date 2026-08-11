/* Ghidra address: 01d15da0 */
/* Ghidra symbol: FUN_01d15da0 */


void FUN_01d15da0(longlong param_1,undefined4 param_2,int param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_b8;
  int local_b4;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58 [64];
  
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90[0] = 0;
  local_80 = 0;
  local_b8 = param_2;
  local_b4 = param_3;
  local_b0 = param_4;
  if ((param_4 == 0) || (iVar4 = FUN_01d11780(param_4), iVar4 == 0)) goto LAB_01d162d3;
  uVar6 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x128));
  thunk_FUN_03b994b9(uVar6,1);
  FUN_0043e130(local_90,*(undefined8 *)PTR_DAT_02001f18);
  iVar4 = FUN_00416db0(local_90[0],&DAT_01d16350);
  if (iVar4 == 0) {
LAB_01d15e9b:
    cVar3 = FUN_01d15130(auStack_e8,local_b0);
    if (cVar3 == '\0') {
      *(undefined4 *)(*(longlong *)(param_1 + 0x128) + 0x28) = 0x80;
    }
    else {
      *(undefined4 *)(*(longlong *)(param_1 + 0x128) + 0x28) = 0;
    }
  }
  else {
    FUN_0043e130(&local_98,*(undefined8 *)PTR_DAT_02001f18);
    iVar4 = FUN_00416db0(local_98,&PTR_DAT_01d16364);
    if (iVar4 == 0) goto LAB_01d15e9b;
    FUN_0043e130(&local_a0,*(undefined8 *)PTR_DAT_02001f18);
    iVar4 = FUN_00416db0(local_a0,&LAB_01d16378);
    if (iVar4 == 0) goto LAB_01d15e9b;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x120) + 0x88) == '\0') {
    if (*(char *)(*(longlong *)(param_1 + 0x120) + 0x89) == '\0') {
      FUN_00442b00(&local_80,local_b0);
      FUN_01d15200(auStack_e8,local_b8,local_b4,local_80);
    }
    else {
      uVar5 = FUN_01a90ee0(*(undefined4 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x80) + 0x28));
      FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x128) + 0x78),uVar5);
      plVar7 = (longlong *)FUN_005fc570(&PTR_FUN_005f2d40,1);
      (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined8 *)(*(longlong *)(param_1 + 0x128) + 0x70));
      FUN_01d1bfb0(*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128));
      FUN_01d14ed0(param_1,*(undefined8 *)(param_1 + 0x128));
      FUN_00442b00(&local_80,local_b0);
      FUN_01d15200(auStack_e8,local_b8,local_b4,local_80);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x128) + 0x70);
      (**(code **)(*plVar1 + 0x10))(plVar1,plVar7);
      FUN_00410f20(plVar7);
    }
  }
  else {
    uVar5 = FUN_01a90ee0(*(undefined4 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x80) + 0x28));
    FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x128) + 0x78),uVar5);
    plVar7 = (longlong *)FUN_005fc570(&PTR_FUN_005f2d40,1);
    (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined8 *)(*(longlong *)(param_1 + 0x128) + 0x70));
    iVar4 = FUN_01d1bfb0(*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128));
    FUN_01d14ed0(param_1,*(undefined8 *)(param_1 + 0x128));
    FUN_00442b00(&local_80,local_b0);
    FUN_01d15200(auStack_e8,local_b8,local_b4 + iVar4,local_80);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x128) + 0x70);
    (**(code **)(*plVar1 + 0x10))(plVar1,plVar7);
    FUN_00410f20(plVar7);
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    iVar4 = FUN_005fce00(*(undefined8 *)(*(longlong *)(param_1 + 0x128) + 0x70));
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x128) + 0x70);
    local_74 = FUN_0040c840((double)(-iVar4 * *(int *)(lVar2 + 0x2c)) / 72.0);
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    uVar8 = FUN_005fce60(lVar2);
    if ((uVar8 & 1) == 0) {
      local_64 = 400;
    }
    else {
      local_64 = 700;
    }
    uVar8 = FUN_005fce60(*(undefined8 *)(*(longlong *)(param_1 + 0x128) + 0x70));
    local_60 = (uVar8 & 2) != 0;
    uVar8 = FUN_005fce60(*(undefined8 *)(*(longlong *)(param_1 + 0x128) + 0x70));
    local_5f = (uVar8 & 4) != 0;
    uVar8 = FUN_005fce60(*(undefined8 *)(*(longlong *)(param_1 + 0x128) + 0x70));
    local_5e = (uVar8 & 8) != 0;
    local_5d = 1;
    local_5c = 4;
    local_5b = 0;
    local_5a = 2;
    local_59 = 0;
    FUN_005fccd0(*(undefined8 *)(*(longlong *)(param_1 + 0x128) + 0x70),&local_a8);
    FUN_00442620(local_58,local_a8);
    uVar6 = thunk_FUN_041a15ee(&local_74);
    uVar9 = thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x130),uVar6);
    local_c8 = FUN_01d11780(local_b0);
    thunk_FUN_04193d0c(*(undefined8 *)(param_1 + 0x130),local_b8,local_b4,local_b0);
    thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x130),uVar9);
    thunk_FUN_0416f828(uVar6);
  }
LAB_01d162d3:
  FUN_00414480(&local_a8);
  FUN_00414560(&local_a0,3);
  FUN_00414480(&local_80);
  return;
}

