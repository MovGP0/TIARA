/* Ghidra address: 00a36fb0 */
/* Ghidra symbol: FUN_00a36fb0 */


void FUN_00a36fb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined8 local_48;
  undefined8 local_40;
  code *local_38;
  longlong local_30;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = (code *)0x0;
  local_30 = 0;
  lVar7 = *(longlong *)(param_1 + 0x28);
  bVar1 = *(byte *)(lVar7 + 0x491);
  if (bVar1 < 4) {
    if ((bVar1 == 3) || (bVar1 == 0)) {
      bVar2 = *(byte *)(lVar7 + 0x490);
      if (bVar2 < 5) {
        if ((bVar2 != 4) && (bVar2 != 1)) {
          if (bVar2 == 2) {
            if (bVar1 == 3) {
              local_38 = FUN_00a36d00;
              local_30 = param_1;
            }
            else {
              local_38 = FUN_00a36c90;
              local_30 = param_1;
            }
          }
          goto LAB_00a371e7;
        }
      }
      else if (bVar2 != 8) {
        if (bVar2 == 0x10) {
          local_38 = FUN_00a36d60;
          local_30 = param_1;
        }
        goto LAB_00a371e7;
      }
      local_38 = FUN_00a36c70;
      local_30 = param_1;
      goto LAB_00a371e7;
    }
    if (bVar1 == 2) {
      if (*(char *)(lVar7 + 0x490) == '\b') {
        local_38 = FUN_00a36b10;
        local_30 = param_1;
      }
      else if (*(char *)(lVar7 + 0x490) == '\x10') {
        local_38 = FUN_00a36b90;
        local_30 = param_1;
      }
      goto LAB_00a371e7;
    }
  }
  else {
    if (bVar1 == 4) {
      if (*(char *)(lVar7 + 0x490) == '\b') {
        local_38 = FUN_00a36f20;
        local_30 = param_1;
      }
      else if (*(char *)(lVar7 + 0x490) == '\x10') {
        local_38 = FUN_00a36f60;
        local_30 = param_1;
      }
      goto LAB_00a371e7;
    }
    if (bVar1 == 6) {
      if (*(char *)(lVar7 + 0x490) == '\b') {
        local_38 = FUN_00a36db0;
        local_30 = param_1;
      }
      else if (*(char *)(lVar7 + 0x490) == '\x10') {
        local_38 = FUN_00a36e30;
        local_30 = param_1;
      }
      goto LAB_00a371e7;
    }
  }
  FUN_0041ddd0(&local_40,PTR_PTR_02004798);
  FUN_00a39bd0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_00a2df48,local_40);
LAB_00a371e7:
  if (local_38 == (code *)0x0) {
    FUN_0041ddd0(&local_48,PTR_PTR_02002fd0);
    FUN_00a39bd0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_00a2e838,local_48);
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  iVar8 = *(int *)(param_1 + 0x34);
  lVar5 = (longlong)(*(int *)(lVar4 + 0x498) * (iVar8 + -1));
  lVar7 = *(longlong *)(lVar4 + 0x478) + lVar5;
  lVar6 = *(longlong *)(lVar4 + 0x480);
  lVar5 = *(longlong *)(lVar4 + 0x470) + lVar5;
  do {
    iVar3 = FUN_00a35ca0(param_1,param_3,
                         *(undefined8 *)(param_1 + 0x70 + (ulonglong)*(byte *)(param_1 + 0x80) * 8),
                         *(int *)(param_1 + 0x38) + 1,param_1 + 0x84,param_5);
    if (iVar3 == 0) break;
    FUN_00a37360(param_1);
    (*local_38)(local_30,*(longlong *)(param_1 + 0x70 + (ulonglong)*(byte *)(param_1 + 0x80) * 8) +
                         1,lVar7,lVar6,lVar5);
    *(bool *)(param_1 + 0x80) = *(char *)(param_1 + 0x80) == '\0';
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x498);
    lVar7 = lVar7 - lVar4;
    lVar5 = lVar5 - lVar4;
    lVar6 = lVar6 + *(int *)(param_1 + 0x30);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  FUN_00414560(&local_48,2);
  return;
}

