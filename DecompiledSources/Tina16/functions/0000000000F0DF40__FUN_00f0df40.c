/* Ghidra address: 00f0df40 */
/* Ghidra symbol: FUN_00f0df40 */


void FUN_00f0df40(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_0064cf60(param_1,0x209);
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  uVar5 = 0;
  puVar6 = (undefined4 *)PTR_DAT_02003c00;
  do {
    FUN_00416780(&local_38,CONCAT62((int6)(uVar5 >> 0x10),(short)uVar5 + 0x41));
    uVar2 = FUN_005fbf20(*puVar6);
    FUN_0043fba0(&local_40,uVar2,6);
    FUN_00416cd0(local_30,4,L"Color",local_38,&LAB_00f0e080,local_40);
    (**(code **)(*plVar3 + 0x78))(plVar3,local_30[0]);
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
    puVar6 = puVar6 + 1;
  } while (uVar4 != 0xc);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x758) + 0xd8);
  (**(code **)(*plVar1 + 0x10))(plVar1,plVar3);
  FUN_00410f20(plVar3);
  FUN_00414560(&local_40,3);
  return;
}

