/* Ghidra address: 004d9aa0 */
/* Ghidra symbol: FUN_004d9aa0 */


void FUN_004d9aa0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  local_40 = 0;
  iVar1 = (**(code **)(*DAT_02011608 + 0x28))(DAT_02011608);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      lVar3 = (**(code **)(*DAT_02011608 + 0x30))(DAT_02011608,iVar1);
      local_38 = *(longlong *)(lVar3 + 8);
      local_30 = *(longlong *)(lVar3 + 0x10);
      (**(code **)(*DAT_02011608 + 0x18))(DAT_02011608,&local_40,iVar1);
      if (local_40 == param_1) {
        bVar5 = true;
      }
      else if ((local_40 == 0) || (param_1 == 0)) {
        bVar5 = false;
      }
      else {
        iVar2 = FUN_0043e420(local_40,param_1);
        bVar5 = iVar2 == 0;
      }
      if (((bVar5) && (local_38 == *param_2)) && (local_30 == param_2[1])) {
        uVar4 = (**(code **)(*DAT_02011608 + 0x30))(DAT_02011608,iVar1);
        FUN_00410f20(uVar4);
        (**(code **)(*DAT_02011608 + 0x98))(DAT_02011608,iVar1);
        break;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  FUN_00414480(&local_40);
  return;
}

