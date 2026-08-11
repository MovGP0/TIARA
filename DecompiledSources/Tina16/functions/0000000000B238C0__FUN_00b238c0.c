/* Ghidra address: 00b238c0 */
/* Ghidra symbol: FUN_00b238c0 */


undefined8 FUN_00b238c0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined1 *local_c0;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  longlong local_a0;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  char *local_80;
  int local_74 [5];
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58 [64];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  local_c0 = auStack_e8;
  local_a0 = 0;
  local_a8 = 0;
  if (param_1 != 0) {
    local_a8 = *(uint *)(param_1 + -4) >> 1;
  }
  local_a4 = local_a8;
  local_c8 = param_1;
  if (local_a8 == 0) {
    local_18 = 0;
    uStack_14 = 0;
    local_c0 = auStack_e8;
  }
  else {
    local_80 = (char *)FUN_00b23d10(param_3,param_2);
    FUN_00b23800(&local_a0,local_80);
    local_10 = thunk_FUN_040ef593(0);
    local_94 = thunk_FUN_03e5bd07(local_10,0x5a);
    thunk_FUN_03b122c4(local_10,2);
    local_74[0] = FUN_0040c770((double)(int)((uint)*(ushort *)(local_80 + 7) * local_94) / 72.0);
    local_74[0] = -local_74[0];
    local_74[1] = 0;
    local_74[2] = 0;
    local_74[3] = 0;
    if (*local_80 == '\0') {
      local_74[4] = 400;
    }
    else {
      local_74[4] = 700;
    }
    local_60 = local_80[1] != '\0';
    local_5f = local_80[2] != '\0';
    local_5e = local_80[3] != '\0';
    local_5d = 1;
    FUN_0040d200(local_58,0x40,0);
    local_ac = 0;
    if (local_a0 != 0) {
      local_ac = *(uint *)(local_a0 + -4) >> 1;
    }
    uVar1 = FUN_00415f70(local_a0);
    FUN_00409a70(uVar1,local_58,(longlong)(int)(local_ac * 2));
    local_5a = 0;
    if (local_74[3] == 0) {
      local_5c = 0;
    }
    else {
      local_5c = 7;
    }
    local_5b = 0;
    local_59 = 0;
    local_90 = thunk_FUN_041a15ee(local_74);
    local_88 = thunk_FUN_041a19a1(local_10,local_90);
    local_b0 = 0;
    if (local_c8 != 0) {
      local_b0 = *(uint *)(local_c8 + -4) >> 1;
    }
    uVar1 = FUN_00415f70(param_1);
    thunk_FUN_0418ae1a(local_10,uVar1,local_b0,&local_18);
    thunk_FUN_041a19a1(local_10,local_88);
    thunk_FUN_0416f828(local_90);
    thunk_FUN_041a9b5c(0,local_10);
  }
  FUN_00414520(&local_a0);
  return CONCAT44(uStack_14,local_18);
}

