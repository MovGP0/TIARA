/* Ghidra address: 00d44630 */
/* Ghidra symbol: FUN_00d44630 */


void FUN_00d44630(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  int local_a0 [2];
  int local_98;
  undefined1 *local_90;
  int local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  undefined1 local_78 [72];
  longlong local_30;
  undefined4 local_24;
  longlong *local_20;
  
  local_90 = auStack_d8;
  if ((char)param_1[0x12] == '\0') {
    local_30 = *(longlong *)(param_2 + 8);
    local_20 = (longlong *)FUN_005fe0d0(&PTR_FUN_005f54e0,1);
    if (local_30 == 0) {
      uVar3 = thunk_FUN_041804fe(param_1[1],local_78);
      FUN_005ffb10(local_20,uVar3);
    }
    else {
      FUN_005ffb10(local_20,local_30);
    }
    uVar3 = FUN_005ffa40(local_20);
    local_24 = thunk_FUN_03b57162(uVar3);
    (**(code **)(*param_1 + 0xa0))(param_1,local_20);
    uVar3 = FUN_005ffa40(local_20);
    thunk_FUN_0402759f(uVar3,local_24);
    cVar1 = FUN_00d44440(param_1);
    if ((cVar1 != '\x01') && (param_1[0x11] == 0)) {
      FUN_00787be0(param_1[3],&local_88);
      thunk_FUN_04176532(&local_88,0xfffffffe,0xfffffffe);
      cVar1 = FUN_00787a60(param_1[3]);
      if (cVar1 == '\x01') {
        FUN_00d43b10(param_1,local_a0);
        local_88 = local_98 + 1;
      }
      else {
        FUN_00d43b10(param_1,local_a0);
        local_80 = local_a0[0] + -1;
      }
      uVar3 = FUN_005ffa40(local_20);
      local_24 = thunk_FUN_03b57162(uVar3);
      uVar3 = FUN_005ffa40(local_20);
      local_b8 = local_7c;
      FUN_00428be0(uVar3,local_88,local_84,local_80);
      uVar2 = FUN_005fbf20(0xff000005);
      FUN_005fdab0(local_20[0x10],uVar2);
      (**(code **)(*local_20 + 0xa8))(local_20,&local_88);
      uVar3 = FUN_005ffa40(local_20);
      *(undefined8 *)(param_2 + 8) = uVar3;
      *(undefined1 *)(param_1 + 0x12) = 1;
      FUN_00788400(param_1,param_2);
      *(undefined1 *)(param_1 + 0x12) = 0;
      uVar3 = FUN_005ffa40(local_20);
      thunk_FUN_0402759f(uVar3,local_24);
    }
    FUN_005ffb10(local_20,0);
    FUN_00410f20(local_20);
    if (local_30 == 0) {
      thunk_FUN_0416269d(param_1[1],local_78);
    }
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    local_90 = auStack_d8;
    FUN_00789690(param_1,param_2);
  }
  return;
}

