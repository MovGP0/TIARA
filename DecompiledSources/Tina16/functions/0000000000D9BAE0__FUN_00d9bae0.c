/* Ghidra address: 00d9bae0 */
/* Ghidra symbol: FUN_00d9bae0 */


undefined1
FUN_00d9bae0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,longlong param_6,undefined8 *param_7,undefined4 param_8,
            ulonglong *param_9)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  int *local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined1 *local_70;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined1 local_41;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  int local_20;
  undefined4 local_1c;
  
  local_70 = auStack_c8;
  local_40 = *param_9;
  uStack_38 = param_9[1];
  uStack_30 = param_9[2];
  uStack_28 = param_9[3];
  local_41 = 1;
  local_54 = *param_7;
  uStack_4c = param_7[1];
  uVar2 = FUN_0060f550(param_8);
  local_58 = FUN_0060f500(uVar2);
  if ((byte)((char)param_5 - 2U) < 2) {
    local_20 = 0x1fffffff;
    local_5c = 0x1fffffff;
    local_a8 = CONCAT31(local_a8._1_3_,2);
    local_a0 = &local_5c;
    cVar1 = (**(code **)(param_1 + 0x28))(param_1,param_2,param_4,param_5);
    if ((cVar1 == '\0') && ((local_40 & 1) != 0)) {
      local_5c = local_40._4_4_;
    }
    if (local_5c != 0x1fffffff) {
      uVar2 = FUN_005fbf20(local_5c);
      local_20 = thunk_FUN_0412a071(param_3,uVar2);
    }
    local_1c = thunk_FUN_03b57162(param_3);
    thunk_FUN_03b994b9(param_3,1);
    local_60 = 0;
    if (param_6 != 0) {
      local_60 = *(undefined4 *)(param_6 + -4);
    }
    uVar3 = FUN_00416740(param_6);
    local_a8 = local_58;
    thunk_FUN_041a24be(param_3,uVar3,local_60,&local_54);
    thunk_FUN_0402759f(param_3,local_1c);
    if (local_20 != 0x1fffffff) {
      thunk_FUN_0412a071(param_3,local_20);
    }
  }
  else {
    local_a8 = param_5;
    local_a0 = (int *)param_6;
    local_98 = param_7;
    local_90 = param_8;
    local_88 = &local_40;
    local_80 = 0;
    local_41 = FUN_00784200(param_1,param_2,param_3,param_4);
  }
  return local_41;
}

