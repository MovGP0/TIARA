/* Ghidra address: 004b3e80 */
/* Ghidra symbol: FUN_004b3e80 */


longlong * FUN_004b3e80(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong local_50;
  longlong local_48;
  longlong local_40 [2];
  
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  iVar5 = 0;
  FUN_00414b50(&local_48,param_1[3]);
  iVar4 = 0;
  iVar6 = iVar1;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,&local_50,iVar4);
      iVar3 = 0;
      if (local_50 != 0) {
        iVar3 = *(int *)(local_50 + -4);
      }
      iVar2 = 0;
      if (local_48 != 0) {
        iVar2 = *(int *)(local_48 + -4);
      }
      iVar5 = iVar5 + iVar3 + iVar2;
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if ((*(byte *)((longlong)param_1 + 0x32) & 4) == 0) {
    iVar6 = 0;
    if (local_48 != 0) {
      iVar6 = *(int *)(local_48 + -4);
    }
    iVar5 = iVar5 - iVar6;
  }
  FUN_00414740(param_2,0,iVar5);
  lVar7 = *param_2;
  iVar4 = 0;
  iVar6 = iVar1;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_40,iVar4);
      iVar5 = 0;
      if (local_40[0] != 0) {
        iVar5 = *(int *)(local_40[0] + -4);
      }
      if (iVar5 != 0) {
        FUN_00409a70(local_40[0],lVar7,(longlong)(iVar5 * 2));
        lVar7 = lVar7 + (longlong)iVar5 * 2;
      }
      if (((*(byte *)((longlong)param_1 + 0x32) & 4) != 0) || (iVar4 < iVar1 + -1)) {
        iVar5 = 0;
        if (local_48 != 0) {
          iVar5 = *(int *)(local_48 + -4);
        }
        if (iVar5 != 0) {
          FUN_00409a70(local_48,lVar7,(longlong)(iVar5 * 2));
          lVar7 = lVar7 + (longlong)iVar5 * 2;
        }
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414560(&local_50,3);
  return param_2;
}

