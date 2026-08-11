/* Ghidra address: 015e0e70 */
/* Ghidra symbol: FUN_015e0e70 */


void FUN_015e0e70(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_548 [32];
  undefined8 local_528;
  undefined8 local_520;
  undefined4 local_518;
  undefined8 local_510;
  int local_504;
  undefined8 local_500 [4];
  undefined2 local_4dc;
  undefined8 local_470 [5];
  undefined8 local_442;
  undefined8 local_3e0 [4];
  undefined4 local_3ba;
  undefined8 local_350 [5];
  undefined8 local_322;
  undefined8 local_2c0 [5];
  undefined8 local_292;
  undefined8 local_230 [5];
  undefined8 local_202;
  undefined8 local_1a0 [18];
  undefined8 local_110 [4];
  uint local_ea;
  undefined1 *local_70;
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined1 local_41;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_21;
  undefined8 local_20;
  
  puVar5 = local_470;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_500;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_350;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_3e0;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_2c0;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_230;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_1a0;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_110;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_50 = 0;
  local_20 = 0;
  local_38 = 0;
  local_70 = auStack_548;
  if (*(char *)(param_1 + 0x84) != '\0') {
    local_70 = auStack_548;
    uVar2 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x25,param_1);
    FUN_004134c0(uVar2);
  }
  FUN_00414b50(&local_50,param_2);
  if (param_2 == 0) {
    FUN_015d55a0(param_1,&local_50);
    FUN_00414b50(&local_20,*(undefined8 *)(param_1 + 0x88));
    local_30 = FUN_004b9860(&PTR_FUN_0047c498,1,local_20,0x12);
    FUN_00410f20(local_30);
    uVar2 = FUN_00416740(local_50);
    FUN_015bf470(uVar2);
    local_30 = FUN_004b9860(&PTR_FUN_0047c498,1,local_50,0xff00);
    FUN_00410f20(local_30);
    uVar2 = FUN_00416740(local_50);
    FUN_015bf470(uVar2);
  }
  else {
    FUN_00414b50(&local_20,param_2);
    uVar2 = FUN_00416740(local_20);
    FUN_015bf470(uVar2);
    local_30 = FUN_004b9860(&PTR_FUN_0047c498,1,local_20,0xff00);
    FUN_00410f20(local_30);
    uVar2 = FUN_00416740(local_20);
    FUN_015bf470(uVar2);
  }
  local_40 = (longlong *)FUN_015dc6d0(&PTR_FUN_015badb0,1,0);
  local_41 = *(undefined1 *)(param_1 + 0x110);
  local_21 = *(undefined1 *)(param_1 + 0x111);
  *(undefined1 *)(param_1 + 0x111) = 1;
  FUN_015dca70(param_1,0);
  *(undefined1 *)(param_1 + 0x110) = 1;
  FUN_00414ad0(local_40 + 0x11,local_50);
  *(undefined1 *)((longlong)local_40 + 0x85) = *(undefined1 *)(param_1 + 0x85);
  FUN_015dca70(local_40,0xff00);
  FUN_015d55a0(param_1,&local_38);
  local_30 = FUN_004b9860(&PTR_FUN_0047c498,1,local_38,0xff00);
  iVar1 = FUN_015c2df0();
  local_504 = iVar1 + -1;
  local_54 = 0;
  if (-1 < local_504) {
    do {
      local_504 = iVar1;
      FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_110,local_54);
      if ((local_ea & 0x10) == 0) {
        FUN_004b6e40(local_30,0);
        FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_230,local_54);
        FUN_015dda60(param_1,local_202,local_30);
        (**(code **)(*local_40 + 0x88))(local_40,*(undefined8 *)(param_1 + 0x248));
        *(undefined1 *)((longlong)local_40 + 0x243) = *(undefined1 *)(param_1 + 0x243);
        *(undefined1 *)((longlong)local_40 + 0x242) = *(undefined1 *)(param_1 + 0x242);
        *(undefined1 *)((longlong)local_40 + 0x244) = *(undefined1 *)(param_1 + 0x244);
        *(undefined2 *)(local_40 + 0x48) = *(undefined2 *)(param_1 + 0x240);
        FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_2c0,local_54);
        local_528 = 0;
        local_520 = 0;
        local_518 = 0x20;
        local_510 = 0;
        FUN_015dd860(local_40,local_292,local_30,1);
        FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_350,local_54);
        FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_3e0,local_54);
        FUN_015df520(local_40,local_322,local_3ba);
        FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_470,local_54);
        FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_500,local_54);
        FUN_015df6e0(local_40,local_442,local_4dc);
      }
      else {
        local_58 = FUN_015c2df0(*(undefined8 *)(local_40[0x47] + 0x28));
        FUN_015c2ad0(*(undefined8 *)(local_40[0x47] + 0x28),local_58 + 1);
        FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_1a0,local_54);
        FUN_015c24e0(*(undefined8 *)(local_40[0x47] + 0x28),local_58,local_1a0);
      }
      local_54 = local_54 + 1;
      local_504 = local_504 + -1;
      iVar1 = local_504;
    } while (local_504 != 0);
  }
  *(undefined1 *)(param_1 + 0x111) = local_21;
  FUN_00410f20(local_30);
  uVar2 = FUN_00416740(local_38);
  FUN_015bf470(uVar2);
  FUN_015dcd20(param_1);
  FUN_00410f20(local_40);
  *(undefined1 *)(param_1 + 0x110) = local_41;
  if (param_2 == 0) {
    uVar2 = FUN_00416740(*(undefined8 *)(param_1 + 0x88));
    FUN_015bf470(uVar2);
    uVar2 = FUN_00416740(local_50);
    uVar3 = FUN_00416740(*(undefined8 *)(param_1 + 0x88));
    FUN_015bf580(uVar2,uVar3,0);
  }
  FUN_00417840(local_500,&DAT_015b9418,8);
  FUN_00414480(&local_50);
  FUN_00414480(&local_38);
  FUN_00414480(&local_20);
  return;
}

