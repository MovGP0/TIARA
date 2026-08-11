/* Ghidra address: 01bb61c0 */
/* Ghidra symbol: FUN_01bb61c0 */


void FUN_01bb61c0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  longlong local_40 [2];
  
  local_70 = 0;
  local_60[0] = 0;
  local_68 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  FUN_00848870(*(undefined8 *)(param_1 + 0x6d0),0);
  lVar1 = *(longlong *)(param_1 + 0x6d0);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x28))(*(longlong **)(param_1 + 0x6e8));
  if (0 < iVar2) {
    iVar7 = *(int *)(lVar1 + 0x4e0) - *(int *)(lVar1 + 0x4c0);
    iVar2 = 0;
    if (-1 < iVar7 + -1) {
      do {
        plVar6 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x30))
                           (*(longlong **)(param_1 + 0x6e8),iVar2);
        (**(code **)(*plVar6 + 0x288))(plVar6,local_40);
        iVar3 = FUN_004170c0(&DAT_01bb64cc,local_40[0],1);
        if (iVar3 < 1) {
          FUN_00414480(local_40);
        }
        else {
          uVar4 = FUN_004170c0(&DAT_01bb64cc,local_40[0],1);
          uVar5 = 0;
          if (local_40[0] != 0) {
            uVar5 = *(undefined4 *)(local_40[0] + -4);
          }
          FUN_00416dc0(local_40,local_40[0],uVar4,uVar5);
        }
        FUN_0084e320(lVar1,&local_48,1,*(int *)(lVar1 + 0x4c0) + iVar2);
        FUN_004b5390(*(undefined8 *)(param_1 + 0x6e8),&local_50,iVar2);
        if (local_50 != 0) {
          iVar3 = FUN_004170c0(&DAT_01bb64dc,local_50,1);
          uVar5 = 0;
          if (local_50 != 0) {
            uVar5 = *(undefined4 *)(local_50 + -4);
          }
          FUN_00416dc0(&local_50,local_50,iVar3 + -1,uVar5);
        }
        FUN_0084e320(lVar1,local_60,0,*(int *)(lVar1 + 0x4c0) + iVar2);
        FUN_00416ad0(local_60,local_40[0]);
        FUN_00416ba0(&local_68,local_48,local_50);
        FUN_01bb77f0(param_1,plVar6,local_60[0],local_68);
        iVar3 = FUN_00416db0(local_48,&DAT_01bb64ec);
        if (iVar3 != 0) {
          FUN_00416ba0(plVar6 + 0x30,local_48,local_50);
        }
        FUN_0084e320(lVar1,&local_70,0,*(int *)(lVar1 + 0x4c0) + iVar2);
        FUN_00416ba0(plVar6 + 0x13,local_70,local_40[0]);
        iVar2 = iVar2 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  FUN_0064e770(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FUN_0199e310(*(longlong *)(param_1 + 0x6f0),0,1,0);
  }
  FUN_00805200(param_1);
  FUN_00414560(&local_70,3);
  FUN_00414560(&local_50,3);
  return;
}

