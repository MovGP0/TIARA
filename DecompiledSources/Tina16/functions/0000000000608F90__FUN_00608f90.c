/* Ghidra address: 00608f90 */
/* Ghidra symbol: FUN_00608f90 */


void FUN_00608f90(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 *local_a0;
  undefined8 local_90 [13];
  undefined8 local_28;
  longlong local_20;
  
  local_a0 = auStack_d8;
  puVar2 = local_90;
  for (lVar1 = 0xd; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_0060a440(param_1);
  local_28 = 0;
  local_20 = 0;
  lVar1 = param_3;
  if (param_3 != DAT_02011fa0) {
    lVar1 = FUN_00608880(param_3);
  }
  local_20 = lVar1;
  local_b8 = *(undefined8 *)(param_1 + 0x48);
  local_28 = FUN_00607e60(param_2,param_3,local_20,local_90);
  local_b8 = CONCAT71(local_b8._1_7_,*(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x39));
  local_b0 = 0;
  FUN_0060ab20(param_1,local_28,local_20,local_90);
  return;
}

