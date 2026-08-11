/* Ghidra address: 00ad0e00 */
/* Ghidra symbol: FUN_00ad0e00 */


void FUN_00ad0e00(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_78;
  undefined1 *local_70;
  int local_64;
  longlong local_60;
  longlong local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_70 = auStack_a8;
  local_78 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_00414480(&local_30);
  local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x28);
  uVar2 = FUN_00a74ba0(&DAT_00a6bb20,1);
  *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x28) = uVar2;
  FUN_00ad06f0(param_1);
  uVar2 = FUN_00414480(&local_30);
  FUN_00ad12a0(*(undefined8 *)(param_1 + 0x50),uVar2);
  if (*(short *)(*(longlong *)(param_1 + 0x50) + 0x20) == 0x3e) {
    local_50 = 0;
    if (local_30 != 0) {
      local_50 = *(int *)(local_30 + -4);
    }
    local_4c = local_50;
    if (((2 < local_50) && (*(short *)(local_30 + -2 + (longlong)(local_50 + -1) * 2) == 0x2d)) &&
       (*(short *)(local_30 + -2 + (longlong)local_50 * 2) == 0x2d)) {
      local_60 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30);
      local_64 = (*(int *)(*(longlong *)(local_60 + 0x28) + 8) - *(int *)(local_60 + 8)) + -3;
      *(longlong *)(*(longlong *)(local_60 + 0x28) + 8) =
           *(longlong *)(local_60 + 8) + (longlong)local_64;
      local_58 = local_60;
      FUN_00ad06f0(param_1);
      FUN_004169f0(&local_30,local_4c + -2);
    }
  }
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  while( true ) {
    uVar2 = FUN_00414480(&local_38);
    uVar3 = FUN_00414480(&local_40);
    cVar1 = FUN_00ad0c50(auStack_a8,uVar2,uVar3);
    if (cVar1 == '\0') break;
    local_88 = (longlong *)local_40;
    FUN_00416cd0(&local_78,3,local_38,&LAB_00ad1168);
    (**(code **)(*local_20 + 0x78))(local_20,local_78);
  }
  FUN_00ad0890(param_1);
  local_48 = 0;
  local_88 = &local_48;
  (**(code **)(*(longlong *)(param_1 + 0x50) + 0x88))
            (*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x90),
             *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x98),local_30,local_20);
  FUN_00410f20(local_20);
  if (local_48 != 0) {
    FUN_00611620(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x38),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x30));
    *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30) = local_48;
  }
  FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x28));
  *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x28) = local_28;
  FUN_00414480(&local_78);
  FUN_00414560(&local_40,3);
  return;
}

