/* Ghidra address: 014c50b0 */
/* Ghidra symbol: FUN_014c50b0 */


void FUN_014c50b0(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_res20;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50 [4];
  
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60[0] = 0;
  local_50[0] = 0;
  local_res20 = param_4;
  FUN_00414630(param_4);
  FUN_00414630(param_5);
  FUN_00416880(local_60,local_res20);
  plVar4 = (longlong *)FUN_01b21480(local_60[0]);
  iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar5 = FUN_00409570((longlong)(iVar2 << 3));
  *param_1 = lVar5;
  *param_3 = iVar2;
  iVar2 = (**(code **)(*plVar4 + 0x28))();
  iVar7 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_68,iVar7);
      FUN_00415dd0(local_50,local_68,0);
      iVar3 = 0;
      if (local_50[0] != 0) {
        iVar3 = *(int *)(local_50[0] + -4);
      }
      uVar6 = FUN_00409570((longlong)(iVar3 + 1));
      FUN_004425e0(uVar6,local_50[0]);
      *(undefined8 *)(*param_1 + (longlong)iVar7 * 8) = uVar6;
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(plVar4);
  FUN_00416880(&local_70,param_5);
  plVar4 = (longlong *)FUN_01b21480(local_70);
  iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar5 = FUN_00409570((longlong)iVar2);
  *param_2 = lVar5;
  iVar2 = (**(code **)(*plVar4 + 0x28))();
  iVar7 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_78,iVar7);
      FUN_00415dd0(local_50,local_78,0);
      FUN_00416880(&local_80,local_50[0]);
      uVar1 = FUN_0043fc00(local_80);
      *(undefined1 *)(lVar5 + iVar7) = uVar1;
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(plVar4);
  FUN_00414560(&local_80,5);
  FUN_004144d0(local_50);
  FUN_00414590(&local_res20,2);
  return;
}

