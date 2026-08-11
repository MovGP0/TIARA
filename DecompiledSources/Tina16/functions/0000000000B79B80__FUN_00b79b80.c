/* Ghidra address: 00b79b80 */
/* Ghidra symbol: FUN_00b79b80 */


void FUN_00b79b80(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint local_19c [40];
  undefined1 local_fc [28];
  uint local_e0 [39];
  uint local_44;
  uint local_40;
  uint local_3c [3];
  
  local_3c[0] = 0;
  uVar2 = (param_3 & 0xffffffff) / 8;
  FUN_0040d200(local_19c,0xa0,0);
  FUN_0040d200(local_fc,0xbc,0);
  FUN_00409a70(param_2,local_19c,uVar2);
  uVar2 = uVar2 / 4;
  FUN_00409a70(&DAT_01e8f5a4,local_fc,0x1c);
  uVar5 = 0;
  puVar4 = local_e0;
  do {
    uVar3 = FUN_00b797d0(local_e0[uVar5 - 7] ^ local_e0[uVar5 - 2]);
    *puVar4 = uVar3 ^ local_19c[(ulonglong)uVar5 % uVar2] ^ uVar5;
    uVar5 = uVar5 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar5 != 0x27);
  local_44 = (uint)uVar2;
  iVar7 = 7;
  do {
    iVar6 = 1;
    puVar4 = local_e0;
    do {
      puVar4 = puVar4 + 1;
      uVar5 = FUN_00b797d0(*puVar4 + *(int *)(&DAT_01e8eda4 +
                                             (ulonglong)(local_e0[iVar6 - 1] & 0x1ff) * 4),9);
      *puVar4 = uVar5;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x28);
    local_e0[0] = FUN_00b797d0(local_e0[0] +
                               *(int *)(&DAT_01e8eda4 + (ulonglong)(local_44 & 0x1ff) * 4));
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 0;
  puVar4 = local_e0;
  do {
    *(uint *)(param_1 + 0xa8 + ((ulonglong)(uint)(iVar7 * 7) % 0x28) * 4) = *puVar4;
    iVar7 = iVar7 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar7 != 0x28);
  uVar5 = 5;
  do {
    local_40 = *(uint *)(param_1 + 0xa8 + (ulonglong)uVar5 * 4);
    uVar1 = *(undefined4 *)(&DAT_01e8eda4 + (ulonglong)((local_40 & 3) + 0x109) * 4);
    uVar3 = *(uint *)(param_1 + 0xa8 + (ulonglong)(uVar5 + 3) * 4);
    local_40 = local_40 | 3;
    FUN_00b79a80(&local_40,local_3c);
    uVar3 = FUN_00b797d0(uVar1,uVar3 & 0x1f);
    *(uint *)(param_1 + 0xa8 + (ulonglong)uVar5 * 4) = local_40 ^ uVar3 & local_3c[0];
    uVar5 = uVar5 + 2;
  } while (uVar5 < 0x25);
  return;
}

