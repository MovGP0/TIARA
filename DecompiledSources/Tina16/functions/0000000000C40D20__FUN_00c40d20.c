/* Ghidra address: 00c40d20 */
/* Ghidra symbol: FUN_00c40d20 */


void FUN_00c40d20(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined2 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  short sVar10;
  short sVar11;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar12;
  short local_5c;
  short local_5a;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined8 local_30;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_30 = *param_2;
  sVar3 = FUN_00c3f420(param_3,param_5,param_6,&param_7);
  if (sVar3 != -1) {
    lVar6 = FUN_004aeac0(*(undefined8 *)(param_3 + 0x38),(longlong)sVar3);
    uVar7 = CONCAT44(uVar12,(int)local_30._6_2_);
    FUN_00b956d0(local_40,(longlong)(short)local_30,(longlong)local_30._2_2_,
                 (longlong)local_30._4_2_,uVar7);
    uVar12 = (undefined4)((ulonglong)uVar7 >> 0x20);
    sVar3 = *(short *)(lVar6 + 0x10);
    sVar2 = *(short *)(lVar6 + 0xc);
    iVar5 = (int)*(short *)(lVar6 + 0x12) + (int)*(short *)(lVar6 + 0xe);
    local_5c = sVar3 - sVar2;
    local_5a = *(short *)(lVar6 + 0x12) - *(short *)(lVar6 + 0xe);
    sVar10 = local_30._4_2_ - (short)local_30;
    sVar11 = local_30._6_2_ - local_30._2_2_;
    if (local_5a < sVar11) {
      local_5a = sVar11;
    }
    if (local_5c < sVar10) {
      local_5c = sVar10;
    }
    sVar4 = FUN_0040c770((double)(int)local_5a * ((double)(int)sVar10 / (double)(int)sVar11),
                         (longlong)iVar5 % 2 & 0xffffffff);
    if (local_5c < sVar4) {
      local_5c = sVar4;
    }
    sVar10 = FUN_0040c770((double)(int)local_5c * ((double)(int)sVar11 / (double)(int)sVar10));
    if (local_5a < sVar10) {
      local_5a = sVar10;
    }
    FUN_00b956d0(local_50,0,0,(longlong)local_5c,CONCAT44(uVar12,(int)local_5a));
    FUN_00b95860(local_50,(int)(short)(((int)sVar3 + (int)sVar2) / 2) - (int)local_5c / 2,
                 (int)(short)(iVar5 / 2) - (int)local_5a / 2);
    uVar7 = FUN_005ffa40(param_1);
    puVar8 = (undefined8 *)FUN_01a979b0(0,&PTR_FUN_01a96ef0,uVar7,local_40,local_50,0);
    uVar7 = thunk_FUN_03976db5((longlong)(short)local_30,(longlong)local_30._2_2_,
                               (longlong)local_30._4_2_,(longlong)local_30._6_2_);
    uVar9 = FUN_005ffa40(param_1);
    thunk_FUN_039bba01(uVar9,uVar7);
    thunk_FUN_0416f828(uVar7);
    uVar1 = *PTR_DAT_02001e78;
    *PTR_DAT_02001e78 = 0;
    FUN_00c3cbb0(lVar6,puVar8,0,0,param_4,param_7,param_7,param_8);
    *PTR_DAT_02001e78 = uVar1;
    uVar7 = FUN_005ffa40(param_1);
    thunk_FUN_039bba01(uVar7,0);
    uVar7 = (**(code **)*puVar8)(puVar8);
    FUN_00418590(uVar7,&DAT_01a96ff8);
  }
  return;
}

