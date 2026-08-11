/* Ghidra address: 00ae3650 */
/* Ghidra symbol: FUN_00ae3650 */


void FUN_00ae3650(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  iVar4 = *(int *)(lVar1 + 0x10);
  iVar6 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar5 = FUN_00a72910(lVar1,iVar6);
      if (*(char *)(lVar5 + 8) == '\"') {
        bVar2 = true;
        local_30 = FUN_00a72910(lVar1,iVar6);
        goto code_r0x00ae36d1;
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  bVar2 = false;
code_r0x00ae36d1:
  if (bVar2) {
    FUN_00414b50(&local_38,*(undefined8 *)(local_30 + 0x28));
  }
  else {
    FUN_00414480(&local_38);
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  iVar4 = *(int *)(lVar1 + 0x10);
  iVar6 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar5 = FUN_00a72910(lVar1,iVar6);
      if (*(char *)(lVar5 + 8) == '3') {
        bVar2 = true;
        local_30 = FUN_00a72910(lVar1,iVar6);
        goto code_r0x00ae373f;
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  bVar2 = false;
code_r0x00ae373f:
  if (bVar2) {
    FUN_00414b50(&local_40,*(undefined8 *)(local_30 + 0x28));
  }
  else {
    FUN_00414480(&local_40);
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  iVar4 = *(int *)(lVar1 + 0x10);
  iVar6 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar5 = FUN_00a72910(lVar1,iVar6);
      if (*(char *)(lVar5 + 8) == '\x16') {
        bVar2 = true;
        local_30 = FUN_00a72910(lVar1,iVar6);
        goto code_r0x00ae37ad;
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  bVar2 = false;
code_r0x00ae37ad:
  if (bVar2) {
    FUN_00414b50(&local_48,*(undefined8 *)(local_30 + 0x28));
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x48);
    iVar4 = *(int *)(lVar1 + 0x10);
    iVar6 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar5 = FUN_00a72910(lVar1,iVar6);
        if (*(char *)(lVar5 + 8) == '\x0e') {
          bVar2 = true;
          local_30 = FUN_00a72910(lVar1,iVar6);
          goto code_r0x00ae3812;
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    bVar2 = false;
code_r0x00ae3812:
    if (bVar2) {
      FUN_00414b50(&local_38,L"content-type");
      FUN_00414b50(&local_48,*(undefined8 *)(local_30 + 0x28));
    }
    else {
      FUN_00414480(&local_48);
    }
  }
  cVar3 = FUN_004113d0(param_2,&DAT_00aea600);
  if ((cVar3 != '\0') && (iVar4 = FUN_0043e420(local_38,L"content-type"), iVar4 == 0)) {
    FUN_00ad6b90(param_1,local_48);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    (**(code **)(param_1 + 0xb0))
              (*(undefined8 *)(param_1 + 0xb8),param_2,local_38,local_40,local_48);
  }
  FUN_00ad4730(param_1);
  FUN_00414560(&local_48,3);
  return;
}

