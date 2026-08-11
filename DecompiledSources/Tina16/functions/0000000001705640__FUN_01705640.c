/* Ghidra address: 01705640 */
/* Ghidra symbol: FUN_01705640 */


undefined8 FUN_01705640(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res18 [2];
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414480(local_30);
  FUN_00414480(param_2);
  iVar3 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar3);
      iVar1 = FUN_00416db0(*(undefined8 *)(lVar2 + 8),local_res18[0]);
      if (iVar1 == 0) {
        FUN_00414b50(local_30,*(undefined8 *)(lVar2 + 0x10));
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      iVar1 = FUN_00416db0(*(undefined8 *)(lVar2 + 8),local_30[0]);
      if (iVar1 == 0) {
        FUN_00414ad0(param_2,*(undefined8 *)(lVar2 + 0x10));
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_res18);
  return param_2;
}

