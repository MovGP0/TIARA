/* Ghidra address: 00789690 */
/* Ghidra symbol: FUN_00789690 */


void FUN_00789690(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  undefined1 local_78 [72];
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  local_80 = auStack_a8;
  *(undefined1 *)(param_1 + 8) = 0;
  cVar1 = FUN_00788df0(param_1);
  if ((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x29) != '\0')) {
    local_28 = *(longlong *)(param_2 + 8);
    local_30 = (longlong *)FUN_005fe0d0(&PTR_FUN_005f54e0,1);
    thunk_FUN_041804fe(*(undefined8 *)(param_1[3] + 0x18),local_78);
    if (local_28 == 0) {
      local_28 = thunk_FUN_040ef593(*(undefined8 *)(param_1[3] + 0x18));
      FUN_005ffb10(local_30,local_28);
    }
    else {
      FUN_005ffb10(local_30,local_28);
    }
    if (param_1[9] != 0) {
      (**(code **)(*(longlong *)local_30[0xe] + 0x10))((longlong *)local_30[0xe],param_1[9]);
    }
    uVar4 = FUN_005ffa40(local_30);
    cVar1 = (**(code **)(*param_1 + 0x40))(param_1,uVar4);
    if (cVar1 == '\0') {
      if ((*(char *)((longlong)param_1 + 0x2c) == '\0') || (local_28 != 0)) {
        (**(code **)(*param_1 + 0x10))(param_1,local_30);
      }
      else {
        local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
        uVar2 = FUN_00787fa0(param_1[3]);
        uVar3 = FUN_00787c80(param_1[3]);
        (**(code **)(*local_20 + 0xe0))(local_20,uVar2,uVar3);
        uVar4 = FUN_00609e10(local_20);
        (**(code **)(*param_1 + 0x20))(param_1,uVar4);
        uVar4 = FUN_00609e10(local_20);
        (**(code **)(*param_1 + 0x10))(param_1,uVar4);
        (**(code **)(*local_30 + 0x88))(local_30,0,0,local_20);
        FUN_00410f20(local_20);
      }
    }
    if (*(longlong *)(param_2 + 8) == 0) {
      thunk_FUN_041a9b5c(*(undefined8 *)(param_1[3] + 0x18),local_28);
    }
    FUN_005ffb10(local_30,0);
    FUN_00410f20(local_30);
    thunk_FUN_0416269d(*(undefined8 *)(param_1[3] + 0x18),local_78);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}

