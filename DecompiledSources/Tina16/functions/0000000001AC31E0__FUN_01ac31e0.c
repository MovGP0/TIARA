/* Ghidra address: 01ac31e0 */
/* Ghidra symbol: FUN_01ac31e0 */


void FUN_01ac31e0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  int local_78;
  int local_6c;
  longlong *local_60;
  longlong local_58;
  
  local_80 = auStack_a8;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    uVar3 = FUN_01abda80(*(longlong *)(param_1 + 0x58));
    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01cb9c30);
    if (cVar1 != '\0') {
      local_58 = FUN_01abd500(*(undefined8 *)(param_1 + 0x58));
      local_60 = (longlong *)FUN_01abda80(*(undefined8 *)(param_1 + 0x58));
      uVar3 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
      dVar4 = (double)(**(code **)(*local_60 + 0xa0))(local_60,uVar3);
      uVar3 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
      dVar5 = (double)FUN_01cc92d0(local_60,uVar3);
      if (dVar4 == dVar5) {
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(local_58 + 0xe8);
        return;
      }
      uVar3 = FUN_01abda80(*(undefined8 *)(param_1 + 0x58));
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01cba328);
      if (cVar1 == '\0') {
        dVar4 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0x70));
        uVar3 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
        FUN_01cc92d0(local_60,uVar3);
        dVar5 = (double)FUN_00c43d10();
        uVar3 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
        (**(code **)(*local_60 + 0xa0))(local_60,uVar3);
        dVar6 = (double)FUN_00c43d10();
        uVar3 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
        FUN_01cc92d0(local_60,uVar3);
        dVar7 = (double)FUN_00c43d10();
        uVar2 = FUN_010bfa10((double)*(int *)(local_58 + 0xe8) +
                             ((dVar4 - dVar5) / (dVar6 - dVar7)) *
                             (double)(*(int *)(local_58 + 0xec) - *(int *)(local_58 + 0xe8)));
        *(undefined4 *)(param_1 + 0x60) = uVar2;
      }
      else {
        uVar3 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
        dVar4 = (double)FUN_01cc92d0(local_60,uVar3);
        uVar3 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
        dVar5 = (double)(**(code **)(*local_60 + 0xa0))(local_60,uVar3);
        uVar3 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
        dVar6 = (double)FUN_01cc92d0(local_60,uVar3);
        uVar2 = FUN_010bfa10((double)*(int *)(local_58 + 0xe8) +
                             ((*(double *)(param_1 + 0x70) - dVar4) / (dVar5 - dVar6)) *
                             (double)(*(int *)(local_58 + 0xec) - *(int *)(local_58 + 0xe8)));
        *(undefined4 *)(param_1 + 0x60) = uVar2;
      }
      local_6c = *(int *)(local_58 + 0xe8);
      if (local_6c < *(int *)(param_1 + 0x60)) {
        local_6c = *(int *)(param_1 + 0x60);
      }
      *(int *)(param_1 + 0x60) = local_6c;
      local_78 = *(int *)(local_58 + 0xec);
      if (local_6c < local_78) {
        local_78 = local_6c;
      }
      *(int *)(param_1 + 0x60) = local_78;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 100);
  return;
}

