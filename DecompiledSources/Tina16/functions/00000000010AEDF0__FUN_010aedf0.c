/* Ghidra address: 010aedf0 */
/* Ghidra symbol: FUN_010aedf0 */


undefined8 FUN_010aedf0(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  FUN_00414480(&local_30);
  lVar1 = *(longlong *)(param_1 + 0x40);
  iVar4 = *(int *)(lVar1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(lVar1,iVar3);
      FUN_0043f750(local_40,*(undefined4 *)(lVar2 + 8));
      FUN_00416ad0(&local_30,local_40[0]);
      if (param_3 != '\0') {
        FUN_010ae940(lVar2,&local_48);
        FUN_00416cd0(&local_30,3,local_30,&DAT_010aef48,local_48);
      }
      if (iVar3 < *(int *)(lVar1 + 0x10) + -1) {
        FUN_00416ad0(&local_30,&LAB_010aef58);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414ad0(param_2,local_30);
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_30);
  return param_2;
}

