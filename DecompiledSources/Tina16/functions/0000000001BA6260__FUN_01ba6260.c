/* Ghidra address: 01ba6260 */
/* Ghidra symbol: FUN_01ba6260 */


void FUN_01ba6260(undefined8 param_1,undefined8 param_2,ulonglong *param_3,longlong param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar11;
  int local_70;
  int local_6c;
  undefined1 local_59;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  local_38 = *param_3;
  local_30 = param_3[1];
  local_59 = 0;
  sVar2 = FUN_00c3f420(param_4,1,0,&local_59);
  if (sVar2 != -1) {
    lVar5 = FUN_004aeac0(*(undefined8 *)(param_4 + 0x38),(int)sVar2);
    uVar6 = CONCAT44(uVar11,local_30._4_4_);
    FUN_00b956d0(local_48,local_38 & 0xffffffff,local_38._4_4_,local_30 & 0xffffffff,uVar6);
    uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
    sVar2 = *(short *)(lVar5 + 0x10);
    sVar1 = *(short *)(lVar5 + 0xc);
    iVar3 = (int)*(short *)(lVar5 + 0x12) + (int)*(short *)(lVar5 + 0xe);
    local_70 = (int)sVar2 - (int)sVar1;
    local_6c = (int)*(short *)(lVar5 + 0x12) - (int)*(short *)(lVar5 + 0xe);
    iVar9 = (int)local_30 - (int)local_38;
    iVar10 = local_30._4_4_ - local_38._4_4_;
    if (local_6c < iVar10) {
      local_6c = iVar10;
    }
    if (local_70 < iVar9) {
      local_70 = iVar9;
    }
    iVar4 = FUN_0040c770((double)local_6c * ((double)iVar9 / (double)iVar10),
                         (longlong)iVar3 % 2 & 0xffffffff);
    if (local_70 < iVar4) {
      local_70 = iVar4;
    }
    iVar9 = FUN_0040c770((double)local_70 * ((double)iVar10 / (double)iVar9));
    if (local_6c < iVar9) {
      local_6c = iVar9;
    }
    FUN_00b956d0(local_58,0,0,local_70,CONCAT44(uVar11,local_6c));
    FUN_00b95860(local_58,((int)sVar2 + (int)sVar1) / 2 - local_70 / 2,iVar3 / 2 - local_6c / 2);
    uVar6 = FUN_005ffa40(param_2);
    puVar7 = (undefined8 *)FUN_01a979b0(0,&PTR_FUN_01a96ef0,uVar6,local_48,local_58,0);
    uVar6 = thunk_FUN_03976db5(local_38 & 0xffffffff,local_38._4_4_,local_30 & 0xffffffff,
                               local_30._4_4_);
    uVar8 = FUN_005ffa40(param_2);
    thunk_FUN_039bba01(uVar8,uVar6);
    thunk_FUN_0416f828(uVar6);
    FUN_00c3cbb0(lVar5,puVar7,0,0,0x90,0,0,0);
    uVar6 = FUN_005ffa40(param_2);
    thunk_FUN_039bba01(uVar6,0);
    uVar6 = (**(code **)*puVar7)(puVar7);
    FUN_00418590(uVar6,&DAT_01a96ff8);
  }
  return;
}

