/* Ghidra address: 00686e50 */
/* Ghidra symbol: FUN_00686e50 */


void FUN_00686e50(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ushort uVar6;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  uVar6 = *(ushort *)(lVar1 + 0x10);
  if ((*(uint *)(lVar1 + 0x10) & 0x1000) != 0) {
    uVar6 = uVar6 | 0x1000;
  }
  if ((*(uint *)(lVar1 + 0x10) & 0x20) != 0) {
    uVar6 = uVar6 | 0x20;
  }
  FUN_005ffb10(param_1[0x92],*(undefined8 *)(lVar1 + 0x20));
  FUN_005ff880(param_1[0x92],param_1[0x17]);
  cVar2 = FUN_00781870();
  if (cVar2 == '\0') {
    FUN_005ff8c0(param_1[0x92],param_1[0x66]);
    cVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar2 == '\0') {
      FUN_005fc860(*(undefined8 *)(param_1[0x92] + 0x70),0xff000011);
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x59) & 2) == 0) {
      FUN_005ff8c0(param_1[0x92],param_1[0x66]);
    }
    else {
      uVar4 = FUN_00777cd0();
      uVar5 = (**(code **)(*param_1 + 0xf0))(param_1);
      uVar3 = FUN_00779380(uVar4,(&DAT_01df9ba4)[uVar5 & 0xff]);
      FUN_005fdab0(*(undefined8 *)(param_1[0x92] + 0x80),uVar3);
    }
    if ((*(byte *)(param_1 + 0x59) & 1) != 0) {
      uVar4 = FUN_00777cd0();
      uVar5 = (**(code **)(*param_1 + 0xf0))(param_1);
      uVar3 = FUN_007793a0(uVar4,(&DAT_01df9ba6)[uVar5 & 0xff]);
      FUN_005fc860(*(undefined8 *)(param_1[0x92] + 0x70),uVar3);
    }
  }
  if ((-1 < *(int *)(lVar1 + 8)) && ((uVar6 & 1) != 0)) {
    FUN_005fdab0(*(undefined8 *)(param_1[0x92] + 0x80),0xff00000d);
    FUN_005fc860(*(undefined8 *)(param_1[0x92] + 0x70),0xff00000e);
  }
  if (*(int *)(lVar1 + 8) < 0) {
    (**(code **)(*(longlong *)param_1[0x92] + 0xa8))((longlong *)param_1[0x92],lVar1 + 0x28);
  }
  else {
    (**(code **)(*param_1 + 0x308))(param_1,*(int *)(lVar1 + 8),lVar1 + 0x28,uVar6);
  }
  if ((uVar6 & 0x10) != 0) {
    thunk_FUN_03b3ef59(*(undefined8 *)(lVar1 + 0x20),lVar1 + 0x28);
  }
  FUN_005ffb10(param_1[0x92],0);
  return;
}

