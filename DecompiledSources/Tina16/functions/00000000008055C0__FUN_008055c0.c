/* Ghidra address: 008055c0 */
/* Ghidra symbol: FUN_008055c0 */


void FUN_008055c0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  int local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined1 *local_80;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_34;
  longlong local_30;
  undefined4 local_24;
  undefined8 local_20;
  
  local_80 = auStack_f8;
  uVar5 = FUN_0069e8a0();
  FUN_0069d590(uVar5);
  local_40 = (longlong *)FUN_00805430(param_1);
  uVar5 = FUN_007ffbe0(param_1);
  FUN_005fdf10(uVar5);
  local_60 = FUN_0069e8a0();
  local_68 = FUN_0069db00(local_60);
  local_48 = (**(code **)(*local_40 + 0xe8))(local_40);
  FUN_00601800(local_48,&local_34,&local_24);
  local_30 = FUN_00409570(local_34);
  local_20 = FUN_00409570(local_24);
  lVar1 = local_30;
  FUN_00601960(local_48,0,local_30,local_20);
  local_70 = lVar1;
  local_54 = *(int *)(lVar1 + 4);
  local_58 = *(undefined4 *)(lVar1 + 8);
  local_50 = local_58;
  local_4c = local_54;
  if (*(char *)(param_1 + 0x4db) == '\x01') {
    uVar5 = FUN_005ffa40(local_68);
    uVar3 = thunk_FUN_03e5bd07(uVar5,0x58);
    uVar2 = FUN_008003b0(param_1);
    local_54 = thunk_FUN_03f3ed25(local_4c,uVar3,uVar2);
    uVar5 = FUN_005ffa40(local_68);
    uVar3 = thunk_FUN_03e5bd07(uVar5,0x5a);
    uVar2 = FUN_008003b0(param_1);
    local_58 = thunk_FUN_03f3ed25(local_50,uVar3,uVar2);
  }
  else if (*(char *)(param_1 + 0x4db) == '\x02') {
    uVar3 = FUN_0069df10(local_60);
    local_54 = thunk_FUN_03f3ed25(local_4c,uVar3,local_50);
    iVar4 = FUN_0069df40(local_60);
    if (local_54 < iVar4) {
      local_58 = FUN_0069df10(local_60);
    }
    else {
      local_54 = FUN_0069df40(local_60);
      uVar3 = FUN_0069df40(local_60);
      local_58 = thunk_FUN_03f3ed25(local_50,uVar3,local_4c);
    }
  }
  uVar5 = FUN_0069db00(local_60);
  uVar5 = FUN_005ffa40(uVar5);
  local_d8 = local_58;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = local_4c;
  local_b8 = local_50;
  local_b0 = local_20;
  local_a8 = lVar1;
  local_a0 = 0;
  local_98 = 0xcc0020;
  thunk_FUN_03cc01a5(uVar5,0,0,local_54);
  FUN_004095f0(local_20,local_24);
  FUN_004095f0(local_30,local_34);
  uVar5 = FUN_007ffbe0(param_1);
  FUN_005fe090(uVar5);
  FUN_00410f20(local_40);
  uVar5 = FUN_0069e8a0();
  FUN_0069d650(uVar5);
  return;
}

