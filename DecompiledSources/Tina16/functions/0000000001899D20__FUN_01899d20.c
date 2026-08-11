/* Ghidra address: 01899d20 */
/* Ghidra symbol: FUN_01899d20 */


void FUN_01899d20(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint in_stack_ffffffffffffffb8;
  uint uVar5;
  int local_38 [2];
  int local_30;
  
  FUN_0065f2f0(param_1);
  lVar4 = FUN_01899bf0(param_1);
  (**(code **)(*param_1 + 0xe0))(param_1,local_38);
  if (lVar4 == 0) {
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),0xff00000f);
    (**(code **)(*(longlong *)param_1[0x62] + 0xa8))((longlong *)param_1[0x62],local_38);
  }
  else {
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar4 + 200));
    cVar1 = FUN_0065eb60(lVar4);
    if (cVar1 == '\0') {
      (**(code **)(*(longlong *)param_1[0x62] + 0xa8))((longlong *)param_1[0x62],local_38);
    }
    else {
      FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),0x1fffffff);
    }
  }
  thunk_FUN_04176532(local_38,0xfffffffe,0xfffffffe);
  if (*(char *)((longlong)param_1 + 0x319) == '\0') {
    if ((char)param_1[99] != '\0') {
      uVar3 = FUN_018910f0(0xff000005,0xff00000d,0x22b);
      FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),uVar3);
      (**(code **)(*(longlong *)param_1[0x62] + 0xa8))((longlong *)param_1[0x62],local_38);
    }
  }
  else {
    uVar3 = FUN_018910f0(0xff000005,0xff00000d,0x163);
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),uVar3);
    (**(code **)(*(longlong *)param_1[0x62] + 0xa8))((longlong *)param_1[0x62],local_38);
  }
  if ((char)param_1[99] != '\0') {
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),0xff00000d);
    (**(code **)(*(longlong *)param_1[0x62] + 0xb8))((longlong *)param_1[0x62],local_38);
  }
  uVar5 = *(uint *)((longlong)param_1 + 0x31c);
  if (((-1 < (int)uVar5) && (lVar4 != 0)) && (*(longlong *)(lVar4 + 0x4c0) != 0)) {
    uVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
    FUN_007d6c70(*(undefined8 *)(lVar4 + 0x4c0),param_1[0x62],4,4,uVar5,uVar2);
    in_stack_ffffffffffffffb8 = uVar5;
  }
  if ((char)param_1[100] == '\x03') {
    local_38[0] = FUN_01899bc0(param_1);
    local_38[0] = local_30 - local_38[0];
    FUN_0180e220(param_1[0x62],local_38,0xff000012,1,in_stack_ffffffffffffffb8 & 0xffffff00);
  }
  return;
}

