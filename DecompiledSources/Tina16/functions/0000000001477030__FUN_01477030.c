/* Ghidra address: 01477030 */
/* Ghidra symbol: FUN_01477030 */


byte FUN_01477030(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  byte bVar7;
  byte bVar9;
  
  local_58 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  bVar7 = 0;
  bVar6 = 0;
  bVar9 = 0;
  bVar8 = 0;
  lVar1 = *(longlong *)(param_1 + 0x208);
  iVar3 = (**(code **)(**(longlong **)(lVar1 + 8) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar2 = *(longlong **)(lVar1 + 8);
      (**(code **)(*plVar2 + 0x18))(plVar2,local_40,iVar5);
      iVar4 = FUN_004170c0(&DAT_01477198,local_40[0],1);
      FUN_00416dc0(&local_48,local_40[0],1,iVar4 + -1);
      FUN_0043e130(&local_50,local_48);
      iVar4 = FUN_00416db0(local_50,L"PARAM_CHANGE");
      bVar6 = bVar7;
      if (iVar4 == 0) {
        bVar6 = 1;
      }
      FUN_0043e130(&local_58,local_48);
      iVar4 = FUN_00416db0(local_58,L"DRAW_DIAGRAM");
      bVar8 = bVar9;
      if (iVar4 == 0) {
        bVar8 = 1;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
      bVar7 = bVar6;
      bVar9 = bVar8;
    } while (iVar3 != 0);
  }
  FUN_00414560(&local_58,4);
  return bVar6 & bVar8;
}

