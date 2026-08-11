/* Ghidra address: 005d0e50 */
/* Ghidra symbol: FUN_005d0e50 */


void FUN_005d0e50(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined1 param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 *local_40;
  undefined4 local_34;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  longlong local_18;
  
  local_40 = auStack_88;
  local_18 = 0;
  local_20 = (undefined8 *)0x0;
  local_28 = (undefined8 *)0x0;
  local_30 = (undefined8 *)0x0;
  puVar1 = auStack_88;
  if (param_2 != (undefined8 *)0x0) {
    local_20 = (undefined8 *)FUN_004095c0(8);
    uVar3 = FUN_005d0320(*param_2,param_5);
    *local_20 = uVar3;
    puVar1 = local_40;
  }
  local_40 = puVar1;
  if (param_3 != (undefined8 *)0x0) {
    local_28 = (undefined8 *)FUN_004095c0(8);
    uVar3 = FUN_005d0320(*param_3,param_5);
    *local_28 = uVar3;
  }
  if (param_4 != (undefined8 *)0x0) {
    local_30 = (undefined8 *)FUN_004095c0(8);
    uVar3 = FUN_005d0320(*param_4,param_5);
    *local_30 = uVar3;
  }
  thunk_FUN_041931fb(0);
  uVar2 = FUN_00440f60(param_1,1);
  if ((uVar2 & 0x10) == 0) {
    local_34 = 0x80;
  }
  else {
    local_34 = 0x2000000;
  }
  uVar3 = FUN_00416740(param_1);
  local_68 = 3;
  local_60 = local_34;
  local_58 = 0;
  local_18 = thunk_FUN_041ac412(uVar3,0x40000000,2,0);
  if (local_18 != -1) {
    thunk_FUN_04198660(local_18,local_20,local_28,local_30);
  }
  thunk_FUN_041d2921(local_18);
  thunk_FUN_041931fb(0);
  FUN_004095f0(local_20);
  FUN_004095f0(local_28);
  FUN_004095f0(local_30);
  return;
}

