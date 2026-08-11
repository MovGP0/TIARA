/* Ghidra address: 01463140 */
/* Ghidra symbol: FUN_01463140 */


void FUN_01463140(longlong param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong *local_30 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = (longlong *)0x0;
  uVar6 = 0;
  FUN_00410f20(DAT_0210ea30);
  DAT_0210ea30 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_00410f20(DAT_0210ea48);
  DAT_0210ea48 = (longlong *)FUN_00605cc0(&PTR_FUN_005f86c8,1);
  FUN_00410f20(DAT_0210ea40);
  DAT_0210ea40 = (longlong *)FUN_00a09e20(&PTR_FUN_00a09250,1);
  plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x860) + 0xa0);
  (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined8 *)(*(longlong *)(param_1 + 0x750) + 0x4d8));
  FUN_01d1c9b0(*(undefined8 *)(param_1 + 0x860));
  uVar5 = FUN_00741ea0(*(undefined8 *)(param_1 + 0x760));
  iVar1 = FUN_01d1b660(*(undefined8 *)(param_1 + 0x860),uVar5);
  iVar2 = FUN_01d12340(*(undefined8 *)(param_1 + 0x860));
  uVar3 = FUN_01d120a0(iVar1 + iVar2 * 2,0);
  (**(code **)(*DAT_0210ea30 + 0x88))(DAT_0210ea30,uVar3);
  uVar5 = FUN_00741ea0(*(undefined8 *)(param_1 + 0x760));
  iVar1 = FUN_01d1bfb0(*(undefined8 *)(param_1 + 0x860),uVar5);
  iVar2 = FUN_01d12340(*(undefined8 *)(param_1 + 0x860));
  uVar3 = FUN_01d120a0(iVar1 + iVar2 * 3,0);
  (**(code **)(*DAT_0210ea30 + 0x70))(DAT_0210ea30,uVar3);
  uVar5 = FUN_00603cf0(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x318),DAT_0210ea30);
  if (param_2 < 8) {
    bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << (param_2 & 0x1f) & 9U) != 0;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    uVar3 = (**(code **)(*DAT_0210ea30 + 0x60))(DAT_0210ea30);
    (**(code **)(*DAT_0210ea48 + 0x88))(DAT_0210ea48,uVar3);
    uVar3 = (**(code **)(*DAT_0210ea30 + 0x48))(DAT_0210ea30);
    (**(code **)(*DAT_0210ea48 + 0x70))(DAT_0210ea48,uVar3);
    local_50 = FUN_006056e0(&PTR_FUN_005f7f40,1,DAT_0210ea48,0);
    uVar6 = FUN_005ffa40();
  }
  if (param_2 == 5) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x860) + 0x78) = 1;
    FUN_00bac3d0(local_30);
    (**(code **)(*local_30[0] + 0x148))(local_30[0],local_40,&DAT_014635c0);
    FUN_0041b840(*(longlong *)(param_1 + 0x860) + 0xa8,local_40[0]);
    (**(code **)(*local_30[0] + 0x98))
              (local_30[0],&local_48,*(undefined8 *)(*(longlong *)(param_1 + 0x860) + 0xa8));
  }
  uVar5 = FUN_00741ea0(*(undefined8 *)(param_1 + 0x760));
  uVar3 = FUN_01d12340(*(undefined8 *)(param_1 + 0x860));
  uVar4 = FUN_01d12340(*(undefined8 *)(param_1 + 0x860));
  FUN_01d1c9d0(*(undefined8 *)(param_1 + 0x860),uVar5,uVar6,uVar3,uVar4);
  if (param_2 == 2) {
    uVar5 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x318));
    FUN_01462b90(param_1,uVar5);
  }
  else if (param_2 == 4) {
    uVar5 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x318));
    (**(code **)(*DAT_0210ea40 + 0x10))(DAT_0210ea40,uVar5);
    FUN_01462e60(param_1,DAT_0210ea40);
  }
  else if (param_2 < 8 && (1 << (param_2 & 0x1f) & 9U) != 0) {
    FUN_00410f20(local_50);
    if (param_2 == 3) {
      FUN_01462cf0(param_1,DAT_0210ea48);
    }
    else {
      plVar7 = (longlong *)FUN_006a6030();
      (**(code **)(*plVar7 + 0x10))(plVar7,DAT_0210ea48);
    }
  }
  else if (param_2 == 5) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x860) + 0x78) = 0;
    FUN_01462fc0(param_1,local_30[0]);
  }
  FUN_0041b800(&local_48);
  FUN_0041b800(local_40);
  FUN_0041b800(local_30);
  return;
}

