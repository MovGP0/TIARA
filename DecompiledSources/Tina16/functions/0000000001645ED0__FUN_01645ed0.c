/* Ghidra address: 01645ed0 */
/* Ghidra symbol: FUN_01645ed0 */


longlong FUN_01645ed0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1;
  lVar2 = local_38;
  if (-1 < iVar3) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar3);
      FUN_0043e1a0(&local_20,*(undefined8 *)(lVar2 + 0x638));
      FUN_004167d0(&local_30,param_2);
      FUN_0043e1a0(&local_28,local_30);
      iVar1 = FUN_004170c0(local_20,local_28,1);
      if (0 < iVar1) break;
      iVar3 = iVar3 + -1;
      lVar2 = local_38;
    } while (iVar3 != -1);
  }
  local_38 = lVar2;
  FUN_00414560(&local_30,3);
  return local_38;
}

