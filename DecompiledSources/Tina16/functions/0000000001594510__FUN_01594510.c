/* Ghidra address: 01594510 */
/* Ghidra symbol: FUN_01594510 */


short * FUN_01594510(byte *param_1)

{
  short *psVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined1 auStack_198 [32];
  short *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158 [256];
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined1 local_3c;
  byte local_3b [27];
  uint uVar5;
  
  local_160 = 0;
  local_168 = 0;
  local_170 = 0;
  local_50[0] = 0;
  local_58 = 0;
  uVar3 = (ulonglong)*param_1;
  if (0x12 < uVar3) {
    uVar3 = 0x13;
  }
  local_3c = (undefined1)uVar3;
  pbVar6 = local_3b;
  for (; param_1 = param_1 + 1, uVar3 != 0; uVar3 = uVar3 - 1) {
    *pbVar6 = *param_1;
    pbVar6 = pbVar6 + 1;
  }
  FUN_004154b0(&local_58,&local_3c,0);
  FUN_01594420(auStack_198,local_50,local_58);
  FUN_00415560(local_158,local_50[0],0xff);
  FUN_00415020(&local_3c,local_158,0x13);
  local_178 = (short *)0x0;
  uVar5 = 0;
  puVar7 = &DAT_0210eeb0;
  do {
    psVar1 = (short *)*puVar7;
    if (psVar1 != (short *)0x0) {
      FUN_004154b0(&local_160,&local_3c,0);
      FUN_004154b0(&local_170,psVar1 + 0x14,0);
      FUN_01594420(auStack_198,&local_168);
      iVar2 = FUN_00415a60(local_160,local_168);
      if (((iVar2 == 0) && (*psVar1 == 0x3d7a)) && (*(uint *)(psVar1 + 0x12) == uVar5)) break;
    }
    bVar4 = (char)uVar5 + 1;
    uVar5 = (uint)bVar4;
    puVar7 = puVar7 + 1;
    psVar1 = local_178;
  } while (bVar4 != 9);
  local_178 = psVar1;
  FUN_00414590(&local_170,3);
  FUN_00414590(&local_58,2);
  return local_178;
}

