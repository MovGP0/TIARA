/* Ghidra address: 00704f30 */
/* Ghidra symbol: FUN_00704f30 */


void FUN_00704f30(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 *local_b0;
  longlong local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_38;
  undefined8 local_30;
  int local_24;
  longlong local_20;
  
  local_b0 = auStack_e8;
  local_30 = 0;
  FUN_00684f30(param_1);
  uVar1 = FUN_0065b870(param_1);
  lVar2 = thunk_FUN_03f32902(uVar1,5);
  param_1[0xa1] = lVar2;
  param_1[0xa9] = param_1[0xa1];
  local_48 = param_1[0xa9];
  lVar2 = thunk_FUN_04118143(local_48,0xfffffffc);
  param_1[0xaa] = lVar2;
  local_50 = param_1[0xa9];
  local_58 = param_1[0xab];
  thunk_FUN_03c9d277(local_50,0xfffffffc,local_58);
  if (*(byte *)(param_1 + 0xb0) < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (*(byte *)(param_1 + 0xb0) & 0x1f)
            & 3U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    uVar1 = FUN_0065b870(param_1);
    uVar1 = thunk_FUN_03f32902(uVar1,5);
    local_20 = thunk_FUN_03f32902(uVar1,5);
    if (local_20 != 0) {
      if ((char)param_1[0xb0] == '\x01') {
        param_1[0xa0] = local_20;
        local_60 = param_1[0xa0];
        lVar2 = thunk_FUN_04118143(local_60,0xfffffffc);
        param_1[0xa3] = lVar2;
        local_68 = param_1[0xa0];
        local_70 = param_1[0xa6];
        thunk_FUN_03c9d277(local_68,0xfffffffc,local_70);
        local_20 = thunk_FUN_03f32902(local_20,2);
      }
      param_1[0x9f] = local_20;
      local_78 = param_1[0x9f];
      lVar2 = thunk_FUN_04118143(local_78,0xfffffffc);
      param_1[0xa2] = lVar2;
      local_80 = param_1[0x9f];
      local_88 = param_1[0xa5];
      thunk_FUN_03c9d277(local_80,0xfffffffc,local_88);
    }
  }
  if ((char)param_1[0xb0] == '\x01') {
    uVar1 = FUN_00416740(param_1[0xb6]);
    FUN_0064fca0(param_1,0xc,0,uVar1);
  }
  if ((*PTR_DAT_02003210 != '\0') && (param_1[0x9f] != 0)) {
    thunk_FUN_041b2403(param_1[0x9f],0xd3,3,0);
  }
  if (param_1[0xae] != 0) {
    (**(code **)(*(longlong *)param_1[0xb1] + 0x40))((longlong *)param_1[0xb1]);
    *(undefined1 *)(param_1 + 0xaf) = 1;
    (**(code **)(*(longlong *)param_1[0xb1] + 0x10))((longlong *)param_1[0xb1],param_1[0xae]);
    local_90 = param_1[0xb1];
    iVar4 = *(int *)(*(longlong *)(local_90 + 0x10) + 0x10);
    local_24 = 0;
    if (-1 < iVar4 + -1) {
      do {
        (**(code **)(*(longlong *)param_1[0xb1] + 0x60))((longlong *)param_1[0xb1],local_24);
        local_24 = local_24 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_98 = param_1 + 0xae;
    local_a0 = *local_98;
    *local_98 = 0;
    FUN_00410f20(local_a0);
    FUN_0064df10(param_1,param_1[0x17]);
    (**(code **)(*param_1 + 0x268))(param_1,*(undefined4 *)((longlong)param_1 + 0x57c));
    (**(code **)(*(longlong *)param_1[0xb1] + 0x48))((longlong *)param_1[0xb1]);
    *(undefined1 *)(param_1 + 0xaf) = 0;
  }
  if (param_1[0xad] != 0) {
    uVar1 = FUN_0065b870(param_1);
    uVar3 = FUN_007d56e0(param_1[0xad]);
    thunk_FUN_0413e052(uVar1,0x402,0,uVar3);
  }
  FUN_00705670(param_1,*(undefined1 *)((longlong)param_1 + 0x581));
  FUN_0041b800(param_1 + 0xa7);
  local_c8 = FUN_0041b800(param_1 + 0xa7);
  thunk_FUN_041d73d1(PTR_DAT_02002e80,0,1,&DAT_0070555d);
  if (param_1[0xa7] != 0) {
    uVar1 = FUN_0065b870(param_1);
    local_38 = thunk_FUN_041b2403(uVar1,0x407,0,0);
    if (local_38 != 0) {
      lVar2 = FUN_00706d40(&DAT_007040d0,1,param_1[0xb1]);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = lVar2 + 0x28;
      }
      FUN_0041b840(&local_30,lVar2);
      local_c8 = 0;
      (**(code **)(*(longlong *)param_1[0xa7] + 0x18))
                ((longlong *)param_1[0xa7],local_38,local_30,0);
      FUN_00705d00(param_1);
    }
  }
  FUN_0041b800(&local_30);
  return;
}

