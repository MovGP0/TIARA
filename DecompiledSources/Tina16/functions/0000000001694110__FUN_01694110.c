/* Ghidra address: 01694110 */
/* Ghidra symbol: FUN_01694110 */


void FUN_01694110(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_228 [40];
  undefined1 *local_200;
  undefined *local_1f8;
  undefined4 local_e0;
  longlong local_d0;
  undefined1 local_99;
  undefined8 local_60 [2];
  undefined8 local_50;
  
  local_200 = auStack_228;
  local_60[0] = 0;
  local_99 = 0;
  puVar1 = auStack_228;
  local_d0 = param_3;
  local_50 = param_1;
  if (param_3 == 0) {
    local_d0 = FUN_019a4600();
    puVar1 = local_200;
  }
  local_200 = puVar1;
  FUN_013b54c0(local_50,local_d0);
  if (local_d0 != 0) {
    uVar2 = FUN_019a4600();
    lVar3 = FUN_019a4600();
    FUN_01440040(uVar2,*(undefined8 *)(*(longlong *)(lVar3 + 0x210) + 0x110),0);
    local_e0 = 0xffffffff;
    FUN_01693000(auStack_228,local_d0,0);
    uVar2 = FUN_019a4600();
    uVar4 = FUN_019a45d0();
    uVar5 = FUN_019a4660();
    FUN_016937f0(auStack_228,uVar2,uVar4,uVar5);
    if (*(char *)(local_d0 + 0x490) == '\0') {
      local_1f8 = PTR_DAT_02004010;
    }
    else {
      local_1f8 = (undefined *)(local_d0 + 0x492);
    }
    FUN_013b3460(local_50,local_1f8,1);
  }
  FUN_00414480(local_60);
  return;
}

