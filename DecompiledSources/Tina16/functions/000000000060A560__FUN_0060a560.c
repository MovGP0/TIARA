/* Ghidra address: 0060a560 */
/* Ghidra symbol: FUN_0060a560 */


void FUN_0060a560(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 *local_a0;
  undefined1 local_90 [104];
  undefined8 local_28;
  longlong local_20;
  
  local_a0 = auStack_d8;
  local_28 = 0;
  local_20 = 0;
  FUN_0060a440(param_1);
  FUN_0060a460(param_1);
  lVar2 = param_1[0xc];
  uVar1 = FUN_005fbf20(param_2);
  local_28 = FUN_00608910(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x20),uVar1);
  FUN_0040d200(local_90,0x68,0);
  thunk_FUN_03d2c01a(local_28,0x68,local_90);
  lVar2 = *(longlong *)(param_1[0xc] + 0x20);
  if (lVar2 != DAT_02011fa0) {
    lVar2 = FUN_00608880(lVar2);
  }
  local_20 = lVar2;
  local_b8 = *(undefined1 *)(param_1[0xc] + 0x39);
  local_b0 = 0;
  FUN_0060ab20(param_1,local_28,local_20,local_90);
  (**(code **)(*param_1 + 0x20))(param_1,param_1);
  return;
}

