/* Ghidra address: 01c3f340 */
/* Ghidra symbol: FUN_01c3f340 */


void FUN_01c3f340(undefined8 param_1,undefined8 param_2,ulonglong *param_3,longlong param_4)

{
  short sVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar13;
  int local_70;
  int local_6c;
  undefined1 local_59;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_38 = *param_3;
  local_30 = param_3[1];
  local_59 = 0;
  sVar3 = FUN_00c3f420(param_4,1,0,&local_59);
  if (sVar3 != -1) {
    lVar7 = FUN_004aeac0(*(undefined8 *)(param_4 + 0x38),(int)sVar3);
    uVar8 = CONCAT44(uVar13,local_30._4_4_);
    FUN_00b956d0(local_48,local_38 & 0xffffffff,local_38._4_4_,local_30 & 0xffffffff,uVar8);
    uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
    sVar3 = *(short *)(lVar7 + 0x10);
    sVar1 = *(short *)(lVar7 + 0xc);
    iVar5 = (int)*(short *)(lVar7 + 0x12) + (int)*(short *)(lVar7 + 0xe);
    local_70 = (int)sVar3 - (int)sVar1;
    local_6c = (int)*(short *)(lVar7 + 0x12) - (int)*(short *)(lVar7 + 0xe);
    iVar11 = (int)local_30 - (int)local_38;
    iVar12 = local_30._4_4_ - local_38._4_4_;
    if (local_6c < iVar12) {
      local_6c = iVar12;
    }
    if (local_70 < iVar11) {
      local_70 = iVar11;
    }
    iVar6 = FUN_0040c770((double)local_6c * ((double)iVar11 / (double)iVar12),
                         (longlong)iVar5 % 2 & 0xffffffff);
    if (local_70 < iVar6) {
      local_70 = iVar6;
    }
    iVar11 = FUN_0040c770((double)local_70 * ((double)iVar12 / (double)iVar11));
    if (local_6c < iVar11) {
      local_6c = iVar11;
    }
    FUN_00b956d0(local_58,0,0,local_70,CONCAT44(uVar13,local_6c));
    FUN_00b95860(local_58,((int)sVar3 + (int)sVar1) / 2 - local_70 / 2,iVar5 / 2 - local_6c / 2);
    uVar8 = FUN_005ffa40(param_2);
    puVar9 = (undefined8 *)FUN_01a979b0(0,&PTR_FUN_01a96ef0,uVar8,local_48,local_58,0);
    uVar8 = thunk_FUN_03976db5(local_38 & 0xffffffff,local_38._4_4_,local_30 & 0xffffffff,
                               local_30._4_4_);
    uVar10 = FUN_005ffa40(param_2);
    thunk_FUN_039bba01(uVar10,uVar8);
    thunk_FUN_0416f828(uVar8);
    cVar2 = FUN_01c3d390(param_1);
    if (cVar2 == '\0') {
      uVar4 = 0x90;
    }
    else {
      uVar4 = 0;
    }
    FUN_00c3cbb0(lVar7,puVar9,0,0,uVar4,0,0,0);
    uVar8 = FUN_005ffa40(param_2);
    thunk_FUN_039bba01(uVar8,0);
    uVar8 = (**(code **)*puVar9)(puVar9);
    FUN_00418590(uVar8,&DAT_01a96ff8);
  }
  return;
}

