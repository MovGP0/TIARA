/* Ghidra address: 0055b2c0 */
/* Ghidra symbol: FUN_0055b2c0 */


void FUN_0055b2c0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_30 = 0;
  local_2c = 0xf;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  local_88 = param_1;
  FUN_00419260(param_1 + 0x10,&DAT_0052f808,1,
               (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x10));
  if ((*(char *)(local_88 + 8) != '\0') && (0 < *(int *)(*(longlong *)(local_88 + 0x28) + 0x10))) {
    puVar1 = *(undefined8 **)(local_88 + 0x10);
    lVar2 = *(longlong *)(local_88 + 0x28);
    if (*(int *)(lVar2 + 0x10) == 0) {
      FUN_00594f90();
    }
    puVar3 = *(undefined8 **)(lVar2 + 8);
    local_40 = *puVar3;
    uStack_38 = puVar3[1];
    *puVar1 = local_40;
    puVar1[1] = uStack_38;
    FUN_0055b140(auStack_a8,puVar1);
  }
  if (*(char *)(local_88 + 0x38) != '\x04') {
    cVar4 = FUN_00535150(*(undefined8 *)(local_88 + 0x30),0,*(char *)(local_88 + 0x38));
    if (cVar4 != '\0') {
      FUN_0055b540(&local_78,*(undefined8 *)(local_88 + 0x30),1,0);
      *(undefined8 *)(local_88 + 0x18) = local_78;
      *(undefined8 *)(local_88 + 0x20) = uStack_70;
      FUN_0055b140(auStack_a8,local_88 + 0x18);
    }
  }
  if ((*(char *)(local_88 + 8) == '\0') && (0 < *(int *)(*(longlong *)(local_88 + 0x28) + 0x10))) {
    puVar1 = *(undefined8 **)(local_88 + 0x10);
    lVar2 = *(longlong *)(local_88 + 0x28);
    if (*(int *)(lVar2 + 0x10) == 0) {
      FUN_00594f90();
    }
    puVar3 = *(undefined8 **)(lVar2 + 8);
    local_50 = *puVar3;
    uStack_48 = puVar3[1];
    *puVar1 = local_50;
    puVar1[1] = uStack_48;
    FUN_0055b140(auStack_a8,puVar1);
  }
  iVar6 = *(int *)(*(longlong *)(local_88 + 0x28) + 0x10) + -1;
  local_7c = 1;
  if (0 < iVar6) {
    do {
      lVar5 = (longlong)(int)local_7c;
      puVar1 = (undefined8 *)(*(longlong *)(local_88 + 0x10) + lVar5 * 0x10);
      lVar2 = *(longlong *)(local_88 + 0x28);
      if (*(uint *)(lVar2 + 0x10) <= local_7c) {
        FUN_00594f90();
      }
      puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 8) + lVar5 * 0x10);
      local_60 = *puVar3;
      uStack_58 = puVar3[1];
      *puVar1 = local_60;
      puVar1[1] = uStack_58;
      FUN_0055b140(auStack_a8,puVar1);
      local_7c = local_7c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if ((*(char *)(local_88 + 0x38) == '\x04') && (*(longlong *)(local_88 + 0x30) != 0)) {
    FUN_0055b540(&local_78,*(undefined8 *)(local_88 + 0x30),1,0);
    *(undefined8 *)(local_88 + 0x18) = local_78;
    *(undefined8 *)(local_88 + 0x20) = uStack_70;
    FUN_0055b140(auStack_a8,local_88 + 0x18);
  }
  *(undefined4 *)(local_88 + 0xc) = local_30;
  FUN_00410f20(*(undefined8 *)(local_88 + 0x28));
  *(undefined8 *)(local_88 + 0x28) = 0;
  return;
}

