/* Ghidra address: 00708b20 */
/* Ghidra symbol: FUN_00708b20 */


void FUN_00708b20(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [40];
  undefined1 *local_b0;
  undefined8 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78 [72];
  longlong local_30;
  
  local_b0 = auStack_d8;
  local_a0 = *param_2;
  local_98 = param_2[1];
  uStack_90 = param_2[2];
  uStack_88 = param_2[3];
  local_30 = local_98;
  local_80 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
  if (local_30 == 0) {
    uVar1 = thunk_FUN_041804fe(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x48),local_78);
    FUN_005ffb10(local_80,uVar1);
  }
  else {
    FUN_005ffb10(local_80,local_30);
  }
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x90))(*(longlong **)(param_1 + 0x60),local_80);
  if (local_30 == 0) {
    thunk_FUN_0416269d(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x48),local_78);
  }
  FUN_005ffb10(local_80,0);
  FUN_00410f20(local_80);
  *(undefined1 *)(param_1 + 0x3f) = 0;
  return;
}

