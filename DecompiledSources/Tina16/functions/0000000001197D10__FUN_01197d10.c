/* Ghidra address: 01197d10 */
/* Ghidra symbol: FUN_01197d10 */


void FUN_01197d10(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x298))(*(longlong **)(param_1 + 0x6d0));
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4d8) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      if (iVar4 == 3) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4d8);
        (**(code **)(*plVar1 + 0x40))(plVar1,3,L"VALTOZTATAS");
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4d8);
      (**(code **)(*plVar1 + 0x18))(plVar1,local_40,iVar4);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4d8);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_40[0]);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6d0) + 600))(*(longlong **)(param_1 + 0x6d0));
  plVar1 = *(longlong **)(param_1 + 0x6d0);
  (**(code **)(*(longlong *)plVar1[0x9b] + 0x18))((longlong *)plVar1[0x9b],&local_48,1);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d0),&local_50);
  iVar2 = FUN_004170c0(local_48,local_50,1);
  (**(code **)(*plVar1 + 0x290))(plVar1,iVar2 + -1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4d8);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_58,1);
  uVar3 = 0;
  if (local_58 != 0) {
    uVar3 = *(undefined4 *)(local_58 + -4);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x288))(*(longlong **)(param_1 + 0x6d0),uVar3);
  (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x280))(*(longlong **)(param_1 + 0x6d0),local_30);
  FUN_0064e030(*(undefined8 *)(param_1 + 0x6d0),0xffff00);
  FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x6d0) + 0xb8),0xff);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4d8);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_30[0]);
  (**(code **)(**(longlong **)(param_1 + 0x6d0) + 600))(*(longlong **)(param_1 + 0x6d0));
  plVar1 = *(longlong **)(param_1 + 0x6d0);
  (**(code **)(*(longlong *)plVar1[0x9b] + 0x18))((longlong *)plVar1[0x9b],&local_60,1);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d0),&local_68);
  iVar2 = FUN_004170c0(local_60,local_68,1);
  (**(code **)(*plVar1 + 0x290))(plVar1,iVar2 + -1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4d8);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_70,1);
  uVar3 = 0;
  if (local_70 != 0) {
    uVar3 = *(undefined4 *)(local_70 + -4);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x288))(*(longlong **)(param_1 + 0x6d0),uVar3);
  FUN_00414480(&local_70);
  FUN_00414480(&local_68);
  FUN_00414560(&local_60,2);
  FUN_00414480(&local_50);
  FUN_00414560(&local_48,2);
  FUN_00414480(local_30);
  return;
}

