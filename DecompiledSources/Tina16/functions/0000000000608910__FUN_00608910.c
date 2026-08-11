/* Ghidra address: 00608910 */
/* Ghidra symbol: FUN_00608910 */


longlong FUN_00608910(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined1 *local_b0;
  longlong local_a8;
  longlong local_a0;
  char local_95;
  undefined4 local_94;
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined4 local_88;
  longlong local_78;
  undefined4 local_70;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_b0 = auStack_108;
  local_28 = 0;
  if (param_1 != 0) {
    iVar1 = thunk_FUN_03d2c01a(param_1,0x68,local_90);
    if (iVar1 != 0) {
      FUN_00607750(param_1);
      local_20 = 0;
      local_18 = 0;
      uVar2 = thunk_FUN_040ef593(0);
      local_20 = FUN_005fffe0(uVar2);
      uVar2 = thunk_FUN_04137b5f(local_20);
      local_18 = FUN_005fffe0(uVar2);
      local_e8 = 0;
      local_28 = thunk_FUN_03c9ff5e(local_8c,local_88,1,1);
      if (local_28 != 0) {
        local_a8 = thunk_FUN_041a19a1(local_18,local_28);
        if (param_3 == 0x1fffffff) {
          local_e8 = CONCAT44(local_e8._4_4_,local_88);
          local_e0 = CONCAT44(local_e0._4_4_,0x42);
          thunk_FUN_04161b78(local_18,0,0,local_8c);
        }
        else {
          uVar2 = thunk_FUN_04137b5f(local_20);
          local_10 = FUN_005fffe0(uVar2);
          if (local_78 == 0) {
            local_95 = '\0';
            local_res8 = param_1;
          }
          else {
            local_95 = '\x01';
            local_70 = 0;
            local_e8 = 0;
            local_res8 = FUN_00607e60(param_1,param_2,param_2,local_90);
          }
          local_a0 = thunk_FUN_041a19a1(local_10,local_res8);
          if (param_2 != 0) {
            thunk_FUN_0418f5de(local_10,param_2,0);
            thunk_FUN_03a5de49(local_10);
            thunk_FUN_0418f5de(local_18,param_2,0);
            thunk_FUN_03a5de49(local_18);
          }
          local_94 = thunk_FUN_03e3a7dc(local_10,param_3);
          local_e8 = CONCAT44(local_e8._4_4_,local_88);
          local_e0 = local_10;
          local_d8 = 0;
          local_d0 = 0;
          local_c8 = 0xcc0020;
          thunk_FUN_0415fcd2(local_18,0,0,local_8c);
          thunk_FUN_03e3a7dc(local_10,local_94);
          if (local_a0 != 0) {
            thunk_FUN_041a19a1(local_10,local_a0);
          }
          if (local_95 != '\0') {
            thunk_FUN_0416f828(local_res8);
          }
          thunk_FUN_041a2fd8(local_10);
        }
        if (local_a8 != 0) {
          thunk_FUN_041a19a1(local_18,local_a8);
        }
      }
      if (local_18 != 0) {
        thunk_FUN_041a2fd8(local_18);
      }
      if (local_20 != 0) {
        thunk_FUN_041a9b5c(0,local_20);
      }
    }
  }
  return local_28;
}

