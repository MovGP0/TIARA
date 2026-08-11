/* Ghidra address: 015de400 */
/* Ghidra symbol: FUN_015de400 */


void FUN_015de400(ulonglong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  ulonglong local_60;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 *local_40;
  char local_29;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_88;
  puVar1 = auStack_88;
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    uVar3 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x11,param_1);
    FUN_004134c0(uVar3);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  cVar2 = FUN_015bf1b0(*(undefined8 *)(param_1 + 0xb8));
  if (cVar2 == '\0') {
    local_50 = *(undefined8 *)(param_1 + 0xb8);
    local_48 = 0x11;
    local_68 = local_68 & 0xffffffff00000000;
    local_60 = param_1;
    uVar3 = FUN_015b5d20(&PTR_FUN_015b5818,1,0x12,&local_50);
    FUN_004134c0(uVar3);
  }
  if (*(char *)(param_1 + 0x103) != '\0') {
    uVar3 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x31,param_1);
    FUN_004134c0(uVar3);
  }
  cVar2 = FUN_015c9e90(param_1);
  if (cVar2 != '\0') {
    FUN_015d2020(param_1);
  }
  local_18 = *(undefined8 *)(param_1 + 0x250);
  local_20 = (undefined8 *)0x0;
  local_28 = 0;
  local_20 = (undefined8 *)FUN_004b9860(&PTR_FUN_0047c498,1,*(undefined8 *)(param_1 + 0xb8),0x40);
  local_28 = FUN_004b9860(&PTR_FUN_0047c498,1,param_2,0xff00);
  if (*(char *)(param_1 + 0x84) == '\0') {
    local_18 = FUN_004b9860(&PTR_FUN_0047c498,1,*(undefined8 *)(param_1 + 0x88),0x40);
    local_68 = param_1;
    local_10 = FUN_015c3590(&DAT_015ba810,1,local_18,0);
    FUN_015c6ba0(local_10);
    local_29 = FUN_015c9c00(local_10);
    FUN_00410f20(local_10);
    FUN_004b6dc0(local_18,0);
  }
  else {
    local_18 = *(undefined8 *)(param_1 + 0x250);
    local_29 = FUN_015c9c00(*(undefined8 *)(param_1 + 0x238));
  }
  if (local_29 != '\0') {
    uVar3 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x32,param_1);
    FUN_004134c0(uVar3);
  }
  uVar3 = (**(code **)*local_20)(local_20);
  FUN_004b8ba0(local_28,local_20,uVar3);
  *(undefined1 *)(param_1 + 0x101) = 1;
  cVar2 = FUN_015de060(param_1,local_28,local_18,*(undefined8 *)(param_1 + 0x88));
  if (cVar2 == '\0') {
    uVar3 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x38,param_1);
    FUN_004134c0(uVar3);
  }
  local_68 = param_1;
  local_10 = FUN_015c3590(&DAT_015ba810,1,local_28,0);
  FUN_015c6ba0(local_10);
  FUN_015c8e90(local_10,0,0);
  FUN_00410f20(local_10);
  if (*(char *)(param_1 + 0x84) == '\0') {
    FUN_00410f20(local_18);
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  return;
}

