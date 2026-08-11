/* Ghidra address: 018815a0 */
/* Ghidra symbol: FUN_018815a0 */


int FUN_018815a0(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 local_res20;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_004169a0(&local_28,param_2 + 1);
  FUN_0043e1a0(&local_20,local_28);
  iVar2 = FUN_004170c0(L"tfrx",local_20,1);
  if (iVar2 == 1) {
    FUN_004169a0(&local_38,param_2 + 1);
    FUN_0043e1a0(&local_30,local_38);
    iVar2 = FUN_004170c0(L"event",local_30,1);
    if (iVar2 == *(byte *)(param_2 + 1) - 4) {
      iVar2 = *(int *)(param_1 + 0x28);
      goto LAB_01881724;
    }
  }
  local_3c = -1;
  iVar3 = FUN_004b2060(param_1);
  iVar3 = iVar3 + -1;
  iVar2 = local_3c;
  if (-1 < iVar3) {
    do {
      lVar6 = FUN_01881590(param_1,iVar3);
      if ((((*(longlong *)(lVar6 + 0x20) != 0) || (*(longlong *)(lVar6 + 0x28) != 0)) ||
          (iVar4 = iVar3, *(longlong *)(lVar6 + 0x18) != param_2)) &&
         ((((iVar2 = iVar3, *(longlong *)(lVar6 + 0x20) == 0 &&
            (*(longlong *)(lVar6 + 0x18) == param_2)) &&
           (iVar4 = FUN_0043e420(*(undefined8 *)(lVar6 + 0x28),local_res20), iVar4 == 0)) ||
          ((cVar1 = FUN_00411580(*param_3,*(undefined8 *)(lVar6 + 0x20)), iVar4 = local_3c,
           cVar1 != '\0' &&
           (iVar5 = FUN_0043e420(*(undefined8 *)(lVar6 + 0x28),local_res20), iVar5 == 0)))))) break;
      local_3c = iVar4;
      iVar3 = iVar3 + -1;
      iVar2 = local_3c;
    } while (iVar3 != -1);
  }
LAB_01881724:
  local_3c = iVar2;
  FUN_00414560(&local_38,4);
  FUN_00414480(&local_res20);
  return local_3c;
}

