/* Ghidra address: 01b77350 */
/* Ghidra symbol: FUN_01b77350 */


void FUN_01b77350(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int local_54;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_00416ba0(local_50,*(undefined8 *)(param_1 + 0x6f8),L"\\hotkeys.ini");
  plVar2 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_50[0]);
  FUN_01b79440(param_1);
  iVar1 = FUN_006d7630();
  local_54 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_006d7610(*(undefined8 *)(param_1 + 0x6b0),local_54);
      FUN_00416cd0(&local_30,3,*(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x10),&DAT_01b77590,
                   *(undefined8 *)(lVar3 + 0x10));
      lVar3 = FUN_01b79750(param_1,lVar3,L"StringGrid");
      iVar6 = *(int *)(lVar3 + 0x4e0) - *(int *)(lVar3 + 0x4c0);
      iVar5 = 0;
      if (-1 < iVar6 + -1) {
        do {
          FUN_0084e320(lVar3,&local_38,1,*(int *)(lVar3 + 0x4c0) + iVar5);
          puVar4 = (undefined8 *)FUN_0084e390(lVar3,1,*(int *)(lVar3 + 0x4c0) + iVar5);
          FUN_00414b50(&local_40,*puVar4);
          (**(code **)(*plVar2 + 0x18))(plVar2,local_30,local_40,local_38);
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_54 = local_54 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(plVar2);
  FUN_01b770b0(*(undefined8 *)(param_1 + 0x6d8),*(undefined8 *)(param_1 + 0x6f8));
  FUN_00414480(local_50);
  FUN_00414560(&local_40,3);
  return;
}

