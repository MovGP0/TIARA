/* Ghidra address: 00aa42e0 */
/* Ghidra symbol: FUN_00aa42e0 */


undefined4
FUN_00aa42e0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 *local_28;
  
  local_40 = auStack_a8;
  plVar1 = *(longlong **)(param_1 + 0x578);
  puVar2 = auStack_a8;
  if (plVar1 != (longlong *)0x0) {
    local_88 = 0;
    (**(code **)(*plVar1 + 0xe0))(plVar1,param_2,0,100);
    puVar2 = local_40;
    if (*(longlong *)(*(longlong *)(param_1 + 0x578) + 0x198) == *(longlong *)PTR_DAT_02003010) {
      local_28 = (undefined8 *)(param_1 + 0x578);
      local_30 = *local_28;
      *local_28 = 0;
      FUN_00410f20(local_30);
      puVar2 = local_40;
    }
  }
  local_40 = puVar2;
  *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x290) = param_1 + 0x580;
  *(undefined4 *)(param_1 + 0x580) = 0;
  local_88 = param_5;
  local_80 = param_6;
  local_78 = param_7;
  local_70 = param_8;
  local_68 = param_9;
  local_60 = param_10;
  local_58 = param_11;
  local_50 = param_12;
  uVar3 = FUN_00a9fd90(param_1,param_2,param_3,param_4);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x290) = 0;
  return uVar3;
}

