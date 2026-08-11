/* Ghidra address: 00808a90 */
/* Ghidra symbol: FUN_00808a90 */


void FUN_00808a90(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_298 [40];
  undefined1 *local_270;
  undefined4 local_264 [6];
  undefined1 local_24c [200];
  undefined1 local_184 [92];
  undefined1 local_128 [92];
  undefined1 local_cc [96];
  undefined1 local_6c [92];
  undefined4 local_10;
  undefined1 local_9;
  
  local_270 = auStack_298;
  local_9 = 0;
  if (DAT_02012668 != 0) {
    local_9 = *(undefined1 *)(DAT_02012668 + 0x108);
  }
  *(undefined1 *)(param_1 + 0x160) = 1;
  puVar1 = auStack_298;
  if (DAT_02012668 != 0) {
    FUN_0080dd10(DAT_02012668,0);
    puVar1 = local_270;
  }
  local_270 = puVar1;
  local_10 = 0x5c;
  iVar2 = thunk_FUN_03e0f7b4(0x1f,0x5c,local_6c,0);
  if (iVar2 == 0) {
    uVar3 = thunk_FUN_041715dd(0xd);
    FUN_005fcc40(*(undefined8 *)(param_1 + 0x108),uVar3);
  }
  else {
    uVar3 = thunk_FUN_041a15ee(local_6c);
    FUN_005fcc40(*(undefined8 *)(param_1 + 0x108),uVar3);
  }
  local_264[0] = FUN_0042a720();
  local_10 = local_264[0];
  iVar2 = thunk_FUN_03e0f7b4(0x29,0,local_264,0);
  if (iVar2 == 0) {
    FUN_005fce30(*(undefined8 *)(param_1 + 0x100),8);
    uVar3 = thunk_FUN_041715dd(0xd);
    FUN_005fcc40(*(undefined8 *)(param_1 + 0x110),uVar3);
    uVar3 = thunk_FUN_041715dd(0xd);
    FUN_005fcc40(*(undefined8 *)(param_1 + 0x118),uVar3);
    uVar3 = thunk_FUN_041715dd(0xd);
    FUN_005fcc40(*(undefined8 *)(param_1 + 0x120),uVar3);
  }
  else {
    uVar3 = thunk_FUN_041a15ee(local_128);
    FUN_005fcc40(*(undefined8 *)(param_1 + 0x100),uVar3);
    uVar3 = thunk_FUN_041a15ee(local_184);
    FUN_005fcc40(*(undefined8 *)(param_1 + 0x110),uVar3);
    uVar3 = thunk_FUN_041a15ee(local_cc);
    FUN_005fcc40(*(undefined8 *)(param_1 + 0x118),uVar3);
    uVar3 = thunk_FUN_041a15ee(local_24c);
    FUN_005fcc40(*(undefined8 *)(param_1 + 0x120),uVar3);
  }
  FUN_005fc860(*(undefined8 *)(param_1 + 0x100),0xff000017);
  FUN_005fc860(*(undefined8 *)(param_1 + 0x110),0xff000007);
  FUN_005fc860(*(undefined8 *)(param_1 + 0x118),0xff000008);
  *(undefined1 *)(param_1 + 0x160) = 0;
  if (DAT_02012670 != 0) {
    FUN_0080e110(DAT_02012668,0xb05a,0,0);
  }
  if (DAT_02012668 != 0) {
    FUN_0080dd10(DAT_02012668,local_9);
  }
  return;
}

