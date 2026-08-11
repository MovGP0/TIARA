/* Ghidra address: 01625a50 */
/* Ghidra symbol: FUN_01625a50 */


void FUN_01625a50(int param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  int *piVar6;
  char local_59;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40 [2];
  
  local_58 = 0;
  local_50[0] = 0;
  local_40[0] = 0;
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar1 = 2;
  piVar6 = &DAT_01f79de8;
  do {
    if (*piVar6 == param_1) {
      local_59 = '\x01';
      FUN_00414b50(local_40,*(undefined8 *)(piVar6 + 2));
      break;
    }
    piVar6 = piVar6 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (local_59 != '\0') {
    FUN_004b4b10(plVar5,local_40[0]);
    iVar1 = (**(code **)(*plVar5 + 0x28))(plVar5);
    iVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    if (iVar1 != iVar2) {
      FUN_01613110(L"GetPermIdxs");
    }
    iVar1 = (**(code **)(*param_2 + 0x28))();
    iVar2 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*plVar5 + 0x18))(plVar5,local_50,iVar2);
        uVar3 = FUN_0043fc00(local_50[0]);
        (**(code **)(*param_2 + 0x18))(param_2,&local_58,uVar3);
        (**(code **)(*plVar4 + 0x78))(plVar4,local_58);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    (**(code **)(*param_2 + 0x10))(param_2,plVar4);
  }
  FUN_00410f20(plVar5);
  FUN_00410f20(plVar4);
  FUN_00414560(&local_58,2);
  FUN_00414480(local_40);
  return;
}

