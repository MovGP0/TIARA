/* Ghidra address: 014d9d10 */
/* Ghidra symbol: FUN_014d9d10 */


void FUN_014d9d10(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined2 local_14c;
  undefined1 local_14a [8];
  char local_142;
  char local_141;
  uint local_140;
  int local_13c;
  undefined1 local_138 [8];
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 local_120 [32];
  byte local_20;
  
  local_140 = FUN_016ebdb0(param_1);
  local_140 = local_140 & 0xff;
  puVar4 = &DAT_01f54910;
  puVar5 = local_120;
  for (lVar3 = 0x21; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_20 = (byte)((int)(local_140 - 2) / 2);
  if (((local_20 == 0) || (4 < local_20)) || ((int)(local_140 - 2) % 2 != 0)) {
    FUN_01b04d70(0x214,&LAB_014d9f54,0);
  }
  uVar2 = (uint)local_20 * 2;
  local_13c = 1;
  uVar1 = (uint)local_20;
  while (uVar1 != 0) {
    local_14a[(longlong)local_13c + -1] = (undefined1)local_13c;
    local_13c = local_13c + 1;
    uVar2 = uVar2 - 1;
    uVar1 = uVar2;
  }
  local_141 = local_20 * '\x02' + '\x01';
  local_142 = local_20 * '\x02' + '\x02';
  local_130 = local_120;
  if (local_20 == 1) {
    local_128 = FUN_01b05be0(param_1,1,&local_14c);
  }
  else if (local_20 == 2) {
    local_128 = FUN_01b05be0(param_1,1,&local_14c);
  }
  else if (local_20 == 3) {
    local_128 = FUN_01b05be0(param_1,1,&local_14c);
  }
  else if (local_20 == 4) {
    local_128 = FUN_01b05be0(param_1,1,&local_14c);
  }
  else {
    local_128 = FUN_01b05be0(param_1,1,&local_14c);
  }
  FUN_00409a70(local_128,local_130,local_14c);
  FUN_016ee260(param_1,local_138,8,0);
  FUN_014d8fa0(param_1,param_2,local_14a,local_141,local_142,local_120,local_138);
  FUN_016e9f40(param_1,FUN_014d9cc0);
  FUN_016e9f60(param_1,FUN_014d8e50);
  FUN_016e9f50(param_1,FUN_014d8eb0);
  FUN_016e9fa0(param_1,FUN_014d8e20);
  return;
}

