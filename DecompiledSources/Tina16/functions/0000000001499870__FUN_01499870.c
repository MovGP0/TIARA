/* Ghidra address: 01499870 */
/* Ghidra symbol: FUN_01499870 */


undefined8 FUN_01499870(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 local_res18 [2];
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414480(param_2);
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xbb0) + 8) + 0x28))();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xbb0) + 8);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,iVar6);
      iVar3 = FUN_004170c0(&DAT_01499a94,local_30,1);
      FUN_00416dc0(local_50,local_30,1,iVar3 + -1);
      FUN_0043ea00(&local_40,local_50[0]);
      iVar3 = FUN_00416db0(local_40,local_res18[0]);
      if (iVar3 == 0) {
        iVar3 = FUN_004170c0(&DAT_01499aa4,local_30,1);
        if (iVar3 < 1) {
          FUN_00414b50(&local_38,L"<none>");
        }
        else {
          iVar3 = FUN_004170c0(&DAT_01499aa4,local_30,1);
          iVar4 = FUN_004170c0(&DAT_01499ab4,local_30,1);
          iVar5 = FUN_004170c0(&DAT_01499aa4,local_30,1);
          FUN_00416dc0(&local_38,local_30,iVar3 + 1,(iVar4 - iVar5) + -1);
        }
        FUN_00414ad0(param_2,local_38);
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(local_50);
  FUN_00414560(&local_40,3);
  FUN_00414480(local_res18);
  return param_2;
}

