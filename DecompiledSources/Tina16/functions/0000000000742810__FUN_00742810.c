/* Ghidra address: 00742810 */
/* Ghidra symbol: FUN_00742810 */


void FUN_00742810(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  int local_48;
  int local_40;
  undefined1 local_38 [24];
  undefined4 local_20;
  undefined4 local_1c;
  
  plVar2 = *(longlong **)(param_1 + 0x310);
  if ((*(ushort *)(param_1 + 0x34) & 0x10) != 0) {
    if (*(char *)(param_1 + 0x319) == '\x06') {
      FUN_005fd670(plVar2[0xf],2);
      FUN_005fd640(plVar2[0xf],0xe);
      FUN_005fd4e0(plVar2[0xf],0xffd8ce);
      FUN_005fdcb0(plVar2[0x10],1);
      uVar3 = FUN_0064d0b0(param_1);
      local_48 = FUN_0064d120(param_1);
      (**(code **)(*plVar2 + 0xf8))(plVar2,0,0,uVar3);
      return;
    }
    FUN_005fd670(plVar2[0xf],0);
    FUN_005fd640(plVar2[0xf],4);
    FUN_005fd4e0(plVar2[0xf],0);
    FUN_005fdcb0(plVar2[0x10],0);
  }
  FUN_005fd6d0(plVar2[0xf],1);
  if (*(char *)(param_1 + 0x318) == '\0') {
    uVar4 = FUN_00777cd0();
    local_1c = FUN_007793c0(uVar4,0xff000010);
    uVar4 = FUN_00777cd0();
    local_20 = FUN_007793c0(uVar4,0xff000014);
  }
  else {
    uVar4 = FUN_00777cd0();
    local_1c = FUN_007793c0(uVar4,0xff000014);
    uVar4 = FUN_00777cd0();
    local_20 = FUN_007793c0(uVar4,0xff000010);
  }
  uVar3 = local_1c;
  bVar1 = *(byte *)(param_1 + 0x319);
  if (bVar1 < 4) {
    if (bVar1 == 3) {
      local_40 = *(int *)(param_1 + 0x9c) + -2;
      local_48 = *(undefined4 *)(param_1 + 0x98);
      FUN_007427b0(auStack_68,local_1c,0,local_40);
      local_40 = *(int *)(param_1 + 0x9c) + -1;
      local_48 = *(undefined4 *)(param_1 + 0x98);
      FUN_007427b0(auStack_68,local_20,0,local_40);
    }
    else if (bVar1 == 0) {
      local_48 = *(int *)(param_1 + 0x9c) + -1;
      FUN_004238d0(local_38,0,0,*(int *)(param_1 + 0x98) + -1);
      FUN_007426a0(auStack_68,local_38);
    }
    else if (bVar1 == 1) {
      local_1c = local_20;
      local_48 = *(int *)(param_1 + 0x9c) + -1;
      FUN_004238d0(local_38,1,1,*(int *)(param_1 + 0x98) + -1);
      FUN_007426a0(auStack_68,local_38);
      local_20 = uVar3;
      local_48 = *(int *)(param_1 + 0x9c) + -2;
      local_1c = uVar3;
      FUN_004238d0(local_38,0,0,*(int *)(param_1 + 0x98) + -2);
      FUN_007426a0(auStack_68,local_38);
    }
    else if (bVar1 == 2) {
      local_48 = *(undefined4 *)(param_1 + 0x98);
      local_40 = 0;
      FUN_007427b0(auStack_68,local_1c,0,0);
      local_48 = *(undefined4 *)(param_1 + 0x98);
      local_40 = 1;
      FUN_007427b0(auStack_68,local_20,0,1);
    }
  }
  else if (bVar1 == 4) {
    local_48 = 0;
    local_40 = *(undefined4 *)(param_1 + 0x9c);
    FUN_007427b0(auStack_68,local_1c,0,0);
    local_48 = 1;
    local_40 = *(undefined4 *)(param_1 + 0x9c);
    FUN_007427b0(auStack_68,local_20,1,0);
  }
  else if (bVar1 == 5) {
    local_48 = *(int *)(param_1 + 0x98) + -2;
    local_40 = *(undefined4 *)(param_1 + 0x9c);
    FUN_007427b0(auStack_68,local_1c,local_48,0);
    local_48 = *(int *)(param_1 + 0x98) + -1;
    local_40 = *(undefined4 *)(param_1 + 0x9c);
    FUN_007427b0(auStack_68,local_20,local_48,0);
  }
  return;
}

