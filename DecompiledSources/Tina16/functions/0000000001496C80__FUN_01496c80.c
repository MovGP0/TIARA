/* Ghidra address: 01496c80 */
/* Ghidra symbol: FUN_01496c80 */


void FUN_01496c80(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xbb0) + 8) + 0x28))();
  iVar7 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xbb0) + 8);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,iVar7);
      iVar3 = FUN_004170c0(&DAT_01496e88,local_30,1);
      FUN_00416dc0(&local_38,local_30,1,iVar3 + -1);
      iVar3 = FUN_004170c0(&LAB_01496e98,local_30,1);
      if (iVar3 < 1) {
        iVar3 = FUN_004170c0(&DAT_01496e88,local_30,1);
        uVar6 = 0;
        if (local_30 != 0) {
          uVar6 = *(undefined4 *)(local_30 + -4);
        }
        FUN_00416dc0(&local_40,local_30,iVar3 + 1,uVar6);
      }
      else {
        iVar3 = FUN_004170c0(&DAT_01496e88,local_30,1);
        iVar4 = FUN_004170c0(&LAB_01496e98,local_30,1);
        iVar5 = FUN_004170c0(&DAT_01496e88,local_30,1);
        FUN_00416dc0(&local_40,local_30,iVar3 + 1,(iVar4 - iVar5) + -1);
      }
      (**(code **)(*param_2 + 0x78))(param_2,local_38);
      (**(code **)(*param_3 + 0x78))(param_3,local_40);
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_58,6);
  return;
}

