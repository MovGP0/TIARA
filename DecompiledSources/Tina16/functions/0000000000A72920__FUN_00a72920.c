/* Ghidra address: 00a72920 */
/* Ghidra symbol: FUN_00a72920 */


undefined8 * FUN_00a72920(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  FUN_00414480(param_2);
  local_20 = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = FUN_00a72910(param_1,iVar4);
      if (*(char *)(lVar3 + 8) == '\x11') {
        bVar1 = true;
        local_20 = FUN_00a72910(param_1,iVar4);
        goto code_r0x00a729b5;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  bVar1 = false;
code_r0x00a729b5:
  if (bVar1) {
    FUN_0043ea00(&local_30,*(undefined8 *)(local_20 + 0x28));
    FUN_0043e1a0(&local_28,local_30);
    iVar2 = FUN_004170c0(&DAT_00a72b38,local_28,1);
    if (iVar2 < 1) {
      FUN_00414ad0(param_2,local_28);
    }
    else {
      do {
        FUN_00416dc0(&local_38,local_28,1,iVar2 + -1);
        FUN_00416cd0(param_2,3,*param_2,&LAB_00a72b48,local_38);
        FUN_00416e20(&local_28,1,iVar2);
        FUN_0043ea00(&local_40,local_28);
        FUN_00414b50(&local_28,local_40);
        iVar2 = FUN_004170c0(&DAT_00a72b38,local_28,1);
      } while (0 < iVar2);
      FUN_00416cd0(param_2,3,*param_2,&LAB_00a72b48,local_28);
      FUN_00a66700(&local_48,*param_2);
      FUN_00414ad0(param_2,local_48);
      FUN_00416e20(param_2,1,1);
    }
  }
  FUN_00414560(&local_48,5);
  return param_2;
}

