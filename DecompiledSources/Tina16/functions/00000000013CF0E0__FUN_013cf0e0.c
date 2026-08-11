/* Ghidra address: 013cf0e0 */
/* Ghidra symbol: FUN_013cf0e0 */


void FUN_013cf0e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  char local_21;
  
  local_40 = auStack_78;
  local_50 = 0;
  local_48 = 0;
  local_30 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x90))(*(longlong **)(param_1 + 0x8c0));
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x720),&local_48);
  cVar3 = FUN_00f60aa0(local_48);
  if (cVar3 == '\0') {
    FUN_013cd4e0(L"Wrong function name!");
  }
  else {
    local_21 = FUN_013ce890(param_1);
    if (local_21 == '\0') {
      if (*(longlong *)PTR_DAT_02005188 != 0) {
        FUN_01cc7700(*(undefined8 *)(*(longlong *)PTR_DAT_02005188 + 8));
      }
      if (*(longlong *)PTR_DAT_02004fb8 != 0) {
        FUN_01cc7700(*(undefined8 *)(*(longlong *)PTR_DAT_02004fb8 + 8));
      }
      uVar6 = FUN_004b6930(&PTR_FUN_00478280,1);
      *(undefined8 *)(param_1 + 0x8b8) = uVar6;
      FUN_00f1e090(param_1 + 0x8b8);
      FUN_013ca610(param_1,*(undefined8 *)(param_1 + 0x8b8));
      FUN_013cab80(param_1,0);
      FUN_00410f20(*(undefined8 *)(param_1 + 0x8b8));
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))
                        (*(longlong **)(param_1 + 0x750));
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x720),&local_50);
      FUN_013c1650(&local_30,uVar4,local_50);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0);
      iVar5 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_30);
      if (iVar5 != -1) {
        lVar2 = *(longlong *)(param_1 + 0x778);
        plVar1 = *(longlong **)(lVar2 + 0x4a0);
        uVar4 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_30);
        FUN_0068bd10(lVar2,uVar4,1);
        FUN_013ca310(param_1,param_2);
      }
      FUN_013cf3e0(param_1);
      *(int *)(param_1 + 0x908) = *(int *)(param_1 + 0x908) + 1;
      FUN_013cb350(param_1);
    }
  }
  FUN_00414560(&local_50,2);
  FUN_00414480(&local_30);
  return;
}

