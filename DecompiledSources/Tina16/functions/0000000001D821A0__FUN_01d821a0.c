/* Ghidra address: 01d821a0 */
/* Ghidra symbol: FUN_01d821a0 */


undefined4 FUN_01d821a0(longlong param_1,uint *param_2,undefined8 param_3,byte param_4,byte param_5)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  double dVar6;
  undefined1 auStack_f8 [32];
  double local_d8;
  uint local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined4 local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_36;
  char local_35;
  int local_2c;
  longlong local_28;
  undefined4 local_1c;
  
  local_90 = auStack_f8;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_1c = 1;
  if (*param_2 == 0) {
    *param_2 = *(uint *)(param_1 + 0xaf8);
  }
  cVar2 = FUN_0046ca60(param_3);
  if (cVar2 == '\0') {
    cVar2 = FUN_0046c3b0(param_3);
    if (cVar2 == '\0') {
      *param_2 = 0;
      goto LAB_01d8277a;
    }
    local_b0 = 0;
    local_ac = *param_2 * 2 + -1;
    FUN_0046c750(&local_a8,&local_b0,1,4);
    FUN_00468c40(param_3,&local_a8);
  }
  iVar3 = FUN_0046c9e0(param_3,1);
  if ((longlong)iVar3 < (longlong)(ulonglong)*param_2) {
    FUN_0046c8d0(param_3,*param_2 * 2);
  }
  local_78 = FUN_0113e810(&DAT_0113e408,1,0,0);
  (**(code **)(**(longlong **)(param_1 + 0xa88) + 0xf8))
            (*(longlong **)(param_1 + 0xa88),param_1 + 0xa63,&local_60,1);
  dVar6 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0xa00));
  local_50 = -dVar6 + *(double *)(param_1 + 0xa78);
  dVar6 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0xa00));
  local_58 = -dVar6 + (double)*(byte *)(param_1 + 0xa61) * local_60 + *(double *)(param_1 + 0xa78);
  local_68 = (local_58 - local_50) / (double)*param_2;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x918) + 0x4f0);
  iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
  local_35 = (int)(uint)param_4 <= iVar3 + -1;
  if ((bool)local_35) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x918) + 0x4f0);
    uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,param_4);
    local_40 = FUN_004113f0(uVar4,&PTR_FUN_01105a20);
    if ((*(longlong *)(local_40 + 0x40) != 0) && (*(longlong *)(local_40 + 0x98) != 0)) {
      local_70 = FUN_01cc6f70(&PTR_FUN_010ff460,1,*(undefined8 *)(local_40 + 0x98));
      local_d8 = local_68;
      local_d0 = *param_2;
      local_c8 = *(undefined8 *)(param_1 + 0xae8);
      local_c0 = 0;
      FUN_0113eac0(local_78,*(undefined8 *)(local_40 + 0x40),local_70,local_50);
      FUN_00410f20(local_70);
    }
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x918) + 0x4f0);
  iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
  local_36 = (int)(uint)param_5 <= iVar3 + -1;
  if ((bool)local_36) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x918) + 0x4f0);
    uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,param_5);
    local_48 = FUN_004113f0(uVar4,&PTR_FUN_01105a20);
    if ((*(longlong *)(local_48 + 0x40) != 0) && (*(longlong *)(local_48 + 0x98) != 0)) {
      local_70 = FUN_01cc6f70(&PTR_FUN_010ff460,1,*(undefined8 *)(local_48 + 0x98));
      local_d8 = local_68;
      local_d0 = *param_2;
      local_c8 = *(undefined8 *)(param_1 + 0xaf0);
      local_c0 = 0;
      FUN_0113eac0(local_78,*(undefined8 *)(local_48 + 0x40),local_70,local_50);
      FUN_00410f20(local_70);
    }
  }
  FUN_00410f20(local_78);
  local_28 = FUN_0046ca10(param_3);
  uVar5 = *param_2;
  local_2c = 0;
  if (-1 < (int)(uVar5 - 1)) {
    do {
      if (local_35 == '\0') {
        *(undefined4 *)(local_28 + (longlong)(local_2c * 2) * 4) = 0;
        *(undefined4 *)(local_28 + (longlong)(local_2c * 2 + 1) * 4) = 0;
      }
      else {
        *(float *)(local_28 + (longlong)(local_2c * 2) * 4) =
             (float)*(double *)(*(longlong *)(param_1 + 0xae8) + (longlong)local_2c * 0x10);
        *(float *)(local_28 + (longlong)(local_2c * 2 + 1) * 4) =
             (float)*(double *)(*(longlong *)(param_1 + 0xaf0) + (longlong)local_2c * 0x10);
      }
      local_2c = local_2c + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_0046ca40(param_3);
  *(undefined1 *)(param_1 + 0xafc) = 0;
  local_1c = 0;
LAB_01d8277a:
  FUN_00460ba0(&local_a8);
  return local_1c;
}

