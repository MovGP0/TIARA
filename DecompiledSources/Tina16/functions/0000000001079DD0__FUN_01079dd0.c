/* Ghidra address: 01079dd0 */
/* Ghidra symbol: FUN_01079dd0 */


undefined8 FUN_01079dd0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_res10 [3];
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40 [2];
  
  local_68 = 0;
  local_60[0] = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar3 = (longlong *)FUN_01b21190(local_res10[0],0x5c,0);
  FUN_00414480(&local_48);
  FUN_00414480(&local_50);
  FUN_01079d40(param_1,0);
  uVar6 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x6d8) + 0x550);
  iVar1 = (**(code **)(*plVar3 + 0x28))();
  iVar7 = 0;
  if (-1 < iVar1 + -2) {
    iVar1 = iVar1 + -1;
    do {
      (**(code **)(*plVar3 + 0x18))(plVar3,local_40,iVar7);
      FUN_0043e1a0(local_60,L"{$PRJ}");
      iVar2 = FUN_00416db0(local_40[0],local_60[0]);
      if (iVar2 == 0) {
LAB_01079ee2:
        FUN_00414480(local_40);
      }
      else {
        FUN_0043e1a0(&local_68,L"{$SHARED}");
        iVar2 = FUN_00416db0(local_40[0],local_68);
        if (iVar2 == 0) goto LAB_01079ee2;
      }
      FUN_00414b50(&local_50,local_48);
      FUN_00416ad0(&local_48,local_40[0]);
      iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
      if ((iVar7 < iVar2 + -2) && (local_48 != 0)) {
        FUN_00416ad0(&local_48,&DAT_0107a094);
      }
      lVar4 = FUN_01079d40(param_1,local_48);
      if (lVar4 == 0) {
        lVar4 = FUN_01079d40(param_1,local_50);
        if (lVar4 == 0) {
          uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,L"CheckDirNode");
          lVar4 = FUN_004134c0(uVar5);
        }
        uVar5 = FUN_006dee40(uVar6,lVar4,local_40[0]);
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x80))
                  (*(longlong **)(param_1 + 0x58),local_48,uVar5);
      }
      iVar7 = iVar7 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(plVar3);
  uVar6 = FUN_01079d40(param_1,local_48);
  FUN_00414560(&local_68,2);
  FUN_00414560(&local_50,3);
  FUN_00414480(local_res10);
  return uVar6;
}

