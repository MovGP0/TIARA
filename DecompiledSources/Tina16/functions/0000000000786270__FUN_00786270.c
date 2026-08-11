/* Ghidra address: 00786270 */
/* Ghidra symbol: FUN_00786270 */


void FUN_00786270(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  undefined1 local_78 [72];
  longlong local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_80 = auStack_a8;
  if (*(char *)((longlong)param_1 + 0x23) != '\0') {
    local_30 = *(longlong *)(param_2 + 8);
    local_28 = (longlong *)FUN_005fe0d0(&PTR_FUN_005f54e0,1);
    if (local_30 == 0) {
      uVar3 = FUN_0065b870(param_1[2]);
      uVar3 = thunk_FUN_041804fe(uVar3,local_78);
      FUN_005ffb10(local_28,uVar3);
    }
    else {
      FUN_005ffb10(local_28,local_30);
    }
    uVar3 = FUN_005ffa40(local_28);
    cVar2 = (**(code **)(*param_1 + 0x18))(param_1,uVar3);
    if (cVar2 == '\0') {
      if ((*(char *)((longlong)param_1 + 0x19) == '\0') || (local_30 != 0)) {
        (**(code **)(*param_1 + 0x20))(param_1,local_28);
        lVar1 = param_1[2];
        if (lVar1 != 0) {
          uVar3 = FUN_005ffa40(local_28);
          FUN_006573b0(lVar1,uVar3,0);
        }
      }
      else {
        local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
        (**(code **)(*local_20 + 0xe0))
                  (local_20,*(undefined4 *)(param_1[2] + 0x98),*(undefined4 *)(param_1[2] + 0x9c));
        uVar3 = FUN_00609e10(local_20);
        (**(code **)(*param_1 + 0x28))(param_1,uVar3);
        uVar3 = FUN_00609e10(local_20);
        (**(code **)(*param_1 + 0x20))(param_1,uVar3);
        lVar1 = param_1[2];
        if (lVar1 != 0) {
          uVar3 = FUN_00609e10(local_20);
          uVar3 = FUN_005ffa40(uVar3);
          FUN_006573b0(lVar1,uVar3,0);
        }
        (**(code **)(*local_28 + 0x88))(local_28,0,0,local_20);
        FUN_00410f20(local_20);
      }
    }
    if (local_30 == 0) {
      uVar3 = FUN_0065b870(param_1[2]);
      thunk_FUN_0416269d(uVar3,local_78);
    }
    FUN_005ffb10(local_28,0);
    FUN_00410f20(local_28);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}

