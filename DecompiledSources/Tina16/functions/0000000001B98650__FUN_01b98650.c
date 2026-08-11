/* Ghidra address: 01b98650 */
/* Ghidra symbol: FUN_01b98650 */


void FUN_01b98650(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
  if (lVar4 != 0) {
    uVar5 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
    cVar1 = FUN_01b96a50(param_1,uVar5);
    if (cVar1 == '\0') goto LAB_01b98788;
  }
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x810),0);
  uVar5 = FUN_006df4b0(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550));
  FUN_01b950d0(local_20,DAT_02110dd0);
  uVar6 = FUN_01b95080(DAT_02110dd0,DAT_02110dd0,1);
  lVar4 = FUN_006def30(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550),uVar5,local_20[0],
                       uVar6);
  FUN_006dcbd0(lVar4,0xffffffff);
  FUN_006dcca0(lVar4,*(undefined4 *)(lVar4 + 0x28));
  uVar2 = FUN_006dd6f0(lVar4);
  FUN_01b97960(param_1,uVar2);
  iVar3 = FUN_006d5120(*(undefined8 *)(param_1 + 0x7e0));
  if (-1 < iVar3) {
    plVar7 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7e0));
    uVar2 = FUN_006d5120(*(undefined8 *)(param_1 + 0x7e0));
    (**(code **)(*plVar7 + 0x48))(plVar7,uVar2,1);
  }
LAB_01b98788:
  FUN_00414480(local_20);
  return;
}

