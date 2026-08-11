/* Ghidra address: 0068d4b0 */
/* Ghidra symbol: FUN_0068d4b0 */


void FUN_0068d4b0(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  lVar2 = *(longlong *)(param_2 + 0x10);
  uVar1 = *(ushort *)(lVar2 + 0x10);
  FUN_005ffb10(param_1[0x97],*(undefined8 *)(lVar2 + 0x20));
  FUN_005ff880(param_1[0x97],param_1[0x17]);
  FUN_005ff8c0(param_1[0x97],param_1[0x66]);
  cVar3 = FUN_00781870();
  if ((cVar3 == '\0') || ((*(byte *)(param_1 + 0x59) & 2) == 0)) {
    if ((-1 < *(int *)(lVar2 + 8)) && ((uVar1 & 1) != 0)) {
      FUN_005fdab0(*(undefined8 *)(param_1[0x97] + 0x80),0xff00000d);
      FUN_005fc860(*(undefined8 *)(param_1[0x97] + 0x70),0xff00000e);
    }
  }
  else if ((*(int *)(lVar2 + 8) < 0) || ((uVar1 & 1) == 0)) {
    uVar5 = FUN_00777cd0();
    uVar4 = FUN_00779380(uVar5,0x14);
    FUN_005fdab0(*(undefined8 *)(param_1[0x97] + 0x80),uVar4);
    if ((*(byte *)(param_1 + 0x59) & 1) != 0) {
      uVar5 = FUN_00777cd0();
      uVar4 = FUN_007793a0(uVar5,0x2b);
      FUN_005fc860(*(undefined8 *)(param_1[0x97] + 0x70),uVar4);
    }
  }
  else {
    uVar5 = FUN_00777cd0();
    uVar4 = FUN_007793c0(uVar5,0xff00000d);
    FUN_005fdab0(*(undefined8 *)(param_1[0x97] + 0x80),uVar4);
    uVar5 = FUN_00777cd0();
    uVar4 = FUN_007793a0(uVar5,0x2c);
    FUN_005fc860(*(undefined8 *)(param_1[0x97] + 0x70),uVar4);
  }
  if (*(int *)(lVar2 + 8) < 0) {
    (**(code **)(*(longlong *)param_1[0x97] + 0xa8))((longlong *)param_1[0x97],lVar2 + 0x28);
  }
  else {
    (**(code **)(*param_1 + 0x2c0))(param_1,*(int *)(lVar2 + 8),lVar2 + 0x28,uVar1);
  }
  if ((uVar1 & 0x10) != 0) {
    cVar3 = FUN_00781870();
    if (cVar3 == '\0') {
      thunk_FUN_03b3ef59(*(undefined8 *)(lVar2 + 0x20),lVar2 + 0x28);
    }
  }
  FUN_005ffb10(param_1[0x97],0);
  return;
}

