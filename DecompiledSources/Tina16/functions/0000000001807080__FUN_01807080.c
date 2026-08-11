/* Ghidra address: 01807080 */
/* Ghidra symbol: FUN_01807080 */


longlong * FUN_01807080(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  iVar5 = *(int *)(param_1[6] + 0x10);
  iVar4 = 0;
  FUN_00414be0(&local_48,&LAB_01807210);
  iVar3 = 0;
  iVar6 = iVar5;
  if (-1 < iVar5 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,&local_50,iVar3);
      iVar1 = FUN_00414cc0(local_50);
      iVar2 = FUN_00414cc0(local_48);
      iVar4 = iVar4 + iVar1 + iVar2;
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_004147a0(param_2,0,iVar4);
  lVar7 = *param_2;
  iVar6 = 0;
  if (-1 < iVar5 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_40,iVar6);
      iVar3 = FUN_00414cc0(local_40[0]);
      if (iVar3 != 0) {
        FUN_00409a70(local_40[0],lVar7,(longlong)(iVar3 * 2));
        lVar7 = lVar7 + (longlong)iVar3 * 2;
      }
      iVar3 = FUN_00414cc0(local_48);
      if (iVar3 != 0) {
        FUN_00409a70(local_48,lVar7,(longlong)(iVar3 * 2));
        lVar7 = lVar7 + (longlong)iVar3 * 2;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_004145c0(&local_50,3);
  return param_2;
}

