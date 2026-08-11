/* Ghidra address: 01499ae0 */
/* Ghidra symbol: FUN_01499ae0 */


undefined8 FUN_01499ae0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_res18 [2];
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_50[0] = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414480(param_2);
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xbb0) + 8) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xbb0) + 8);
      (**(code **)(*plVar1 + 0x18))(plVar1,local_30,iVar5);
      iVar3 = FUN_004170c0(&DAT_01499cd4,local_30[0],1);
      FUN_00416dc0(local_50,local_30[0],1,iVar3 + -1);
      FUN_0043ea00(&local_40,local_50[0]);
      iVar3 = FUN_00416db0(local_40,local_res18[0]);
      if (iVar3 == 0) {
        iVar3 = FUN_004170c0(&DAT_01499ce4,local_30[0],1);
        if (iVar3 < 1) {
          FUN_00414b50(&local_38,L"<none>");
        }
        else {
          iVar3 = FUN_004170c0(&DAT_01499cf4,local_30[0],1);
          uVar4 = 0;
          if (local_30[0] != 0) {
            uVar4 = *(undefined4 *)(local_30[0] + -4);
          }
          FUN_00416dc0(&local_38,local_30[0],iVar3 + 1,uVar4);
        }
        FUN_00414ad0(param_2,local_38);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(local_50);
  FUN_00414560(&local_40,3);
  FUN_00414480(local_res18);
  return param_2;
}

