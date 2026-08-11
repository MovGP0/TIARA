/* Ghidra address: 01507c10 */
/* Ghidra symbol: FUN_01507c10 */


void FUN_01507c10(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 local_548;
  undefined8 local_540;
  undefined1 local_538 [256];
  undefined1 local_438 [268];
  undefined1 local_32c [512];
  undefined1 local_12c [256];
  undefined1 local_2c [4];
  
  local_548 = 0;
  local_540 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0xc18);
  iVar6 = *(int *)(lVar1 + 0x3c);
  iVar7 = *(int *)(lVar1 + 0x40);
  if (iVar6 <= iVar7) {
    iVar7 = (iVar7 - iVar6) + 1;
    do {
      plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0xc18) + 0x50);
      uVar4 = (**(code **)(*plVar2 + 0x30))(plVar2,iVar6);
      lVar5 = FUN_004113f0(uVar4,&PTR_FUN_01106728);
      *(undefined8 *)(lVar5 + 0x140) = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0xc18);
      *(undefined1 *)(lVar5 + 0x11) =
           *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 2000) + 0x328);
      FUN_00416910(local_538,*(undefined8 *)(lVar5 + 8),0xff);
      FUN_010c0760(local_438,local_538,local_32c,local_2c);
      FUN_004169a0(&local_540,local_438);
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0xc18);
      iVar3 = FUN_00416db0(local_540,*(undefined8 *)(lVar1 + 8));
      if ((iVar3 == 0) && (*(int *)(lVar1 + 0x3c) != *(int *)(lVar1 + 0x40))) {
        FUN_0040e840(local_12c,iVar6 - *(int *)(lVar1 + 0x3c));
        FUN_004169a0(&local_548,local_12c);
        FUN_00416ba0(lVar5 + 8,
                     *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0xc18) + 8),
                     local_548);
        if (*(longlong *)(lVar5 + 0x40) != 0) {
          FUN_01cc09f0(*(longlong *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 8));
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00414560(&local_548,2);
  return;
}

