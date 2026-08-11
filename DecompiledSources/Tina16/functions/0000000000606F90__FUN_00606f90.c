/* Ghidra address: 00606f90 */
/* Ghidra symbol: FUN_00606f90 */


void FUN_00606f90(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *local_50;
  longlong local_40;
  undefined4 local_36 [2];
  undefined2 local_2c;
  undefined2 local_2a;
  short local_28;
  undefined2 local_22;
  undefined8 local_20;
  uint local_14;
  undefined8 local_10;
  
  local_50 = auStack_88;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_0040d200(local_36,0x16,0);
    local_40 = *(longlong *)(param_1 + 0x48);
    local_36[0] = 0x9ac6cdd7;
    local_28 = *(short *)(local_40 + 0x28);
    if (local_28 == 0) {
      local_28 = 0x60;
    }
    local_2c = thunk_FUN_03f3ed25(*(undefined4 *)(local_40 + 0x18),local_28,0x9ec);
    local_2a = thunk_FUN_03f3ed25(*(undefined4 *)(local_40 + 0x1c),local_28,0x9ec);
    local_22 = FUN_00601640(local_36);
    local_68 = thunk_FUN_040ef593(0);
    local_20 = local_68;
    local_14 = thunk_FUN_03cc53f5(*(undefined8 *)(local_40 + 0x10),0,0,8);
    local_10 = FUN_004095c0(local_14);
    local_68 = local_20;
    uVar1 = thunk_FUN_03cc53f5(*(undefined8 *)(local_40 + 0x10),local_14,local_10,8);
    if (uVar1 < local_14) {
      FUN_005fff20();
    }
    FUN_004b89e0(param_2,local_36,0x16);
    FUN_004b89e0(param_2,local_10,local_14);
    FUN_004095f0(local_10,local_14);
    thunk_FUN_041a9b5c(0,local_20);
  }
  return;
}

