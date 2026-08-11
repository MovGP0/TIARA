/* Ghidra address: 01c466d0 */
/* Ghidra symbol: FUN_01c466d0 */


void FUN_01c466d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined7 uVar7;
  bool bVar8;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_28 = 0;
  local_30 = 0;
  local_20 = 0;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0));
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x298))(*(longlong **)(param_1 + 0x6c0));
  if (iVar3 < iVar4 + -1) {
    uVar5 = (undefined4)CONCAT71((uint7)(uint3)((uint)(iVar4 + -1) >> 8),1);
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x6c0);
    iVar3 = (**(code **)(*plVar1 + 0x298))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_20,iVar3 + -1);
    lVar2 = local_20;
    uVar6 = FUN_00b89270();
    FUN_0041ddd0(&local_30,&PTR_PTR_01c44290);
    FUN_00b8e650(uVar6,&local_28,L"d.SelectTinaFolder_sBrowseTina",local_30);
    if (lVar2 == local_28) {
      uVar7 = (undefined7)((ulonglong)local_28 >> 8);
      bVar8 = true;
    }
    else if ((lVar2 == 0) || (local_28 == 0)) {
      bVar8 = false;
      uVar7 = 0;
    }
    else {
      uVar6 = FUN_0043e420(lVar2,local_28);
      bVar8 = (int)uVar6 == 0;
      uVar7 = (undefined7)((ulonglong)uVar6 >> 8);
    }
    uVar5 = (undefined4)CONCAT71(uVar7,!bVar8);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x128))(*(longlong **)(param_1 + 0x6c8),uVar5);
  FUN_00414560(&local_30,3);
  return;
}

