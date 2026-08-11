/* Ghidra address: 018bd560 */
/* Ghidra symbol: FUN_018bd560 */


void FUN_018bd560(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [44];
  int local_5c;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  int local_2c;
  
  local_40[0] = 0;
  local_48 = 0;
  local_50 = FUN_01810fa0(&DAT_018103d8,1,0);
  local_2c = (**(code **)*param_1)(param_1);
  iVar1 = (**(code **)*param_2)();
  local_5c = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar3 = (**(code **)(*param_2 + 8))(param_2,local_5c);
      local_58 = FUN_018038a0(&PTR_FUN_01801848,1);
      iVar2 = (**(code **)*param_1)(param_1);
      lVar4 = FUN_018039f0(param_1[0xf],iVar2 + -1);
      FUN_00414ad0(local_58 + 0x20,*(undefined8 *)(lVar4 + 0x20));
      FUN_018140f0(local_50,uVar3,1,local_58);
      *(undefined1 *)(local_58 + 0x38) = 0;
      (*(code *)**(undefined8 **)param_1[0xf])((undefined8 *)param_1[0xf],local_58);
      local_5c = local_5c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  uVar3 = FUN_01803bf0(*(undefined8 *)(param_1[0x13] + 0x28),L"anchors");
  uVar5 = FUN_01803bf0(*(undefined8 *)(param_2[0x13] + 0x28),L"anchors");
  iVar1 = FUN_01803a10();
  local_5c = 0;
  if (-1 < iVar1 + -1) {
    do {
      local_58 = FUN_018039f0(uVar5,local_5c);
      lVar4 = FUN_01803a30(uVar3);
      FUN_00414ad0(lVar4 + 0x20,L"item");
      FUN_00414ad0(lVar4 + 0x30,*(undefined8 *)(local_58 + 0x30));
      FUN_01803cc0(lVar4,&local_48,L"page");
      iVar2 = FUN_0043fc00(local_48);
      FUN_0043f750(local_40,iVar2 + local_2c);
      FUN_01803ed0(lVar4,L"page",local_40[0]);
      local_5c = local_5c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(*(longlong *)param_2[3] + 0x40))((longlong *)param_2[3]);
  (**(code **)(*(longlong *)param_1[3] + 0x40))((longlong *)param_1[3]);
  FUN_018bd420(auStack_88);
  iVar1 = (**(code **)*param_2)(param_2);
  if (iVar1 != 0) {
    iVar1 = (**(code **)*param_2)(param_2);
    *(int *)((longlong)param_2 + 0xc) = iVar1 + -1;
    uVar3 = (**(code **)(*param_2 + 0xe0))(param_2,0);
    param_1[0x15] = uVar3;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0xffffffff;
  }
  FUN_00410f20(local_50);
  FUN_018b7df0(param_1);
  FUN_00414560(&local_48,2);
  return;
}

