/* Ghidra address: 007feca0 */
/* Ghidra symbol: FUN_007feca0 */


void FUN_007feca0(longlong *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  undefined1 *local_80;
  undefined8 local_78;
  undefined1 local_68 [72];
  longlong local_20;
  
  local_80 = auStack_b8;
  iVar4 = *param_2;
  if (iVar4 == 0xf) {
    local_20 = *(longlong *)(param_2 + 2);
    puVar1 = auStack_b8;
    if (local_20 == 0) {
      uVar3 = thunk_FUN_041804fe(param_1[0xd3],local_68);
      *(undefined8 *)(param_2 + 2) = uVar3;
      puVar1 = local_80;
    }
    local_80 = puVar1;
    if (local_20 == 0) {
      thunk_FUN_03e49910(param_1[0xd3],&local_78);
      uVar3 = FUN_0064d3a0(param_1,&local_78);
      local_78._0_4_ = (int)uVar3;
      iVar4 = -(int)local_78;
      local_78._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
      iVar5 = -local_78._4_4_;
      local_78 = uVar3;
      FUN_0064ae10(*(undefined8 *)(param_2 + 2),iVar4,iVar5);
    }
    FUN_006570a0(param_1,param_2);
    if (local_20 != 0) {
      return;
    }
    thunk_FUN_0416269d(param_1[0xd3],local_68);
    return;
  }
  if (iVar4 == 0x14) {
    local_20 = *(longlong *)(param_2 + 2);
    local_80 = auStack_b8;
    (**(code **)(*param_1 + 0xe0))(param_1,local_90);
    uVar3 = FUN_005fdb10(param_1[0x66]);
    thunk_FUN_03984819(local_20,local_90,uVar3);
    if ((*(char *)((longlong)param_1 + 0x4d6) == '\x02') && (param_1[0xd3] != 0)) {
      thunk_FUN_03abe598(param_1[0xd3],&local_78);
      uVar3 = FUN_005fdb10(param_1[0x66]);
      thunk_FUN_03984819(local_20,&local_78,uVar3);
    }
    param_2[6] = 1;
    param_2[7] = 0;
    return;
  }
  if (iVar4 == 0x3f) {
    local_80 = auStack_b8;
    FUN_007febd0(auStack_b8);
    if (*(char *)((longlong)param_1 + 0x4d6) == '\x02') {
      uVar3 = FUN_007ff9d0(param_1);
      if (((int)uVar3 == 0) || (uVar3 = FUN_007fec40(auStack_b8), (char)uVar3 == '\0')) {
        uVar2 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      }
      else {
        uVar2 = 0;
      }
      FUN_007f9280(param_1[0xd3],uVar2);
      return;
    }
    return;
  }
  if (iVar4 != 0x84) {
    local_80 = auStack_b8;
    FUN_007febd0(auStack_b8);
    return;
  }
  local_80 = auStack_b8;
  FUN_007febd0(auStack_b8);
  if (*(longlong *)(param_2 + 6) != 1) {
    return;
  }
  param_2[6] = -1;
  param_2[7] = -1;
  return;
}

