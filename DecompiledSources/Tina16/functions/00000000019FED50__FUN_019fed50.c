/* Ghidra address: 019fed50 */
/* Ghidra symbol: FUN_019fed50 */


longlong * FUN_019fed50(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_004167a0(&local_38,param_3);
  FUN_0043ea00(&local_30,local_38);
  FUN_0043e130(param_2,local_30);
  FUN_00450070(&local_40,*param_2,&DAT_019ff058,&DAT_019ff06c,1);
  FUN_00414ad0(param_2,local_40);
  iVar6 = 0;
  if (*param_2 != 0) {
    iVar6 = *(int *)(*param_2 + -4);
  }
  iVar5 = 1;
  if (0 < iVar6) {
    do {
      if (*(short *)(*param_2 + -2 + (longlong)iVar5 * 2) == 0x20) {
        FUN_00416e20(param_2,iVar5,1);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = 1;
  iVar5 = 1;
  while( true ) {
    if (iVar5 == 0) {
      bVar1 = false;
    }
    else {
      iVar5 = 0;
      if (*param_2 != 0) {
        iVar5 = *(int *)(*param_2 + -4);
      }
      bVar1 = iVar6 < iVar5;
    }
    if (!bVar1) break;
    iVar5 = FUN_004170c0(&DAT_019ff084,*param_2,iVar6);
    iVar6 = iVar5 + 2;
    if (iVar5 != 0) {
      FUN_00414480(&local_20);
      iVar5 = iVar6;
      while( true ) {
        iVar2 = 0;
        if (*param_2 != 0) {
          iVar2 = *(int *)(*param_2 + -4);
        }
        if ((iVar2 < iVar5) || (*(short *)(*param_2 + -2 + (longlong)iVar5 * 2) == 0x29)) break;
        FUN_00416780(&local_48,*(undefined2 *)(*param_2 + -2 + (longlong)iVar5 * 2));
        FUN_00416ad0(&local_20,local_48);
        iVar5 = iVar5 + 1;
      }
      plVar4 = (longlong *)FUN_019febb0(param_1,*(undefined8 *)(param_1 + 0x58),local_20,param_4);
      if (plVar4 == (longlong *)0x0) {
        iVar5 = 0;
      }
      else {
        uVar3 = 0;
        if (local_20 != 0) {
          uVar3 = *(undefined4 *)(local_20 + -4);
        }
        FUN_00416e20(param_2,iVar6,uVar3);
        iVar5 = (**(code **)(*plVar4 + 0x1c8))(plVar4);
        if (iVar5 == 1) {
          FUN_00414b50(&local_28,&DAT_019ff098);
        }
        else {
          FUN_019f0400(param_1,&local_28,1,plVar4);
        }
        FUN_019f0400(param_1,&local_50,0,plVar4);
        FUN_00416cd0(&local_20,3,local_50,&LAB_019ff0a8,local_28);
        FUN_00416ea0(local_20,param_2,iVar6);
        iVar5 = iVar6;
      }
      iVar6 = 0;
      if (local_20 != 0) {
        iVar6 = *(int *)(local_20 + -4);
      }
      iVar6 = iVar5 + iVar6;
    }
  }
  FUN_00414560(&local_50,7);
  return param_2;
}

