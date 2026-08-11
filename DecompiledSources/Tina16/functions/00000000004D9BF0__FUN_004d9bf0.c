/* Ghidra address: 004d9bf0 */
/* Ghidra symbol: FUN_004d9bf0 */


undefined8 * FUN_004d9bf0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong local_38;
  longlong local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  iVar1 = (**(code **)(*DAT_02011608 + 0x28))(DAT_02011608);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      (**(code **)(*DAT_02011608 + 0x18))(DAT_02011608,local_30,iVar1);
      if (param_2 == local_30[0]) {
        bVar4 = true;
      }
      else if ((param_2 == 0) || (local_30[0] == 0)) {
        bVar4 = false;
      }
      else {
        iVar2 = FUN_0043e420(param_2,local_30[0]);
        bVar4 = iVar2 == 0;
      }
      if (bVar4) {
        lVar3 = (**(code **)(*DAT_02011608 + 0x30))(DAT_02011608,iVar1);
        *param_1 = *(undefined8 *)(lVar3 + 8);
        param_1[1] = *(undefined8 *)(lVar3 + 0x10);
        goto LAB_004d9d41;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  iVar1 = (**(code **)(*DAT_02011608 + 0x28))(DAT_02011608);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      (**(code **)(*DAT_02011608 + 0x18))(DAT_02011608,&local_38,iVar1);
      if (local_38 == 0) {
        lVar3 = (**(code **)(*DAT_02011608 + 0x30))(DAT_02011608,iVar1);
        *param_1 = *(undefined8 *)(lVar3 + 8);
        param_1[1] = *(undefined8 *)(lVar3 + 0x10);
        goto LAB_004d9d41;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_004d9d41:
  FUN_00414560(&local_38,2);
  return param_1;
}

