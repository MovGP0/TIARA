/* Ghidra address: 00ad4dd0 */
/* Ghidra symbol: FUN_00ad4dd0 */


undefined8 FUN_00ad4dd0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_38;
  longlong local_30;
  
  local_38 = 0;
  FUN_00414480(param_2);
  local_30 = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  iVar3 = *(int *)(lVar1 + 0x10);
  iVar5 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar4 = FUN_00a72910(lVar1,iVar5);
      if (*(char *)(lVar4 + 8) == '\x03') {
        bVar2 = true;
        local_30 = FUN_00a72910(lVar1,iVar5);
        goto code_r0x00ad4e4a;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  bVar2 = false;
code_r0x00ad4e4a:
  if (bVar2) {
    FUN_0043e1a0(&local_38,*(undefined8 *)(local_30 + 0x28));
    iVar3 = FUN_00416db0(local_38,L"left");
    if ((((iVar3 == 0) || (iVar3 = FUN_00416db0(local_38,L"center"), iVar3 == 0)) ||
        (iVar3 = FUN_00416db0(local_38,L"right"), iVar3 == 0)) ||
       (iVar3 = FUN_00416db0(local_38,L"justify"), iVar3 == 0)) {
      FUN_00414ad0(param_2,local_38);
    }
    else {
      iVar3 = FUN_00416db0(local_38,L"middle");
      if (iVar3 == 0) {
        FUN_00414ad0(param_2,L"center");
      }
    }
  }
  FUN_00414480(&local_38);
  return param_2;
}

