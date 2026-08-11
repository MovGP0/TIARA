/* Ghidra address: 010ec2b0 */
/* Ghidra symbol: FUN_010ec2b0 */


void FUN_010ec2b0(longlong param_1,char param_2,longlong param_3,longlong param_4,longlong param_5,
                 longlong param_6,int *param_7,undefined4 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11,undefined8 param_12,byte param_13,
                 byte param_14,char param_15,undefined1 *param_16,longlong *param_17)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 local_40;
  longlong local_30;
  
  local_40 = 0;
  *param_17 = 0;
  if (param_3 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x50) == 0) {
    return;
  }
  plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xd8);
  iVar5 = (**(code **)(*plVar9 + 0x28))(plVar9);
  if (iVar5 < 1) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x50);
  local_30 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x30))(*(longlong **)(lVar1 + 0xd8),0);
  if (param_4 == 0) {
    return;
  }
  if (local_30 == 0) {
    return;
  }
  if (param_5 == 0) {
    return;
  }
  bVar2 = false;
  bVar3 = false;
  if ((((param_6 != 0) && (bVar2 = false, bVar3 = false, param_5 != param_6)) &&
      (lVar7 = FUN_010e7720(param_1,param_6), bVar2 = false, bVar3 = false, lVar7 != 0)) &&
     (*(char *)(local_30 + 0x58) == '\0')) {
    bVar2 = false;
    if ((*(longlong *)(lVar1 + 0xf0) != 0) &&
       (iVar5 = FUN_004aeba0(*(undefined8 *)(lVar7 + 0x108),*(undefined8 *)(lVar1 + 0xf0)),
       bVar2 = false, iVar5 != -1)) {
      bVar2 = true;
      FUN_010e7ec0(param_1,1);
    }
    bVar3 = false;
    if ((*(longlong *)(lVar1 + 0xf8) != 0) &&
       (iVar5 = FUN_004aeba0(*(undefined8 *)(lVar7 + 0x108),*(undefined8 *)(lVar1 + 0xf8)),
       bVar3 = false, iVar5 != -1)) {
      bVar3 = true;
      FUN_010e7ec0(param_1,0);
    }
    lVar7 = FUN_004113f0(lVar7,&PTR_FUN_01aae560);
    uVar6 = FUN_005fd4d0(*(undefined8 *)(lVar7 + 0x60));
    uVar4 = FUN_01a8db90(uVar6);
    *param_7 = uVar4 - 1;
  }
  if (param_5 == 0) goto LAB_010ec727;
  *(undefined1 *)(param_5 + 0x18) = 1;
  lVar7 = FUN_010e7720(param_1,param_5);
  *param_17 = lVar7;
  if (*param_17 == 0) {
    if (param_2 == '\v') {
LAB_010ec4d3:
      local_40 = FUN_01cc6f70(&PTR_FUN_010ff460,1,param_4);
    }
    else if (param_2 == '\f') {
LAB_010ec4f1:
      local_40 = FUN_01cc6f70(&PTR_FUN_010ff630,1,param_4);
    }
    else {
      if (param_2 == '\r') goto LAB_010ec4d3;
      if (param_2 == '\x0f') goto LAB_010ec4f1;
    }
    FUN_010ebaa0(param_1,local_40,param_4,param_5,param_6,*param_7,1,0,param_8,param_9,param_10,
                 param_11,param_12,&local_30,param_17,*(undefined8 *)(param_1 + 0x68),
                 *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x50));
    if ((*(longlong *)(lVar1 + 0xf0) == 0 || bVar2) && (*(char *)(param_1 + 0xc0) != '\0')) {
      FUN_010e7c50(param_1,1,param_5);
    }
    if ((*(longlong *)(lVar1 + 0xf8) == 0 || bVar3) && (*(char *)(param_1 + 0xc1) != '\0')) {
      FUN_010e7c50(param_1,0,param_5);
    }
  }
  else {
    uVar8 = FUN_004113f0(*param_17,&PTR_FUN_01aae560);
    FUN_010e7820(param_1,uVar8);
  }
  if (*param_17 != 0) {
    plVar9 = (longlong *)FUN_004113f0(*param_17,&PTR_FUN_010fe770);
    if (((param_14 & param_13) == 0) || (param_15 == '\0')) {
      if (param_13 != 0) {
        (**(code **)(*plVar9 + 0xc0))
                  (plVar9,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x10));
      }
      if (param_14 != 0) {
        (**(code **)(*plVar9 + 0x70))(plVar9,*(undefined8 *)(param_1 + 0x68));
      }
    }
    else {
      FUN_01101d50(plVar9,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x10));
    }
  }
LAB_010ec727:
  *param_16 = 0;
  return;
}

