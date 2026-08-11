/* Ghidra address: 0080d2f0 */
/* Ghidra symbol: FUN_0080d2f0 */


undefined4 FUN_0080d2f0(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  char cVar1;
  uint local_res20;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined1 *local_90;
  undefined4 local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  longlong local_58;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  longlong local_18;
  longlong local_10;
  
  local_90 = auStack_d8;
  local_40 = FUN_0080f430(param_1);
  local_58 = local_40;
  if (local_40 == 0) {
    local_58 = *(longlong *)(param_1 + 0x2d0);
  }
  local_10 = thunk_FUN_03cc587b(local_40,2);
  local_18 = thunk_FUN_03cc587b(*(undefined8 *)(param_1 + 0x2d0),2);
  if (local_10 != local_18) {
    local_80 = 0x28;
    thunk_FUN_04166da1(local_10,&local_80);
    thunk_FUN_03e49910(*(undefined8 *)(param_1 + 0x2d0),&local_2c);
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0x1d;
    thunk_FUN_041cc6e2(*(undefined8 *)(param_1 + 0x2d0),0,local_7c + (local_74 - local_7c) / 2,
                       local_78 + (local_70 - local_78) / 2);
  }
  local_38 = FUN_007f94c0(local_40);
  local_48 = FUN_007f9260();
  cVar1 = FUN_0080b0e0(param_1);
  local_res20 = param_4;
  if (cVar1 != '\0') {
    local_res20 = param_4 | 0x100000;
  }
  local_4c = thunk_FUN_041604c6(local_58,param_2,param_3,local_res20);
  if (local_10 != local_18) {
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0x1d;
    thunk_FUN_041cc6e2(*(undefined8 *)(param_1 + 0x2d0),0,local_2c + (local_24 - local_2c) / 2,
                       local_28 + (local_20 - local_28) / 2);
  }
  FUN_007f95c0(local_38);
  thunk_FUN_04161dbd(local_40);
  FUN_007f9270(local_48);
  return local_4c;
}

