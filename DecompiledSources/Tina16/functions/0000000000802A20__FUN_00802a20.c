/* Ghidra address: 00802a20 */
/* Ghidra symbol: FUN_00802a20 */


void FUN_00802a20(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_78 [32];
  int local_58;
  undefined1 *local_40;
  longlong local_38;
  undefined1 local_2c [8];
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  local_40 = auStack_78;
  FUN_005fdf10(param_1[0x9c]);
  FUN_005ffb10(param_1[0x9c],param_2);
  local_1c = thunk_FUN_03b57162(param_2);
  local_38 = param_1[0xd1];
  cVar1 = FUN_0080fc30(local_38);
  if ((cVar1 != '\0') || ((param_1[0xa2] != 0 && (*(char *)(local_38 + 0x10) != '\0')))) {
    (**(code **)(*param_1 + 0xe0))(param_1,local_2c);
    if ((*(char *)(local_38 + 0x38) == '\0') && ((char)param_1[0xd2] == '\0')) {
      local_58 = local_20 - *(int *)(local_38 + 0x20);
      thunk_FUN_041a27b3(param_2,*(undefined4 *)(local_38 + 0x14),*(undefined4 *)(local_38 + 0x18),
                         local_24 - *(int *)(local_38 + 0x1c));
    }
    else {
      *(undefined1 *)(param_1 + 0xd2) = 0;
    }
    if (param_1[0xa2] == 0) {
      uVar3 = FUN_005ffa40(param_1[0x9c]);
      uVar4 = thunk_FUN_041715dd(4);
      thunk_FUN_03984819(uVar3,local_2c,uVar4);
    }
    else {
      FUN_005fdab0(*(undefined8 *)(param_1[0x9c] + 0x80),0xff000002);
      FUN_005fdcb0(*(undefined8 *)(param_1[0x9c] + 0x80),5);
      uVar3 = FUN_005ffa40(param_1[0x9c]);
      uVar2 = FUN_005fbf20((int)param_1[0x19]);
      thunk_FUN_03e3a7dc(uVar3,uVar2);
      (**(code **)(*(longlong *)param_1[0x9c] + 0xa8))((longlong *)param_1[0x9c],local_2c);
    }
  }
  thunk_FUN_0402759f(param_2,local_1c);
  if (param_1[0xa2] == 0) {
    pcVar5 = (code *)FUN_00411550(param_1,0xffa1);
    (*pcVar5)(param_1);
  }
  else {
    (**(code **)(*(longlong *)param_1[0xa2] + 0x58))((longlong *)param_1[0xa2]);
  }
  FUN_005ffb10(param_1[0x9c],0);
  FUN_005fe090(param_1[0x9c]);
  return;
}

