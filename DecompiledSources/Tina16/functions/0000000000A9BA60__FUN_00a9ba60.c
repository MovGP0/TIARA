/* Ghidra address: 00a9ba60 */
/* Ghidra symbol: FUN_00a9ba60 */


undefined1 FUN_00a9ba60(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_39;
  longlong local_38;
  longlong local_30 [2];
  longlong local_20;
  
  local_38 = 0;
  local_30[0] = 0;
  local_39 = 0;
  for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x10); iVar4 = iVar4 + 1) {
    local_20 = FUN_00ac3910(param_1,iVar4);
    cVar1 = FUN_004113d0(local_20,&PTR_FUN_00a84e18);
    if (cVar1 == '\0') {
      bVar5 = false;
    }
    else {
      FUN_0043ea00(local_30,*(undefined8 *)(local_20 + 0xd0));
      iVar2 = 0;
      if (local_30[0] != 0) {
        iVar2 = *(int *)(local_30[0] + -4);
      }
      bVar5 = iVar2 == 0;
    }
    if ((!bVar5) &&
       ((cVar1 = FUN_004113d0(local_20,&PTR_FUN_00a865e0), cVar1 == '\0' ||
        (*(char *)(local_20 + 0x4c) != '\x02')))) break;
  }
  if (((iVar4 < *(int *)(param_1 + 0x10)) &&
      (cVar1 = FUN_004113d0(local_20,&PTR_FUN_00a865e0), cVar1 != '\0')) &&
     (*(char *)(local_20 + 0x509) != '\0')) {
    *(undefined4 *)(local_20 + 0x478) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  while (iVar2 = iVar2 + -1, iVar4 <= iVar2) {
    local_20 = FUN_00ac3910(param_1,iVar2);
    cVar1 = FUN_004113d0(local_20,&PTR_FUN_00a84e18);
    if (cVar1 == '\0') {
      bVar5 = false;
    }
    else {
      FUN_0043ea00(&local_38,*(undefined8 *)(local_20 + 0xd0));
      iVar3 = 0;
      if (local_38 != 0) {
        iVar3 = *(int *)(local_38 + -4);
      }
      bVar5 = iVar3 == 0;
    }
    if ((!bVar5) &&
       ((cVar1 = FUN_004113d0(local_20,&PTR_FUN_00a865e0), cVar1 == '\0' ||
        (*(char *)(local_20 + 0x4c) != '\x02')))) break;
  }
  if ((-1 < iVar2) && (cVar1 = FUN_004113d0(local_20,&PTR_FUN_00a865e0), cVar1 != '\0')) {
    local_39 = *(char *)(local_20 + 0x50a) != '\0';
    if ((bool)local_39) {
      *(undefined4 *)(local_20 + 0x480) = 0;
    }
    cVar1 = FUN_004113d0(local_20,&PTR_FUN_00a8a828);
    if (cVar1 != '\0') {
      local_39 = FUN_00a9ba60(*(undefined8 *)(local_20 + 0xa8));
    }
  }
  FUN_00414560(&local_38,2);
  return local_39;
}

