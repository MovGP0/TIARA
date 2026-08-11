/* Ghidra address: 01c26af0 */
/* Ghidra symbol: FUN_01c26af0 */


void FUN_01c26af0(longlong param_1,undefined8 param_2,ulonglong *param_3,longlong param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  int extraout_var;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar14;
  undefined1 local_59;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  local_38 = *param_3;
  local_30 = param_3[1];
  local_59 = 0;
  sVar1 = FUN_00c3f420(param_4,1,0,&local_59);
  if (sVar1 != -1) {
    lVar8 = FUN_004aeac0(*(undefined8 *)(param_4 + 0x38),(int)sVar1);
    iVar13 = *(int *)(param_1 + 0x568);
    iVar2 = FUN_0040c770((double)(int)*(short *)(lVar8 + 0x14) * *(double *)(param_1 + 0x560));
    iVar2 = iVar13 + iVar2;
    iVar3 = FUN_0040c770((double)(int)*(short *)(lVar8 + 0x16) * *(double *)(param_1 + 0x560));
    iVar3 = *(int *)(param_1 + 0x56c) + iVar3;
    iVar4 = FUN_0040c770((double)(int)*(short *)(lVar8 + 0x18) * *(double *)(param_1 + 0x560));
    iVar13 = iVar13 + iVar4;
    iVar4 = FUN_0040c770((double)(int)*(short *)(lVar8 + 0x1a) * *(double *)(param_1 + 0x560));
    iVar4 = *(int *)(param_1 + 0x56c) + iVar4;
    iVar5 = iVar13 - iVar2;
    iVar12 = *(int *)(param_1 + 0x534) - *(int *)(param_1 + 0x52c);
    if ((iVar13 < *(int *)(param_1 + 0x534)) || (*(int *)(param_1 + 0x52c) < iVar2)) {
      if ((*(int *)(param_1 + 0x534) < iVar13) &&
         ((*(int *)(param_1 + 0x52c) < iVar2 && (iVar5 < iVar12)))) {
        *(int *)(param_1 + 0x568) = *(int *)(param_1 + 0x568) - (iVar13 - *(int *)(param_1 + 0x534))
        ;
      }
      else if ((*(int *)(param_1 + 0x534) < iVar13) &&
              ((*(int *)(param_1 + 0x52c) < iVar2 && (iVar12 < iVar5)))) {
        *(int *)(param_1 + 0x568) = *(int *)(param_1 + 0x568) - (iVar2 - *(int *)(param_1 + 0x52c));
      }
      else if ((iVar2 < *(int *)(param_1 + 0x52c)) &&
              ((iVar13 < *(int *)(param_1 + 0x534) && (iVar5 < iVar12)))) {
        *(int *)(param_1 + 0x568) = *(int *)(param_1 + 0x568) + (*(int *)(param_1 + 0x52c) - iVar2);
      }
      else if ((iVar2 < *(int *)(param_1 + 0x52c)) &&
              ((iVar13 < *(int *)(param_1 + 0x534) && (iVar12 < iVar5)))) {
        *(int *)(param_1 + 0x568) = *(int *)(param_1 + 0x568) + (*(int *)(param_1 + 0x534) - iVar13)
        ;
      }
    }
    iVar13 = iVar4 - iVar3;
    iVar2 = *(int *)(param_1 + 0x538) - *(int *)(param_1 + 0x530);
    if ((iVar4 < *(int *)(param_1 + 0x538)) || (*(int *)(param_1 + 0x530) < iVar3)) {
      if ((*(int *)(param_1 + 0x538) < iVar4) &&
         ((*(int *)(param_1 + 0x530) < iVar3 && (iVar13 < iVar2)))) {
        *(int *)(param_1 + 0x56c) = *(int *)(param_1 + 0x56c) - (iVar4 - *(int *)(param_1 + 0x538));
      }
      else if ((*(int *)(param_1 + 0x538) < iVar4) &&
              ((*(int *)(param_1 + 0x530) < iVar3 && (iVar2 < iVar13)))) {
        *(int *)(param_1 + 0x56c) = *(int *)(param_1 + 0x56c) - (iVar3 - *(int *)(param_1 + 0x530));
      }
      else if ((iVar3 < *(int *)(param_1 + 0x530)) &&
              ((iVar4 < *(int *)(param_1 + 0x538) && (iVar13 < iVar2)))) {
        *(int *)(param_1 + 0x56c) = *(int *)(param_1 + 0x56c) + (*(int *)(param_1 + 0x530) - iVar3);
      }
      else if ((iVar3 < *(int *)(param_1 + 0x530)) &&
              ((iVar4 < *(int *)(param_1 + 0x538) && (iVar2 < iVar13)))) {
        *(int *)(param_1 + 0x56c) = *(int *)(param_1 + 0x56c) + (*(int *)(param_1 + 0x538) - iVar4);
      }
    }
    iVar13 = (int)local_30 - (int)local_38;
    iVar2 = local_30._4_4_ - local_38._4_4_;
    uVar9 = CONCAT44(uVar6,local_30._4_4_);
    FUN_00b956d0(local_48,local_38 & 0xffffffff,local_38._4_4_,local_30 & 0xffffffff,uVar9);
    uVar14 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar6 = FUN_0040c770((double)iVar13 / *(double *)(param_1 + 0x560));
    uVar7 = FUN_0040c770((double)iVar2 / *(double *)(param_1 + 0x560));
    FUN_00b956d0(local_58,0,0,uVar6,CONCAT44(uVar14,uVar7));
    iVar13 = FUN_01c27060(param_1);
    uVar6 = FUN_0040c770((double)iVar13 / *(double *)(param_1 + 0x560));
    FUN_01c27060(param_1);
    uVar7 = FUN_0040c770((double)extraout_var / *(double *)(param_1 + 0x560));
    uVar9 = FUN_005ffa40(param_2);
    puVar10 = (undefined8 *)FUN_01a979b0(0,&PTR_FUN_01a96ef0,uVar9,local_48,local_58,0);
    uVar9 = thunk_FUN_03976db5(local_38 & 0xffffffff,local_38._4_4_,local_30 & 0xffffffff,
                               local_30._4_4_);
    uVar11 = FUN_005ffa40(param_2);
    thunk_FUN_039bba01(uVar11,uVar9);
    thunk_FUN_0416f828(uVar9);
    FUN_00c3cbb0(lVar8,puVar10,uVar6,uVar7,0x90,0,0,0);
    uVar9 = FUN_005ffa40(param_2);
    thunk_FUN_039bba01(uVar9,0);
    uVar9 = (**(code **)*puVar10)(puVar10);
    FUN_00418590(uVar9,&DAT_01a96ff8);
  }
  return;
}

