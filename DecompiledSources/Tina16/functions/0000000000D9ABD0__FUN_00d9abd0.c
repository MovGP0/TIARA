/* Ghidra address: 00d9abd0 */
/* Ghidra symbol: FUN_00d9abd0 */


undefined1
FUN_00d9abd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,longlong param_6,undefined8 param_7,undefined4 param_8,
            undefined8 *param_9)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  int *local_70;
  undefined1 *local_60;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined1 local_3d;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  undefined4 local_1c;
  
  local_60 = auStack_98;
  local_3c = *param_9;
  uStack_34 = param_9[1];
  uStack_2c = param_9[2];
  uStack_24 = param_9[3];
  local_3d = 1;
  local_1c = thunk_FUN_04141bf7(param_3);
  local_78 = CONCAT31(local_78._1_3_,2);
  local_70 = &local_44;
  cVar1 = (**(code **)(param_1 + 0x28))(param_1,param_2,param_4,param_5);
  if ((cVar1 != '\0') && (local_44 != 0x1fffffff)) {
    uVar2 = FUN_005fbf20(local_44);
    thunk_FUN_0412a071(param_3,uVar2);
  }
  local_48 = 0;
  if (param_6 != 0) {
    local_48 = *(undefined4 *)(param_6 + -4);
  }
  uVar2 = FUN_0060f550(param_8);
  local_4c = FUN_0060f500(uVar2);
  uVar3 = FUN_00416740(param_6);
  local_78 = local_4c;
  thunk_FUN_041a24be(param_3,uVar3,local_48,param_7);
  uVar2 = FUN_005fbf20(local_1c);
  thunk_FUN_0412a071(param_3,uVar2);
  return local_3d;
}

