/* Ghidra address: 00d27fc0 */
/* Ghidra symbol: FUN_00d27fc0 */


void FUN_00d27fc0(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  uint *puVar1;
  byte bVar2;
  undefined8 uVar3;
  uint *puVar4;
  char cVar5;
  ulonglong uVar6;
  char cVar7;
  int local_res18 [4];
  undefined1 auStack_2e8 [32];
  longlong *local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b0;
  byte local_2a8 [16];
  uint local_298 [14];
  undefined1 local_260 [48];
  undefined8 local_230;
  undefined1 local_228 [256];
  undefined1 local_128 [256];
  
  local_res18[0] = param_3;
  local_2c8 = param_1;
  local_2c0 = param_4;
  FUN_00d21150(param_1,local_res18);
  FUN_0040d200(local_2a8,0x10,0);
  FUN_00409a70(param_2,local_2a8,(longlong)local_res18[0]);
  FUN_00d27aa0(auStack_2e8);
  puVar1 = (uint *)local_2c8[0xd];
  FUN_00409a70(&DAT_01ec0250,local_260,0x38);
  local_230 = FUN_00d27b70(auStack_2e8,&local_230);
  bVar2 = 0;
  cVar5 = '\a';
  puVar4 = local_298;
  do {
    bVar2 = bVar2 + 1;
    *puVar4 = (uint)local_2a8[bVar2 & 0xf];
    puVar4[1] = 0;
    cVar7 = '\a';
    do {
      bVar2 = bVar2 + 1;
      puVar4[1] = puVar4[1] << 8 | *puVar4 >> 0x18;
      *puVar4 = *puVar4 << 8 | (uint)local_2a8[bVar2 & 0xf];
      cVar7 = cVar7 + -1;
    } while (cVar7 != '\0');
    puVar4 = puVar4 + 2;
    cVar5 = cVar5 + -1;
  } while (cVar5 != '\0');
  local_2b0 = 0;
  uVar3 = FUN_00d27cb0(auStack_2e8,&local_2b0,local_260);
  local_2b0._0_4_ = (uint)uVar3;
  *puVar1 = local_298[0] ^ (uint)local_2b0;
  local_2b0._4_4_ = (uint)((ulonglong)uVar3 >> 0x20);
  puVar1[1] = local_298[1] ^ local_2b0._4_4_;
  uVar6 = 1;
  puVar4 = local_298;
  local_2b0 = uVar3;
  do {
    puVar4 = puVar4 + 2;
    local_2b0 = FUN_00d27cb0(auStack_2e8,puVar1 + (longlong)((int)uVar6 + -1) * 2,local_260);
    uVar3 = local_2b0;
    puVar1[uVar6 * 2] = *puVar4 ^ (uint)local_2b0;
    local_2b0._4_4_ = (uint)((ulonglong)local_2b0 >> 0x20);
    puVar1[uVar6 * 2 + 1] = puVar4[1] ^ local_2b0._4_4_;
    bVar2 = (char)uVar6 + 1;
    uVar6 = (ulonglong)bVar2;
    local_2b0 = uVar3;
  } while (bVar2 != 7);
  uVar3 = FUN_00d27b70(auStack_2e8,puVar1 + 0xc);
  *(undefined8 *)(puVar1 + 0xc) = uVar3;
  *(undefined8 *)(puVar1 + 0xe) = *(undefined8 *)(puVar1 + 0xc);
  *(undefined8 *)(puVar1 + 0x1a) = *(undefined8 *)puVar1;
  uVar6 = 1;
  do {
    uVar3 = FUN_00d27b70(auStack_2e8,puVar1 + (longlong)(6 - (int)uVar6) * 2);
    *(undefined8 *)(puVar1 + 0xe + uVar6 * 2) = uVar3;
    bVar2 = (char)uVar6 + 1;
    uVar6 = (ulonglong)bVar2;
  } while (bVar2 != 6);
  FUN_0040d200(local_228,0x100,0);
  FUN_0040d200(local_128,0x100,0);
  FUN_0040d200(local_260,0x38,0);
  FUN_0040d200(local_298,0x38,0);
  FUN_0040d200(local_2a8,0x10,0);
  (**(code **)(*local_2c8 + 0x40))(local_2c8,local_2c0);
  return;
}

