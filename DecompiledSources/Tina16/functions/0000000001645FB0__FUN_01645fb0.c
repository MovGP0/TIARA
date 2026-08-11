/* Ghidra address: 01645fb0 */
/* Ghidra symbol: FUN_01645fb0 */


longlong FUN_01645fb0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  *param_3 = 0;
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(param_1,iVar2);
      *param_3 = *(undefined8 *)(lVar1 + 0x78);
      lVar1 = FUN_01645ed0(lVar1,param_2);
      if (lVar1 != 0) goto LAB_0164606b;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004167d0(&local_28,param_2);
  FUN_00416ba0(&local_20,L"Process not found: ",local_28);
  FUN_01613110(local_20);
  lVar1 = local_30;
LAB_0164606b:
  local_30 = lVar1;
  FUN_00414560(&local_28,2);
  return local_30;
}

