/* Ghidra address: 013d2b30 */
/* Ghidra symbol: FUN_013d2b30 */


void FUN_013d2b30(longlong param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 local_58;
  undefined8 local_50;
  int local_48 [3];
  int local_3c;
  
  local_58 = 0;
  local_50 = 0;
  if (param_2 != '\0') {
    FUN_01d2dc30(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40),
                 *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48),
                 *(undefined4 *)(param_1 + 0x4c),0xffffff);
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))(*(longlong **)(param_1 + 0x18));
  iVar8 = 1;
  if (0 < iVar2) {
    do {
      iVar9 = iVar8 + -1;
      plVar5 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
                         (*(longlong **)(param_1 + 0x18),iVar9);
      FUN_01aceb90(plVar5,param_2);
      lVar6 = (**(code **)(*(longlong *)plVar5[0x1b] + 0x30))((longlong *)plVar5[0x1b],0);
      lVar6 = (**(code **)(**(longlong **)(lVar6 + 0x70) + 0x30))(*(longlong **)(lVar6 + 0x70),0);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x70);
      (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(lVar6 + 0x98));
      FUN_005fce70(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x70),1);
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                (*(longlong **)(param_1 + 0x18),&local_50,iVar9);
      iVar3 = FUN_005fdff0(*(undefined8 *)(param_1 + 0x38),local_50);
      (**(code **)(*plVar5 + 0xb8))(plVar5,local_48);
      iVar4 = FUN_004230a0(local_48);
      iVar7 = local_48[0] + iVar4 / 2;
      iVar4 = FUN_005fdfd0(*(undefined8 *)(param_1 + 0x38),&DAT_013d2d5c);
      iVar4 = local_3c - iVar4 / 2;
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                (*(longlong **)(param_1 + 0x18),&local_58,iVar9);
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x120))
                (*(longlong **)(param_1 + 0x38),iVar7 - iVar3 / 2,iVar4,local_58);
      iVar8 = iVar8 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_58,2);
  return;
}

