/* Ghidra address: 00b17e60 */
/* Ghidra symbol: FUN_00b17e60 */


longlong FUN_00b17e60(longlong param_1,char param_2,char param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_res8;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  undefined8 local_260;
  undefined1 *local_250;
  uint local_244;
  longlong local_240;
  uint local_234;
  longlong local_230;
  undefined8 local_228;
  undefined1 local_220 [528];
  
  local_250 = auStack_288;
  local_228 = 0;
  local_res8 = param_1;
  puVar1 = auStack_288;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_250;
  }
  local_250 = puVar1;
  FUN_0040d200(local_220,0x208,0);
  FUN_00414b90(local_res8 + 8,param_4);
  local_230 = *(longlong *)(local_res8 + 8);
  local_234 = 0;
  if (local_230 != 0) {
    local_234 = *(uint *)(local_230 + -4) >> 1;
  }
  if (local_234 != 0) {
    local_244 = 0;
    if (local_230 != 0) {
      local_244 = *(uint *)(local_230 + -4) >> 1;
    }
    local_240 = local_230;
    uVar3 = FUN_00415f70(*(undefined8 *)(local_res8 + 8));
    FUN_00409a70(uVar3,local_220,(longlong)(int)(local_244 * 2));
  }
  lVar4 = FUN_00b17470(&DAT_00b16398,1);
  *(longlong *)(local_res8 + 0x10) = lVar4;
  FUN_00414bf0(lVar4 + 8,"Root Entry");
  FUN_0041b800(local_res8 + 0x18);
  if (param_3 == '\0') {
    uVar3 = FUN_0041b800(&local_228);
    iVar2 = thunk_FUN_03998b7b(local_220,0x1012,0,uVar3);
    if (iVar2 != 0) {
      uVar3 = FUN_00b17000(&PTR_FUN_00b16d88,1,0);
      FUN_004134c0(uVar3);
    }
    FUN_0041b840(*(longlong *)(local_res8 + 0x10) + 0x10,local_228);
  }
  else if (param_3 == '\x01') {
    local_260 = FUN_0041b800(&local_228);
    local_268 = 0;
    iVar2 = thunk_FUN_03bb6bce(local_220,0,0x10,0);
    if (iVar2 != 0) {
      uVar3 = FUN_00b17000(&PTR_FUN_00b16d88,1,3);
      FUN_004134c0(uVar3);
    }
    FUN_00b17890(*(undefined8 *)(local_res8 + 0x10),local_228);
    FUN_0041b800(&local_228);
  }
  else if (param_3 == '\x02') {
    uVar3 = FUN_0041b800(local_res8 + 0x18);
    iVar2 = thunk_FUN_03aeb217(0,0xffffffff,uVar3);
    if (iVar2 != 0) {
      uVar3 = FUN_00b17000(&PTR_FUN_00b16d88,1,0);
      FUN_004134c0(uVar3);
    }
    uVar3 = FUN_0041b800(&local_228);
    iVar2 = thunk_FUN_03990f6f(*(undefined8 *)(local_res8 + 0x18),0x1012,0,uVar3);
    if (iVar2 != 0) {
      uVar3 = FUN_00b17000(&PTR_FUN_00b16d88,1,0);
      FUN_004134c0(uVar3);
    }
    FUN_0041b840(*(longlong *)(local_res8 + 0x10) + 0x10,local_228);
  }
  FUN_0041b800(&local_228);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

