/* Ghidra address: 006eaf50 */
/* Ghidra symbol: FUN_006eaf50 */


void FUN_006eaf50(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  longlong local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  int local_20;
  undefined4 local_1c;
  
  local_90 = auStack_b8;
  FUN_0040d200(&local_50,0x38,0);
  local_88 = FUN_0069e8a0();
  FUN_00414ad0(local_88 + 0x30,param_2);
  FUN_0069d590(local_88);
  local_50 = FUN_0069dc70(local_88);
  local_48 = local_50;
  uVar4 = FUN_0069dc70(local_88);
  local_60 = thunk_FUN_03e5bd07(uVar4,0x58);
  uVar4 = FUN_0069dc70(local_88);
  local_64 = thunk_FUN_03e5bd07(uVar4,0x5a);
  cVar2 = FUN_00423b30(param_1 + 0x570);
  if (cVar2 == '\0') {
    local_40 = CONCAT44((*(int *)(param_1 + 0x574) * 0x5a0) / local_64,
                        (*(int *)(param_1 + 0x570) * 0x5a0) / local_60);
    iVar3 = *(int *)(param_1 + 0x57c) * 0x5a0;
    uVar1 = (longlong)iVar3 % (longlong)local_64;
    local_38 = CONCAT44(iVar3 / local_64,(*(int *)(param_1 + 0x578) * 0x5a0) / local_60);
  }
  else {
    iVar3 = FUN_0069df40(local_88);
    local_38 = CONCAT44(local_38._4_4_,(iVar3 * 0x5a0) / local_60);
    iVar3 = FUN_0069df10(local_88,(longlong)(iVar3 * 0x5a0) % (longlong)local_60 & 0xffffffff);
    uVar1 = (longlong)(iVar3 * 0x5a0) % (longlong)local_64;
    local_38 = CONCAT44((iVar3 * 0x5a0) / local_64,(undefined4)local_38);
  }
  local_30 = local_40;
  uStack_28 = local_38;
  local_74 = local_40;
  uStack_6c = local_38;
  local_58 = 0;
  local_7c = 8;
  local_78 = 0x4b0;
  uVar4 = FUN_0065b870(param_1,uVar1 & 0xffffffff);
  local_5c = thunk_FUN_041b2403(uVar4,0x45f,&local_7c,0);
  local_1c = 0xffffffff;
  local_54 = thunk_FUN_03b0d54a(local_50,1);
  uVar4 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar4,0x439,0,0);
  do {
    local_40 = local_74;
    local_38 = uStack_6c;
    local_20 = local_58;
    uVar4 = FUN_0065b870(param_1);
    local_58 = FUN_004701a0(uVar4,0x439,1,&local_50);
    if ((local_58 < local_5c) && (local_58 != -1)) {
      FUN_0069d690(local_88);
    }
  } while ((local_58 < local_5c) && (local_58 != -1));
  FUN_0069d650(local_88);
  uVar4 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar4,0x439,0,0);
  thunk_FUN_03b0d54a(local_50,local_54);
  return;
}

