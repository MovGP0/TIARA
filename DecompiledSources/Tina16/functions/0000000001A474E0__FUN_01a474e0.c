/* Ghidra address: 01a474e0 */
/* Ghidra symbol: FUN_01a474e0 */


void FUN_01a474e0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if (*(longlong *)(*(longlong *)(param_1 + 0x2960) + 0x10) != 0) {
    FUN_00414b50(&local_30,*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x10));
    FUN_00450070(local_40,local_30,&PTR_DAT_01a477b8,&DAT_01a477cc,1);
    FUN_00414b50(&local_30,local_40[0]);
    FUN_00450070(&local_48,local_30,&PTR_DAT_01a477e0,&DAT_01a477cc,1);
    FUN_00414b50(&local_30,local_48);
    (**(code **)(*plVar3 + 0x60))(plVar3,local_30);
    FUN_004b3260(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x510));
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),&local_50);
    uVar4 = 0;
    if (local_50 != 0) {
      uVar4 = *(undefined4 *)(local_50 + -4);
    }
    (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x290))(*(longlong **)(param_1 + 0x6b8),uVar4);
    FUN_006e7230(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x4f0),1);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x510);
    (**(code **)(*plVar1 + 0x78))(plVar1,L"Assistant:");
    FUN_006e7230(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x4f0),0);
    (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x288))(*(longlong **)(param_1 + 0x6b8),0);
    iVar2 = (**(code **)(*plVar3 + 0x28))();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_58,iVar5);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x510);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_58);
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x510);
    (**(code **)(*plVar1 + 0x78))(plVar1,0);
    FUN_004b3390(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x510));
  }
  FUN_00410f20(plVar3);
  FUN_00414480(&local_58);
  FUN_00414480(&local_50);
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_30);
  return;
}

