/* Ghidra address: 00b74f00 */
/* Ghidra symbol: FUN_00b74f00 */


void FUN_00b74f00(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int local_88 [4];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68 [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48 [4];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  FUN_0040d200(local_48,0x20,0);
  FUN_00409a70(param_2,local_48,(param_3 & 0xffffffff) / 8);
  iVar6 = 0x5a827999;
  iVar7 = 0x13;
  iVar5 = 8;
  puVar2 = local_48;
  do {
    uVar1 = *puVar2;
    *puVar2 = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
    puVar2 = puVar2 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar8 = 0;
  do {
    iVar5 = 8;
    piVar3 = local_88;
    piVar4 = local_68;
    do {
      *piVar3 = iVar6;
      iVar6 = iVar6 + 0x6ed9eba1;
      *piVar4 = iVar7;
      iVar7 = iVar7 + 0x11;
      piVar4 = piVar4 + 1;
      piVar3 = piVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    uVar1 = FUN_00b74b10(local_2c,local_68[0],local_88[0]);
    local_30 = local_30 ^ uVar1;
    uVar1 = FUN_00b74b90(local_30,local_68[1],local_88[1]);
    local_34 = local_34 ^ uVar1;
    uVar1 = FUN_00b74c10(local_34,local_68[2],local_88[2]);
    local_38 = local_38 ^ uVar1;
    uVar1 = FUN_00b74b10(local_38,local_68[3],local_88[3]);
    local_48[3] = local_48[3] ^ uVar1;
    uVar1 = FUN_00b74b90(local_48[3],local_58,local_78);
    local_48[2] = local_48[2] ^ uVar1;
    uVar1 = FUN_00b74c10(local_48[2],local_54,local_74);
    local_48[1] = local_48[1] ^ uVar1;
    uVar1 = FUN_00b74b10(local_48[1],local_50,local_70);
    local_48[0] = local_48[0] ^ uVar1;
    uVar1 = FUN_00b74b90(local_48[0],local_4c,local_6c);
    local_2c = local_2c ^ uVar1;
    iVar5 = 8;
    piVar3 = local_88;
    piVar4 = local_68;
    do {
      *piVar3 = iVar6;
      iVar6 = iVar6 + 0x6ed9eba1;
      *piVar4 = iVar7;
      iVar7 = iVar7 + 0x11;
      piVar4 = piVar4 + 1;
      piVar3 = piVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    uVar1 = FUN_00b74b10(local_2c,local_68[0],local_88[0]);
    local_30 = local_30 ^ uVar1;
    uVar1 = FUN_00b74b90(local_30,local_68[1],local_88[1]);
    local_34 = local_34 ^ uVar1;
    uVar1 = FUN_00b74c10(local_34,local_68[2],local_88[2]);
    local_38 = local_38 ^ uVar1;
    uVar1 = FUN_00b74b10(local_38,local_68[3],local_88[3]);
    local_48[3] = local_48[3] ^ uVar1;
    uVar1 = FUN_00b74b90(local_48[3],local_58,local_78);
    local_48[2] = local_48[2] ^ uVar1;
    uVar1 = FUN_00b74c10(local_48[2],local_54,local_74);
    local_48[1] = local_48[1] ^ uVar1;
    uVar1 = FUN_00b74b10(local_48[1],local_50,local_70);
    local_48[0] = local_48[0] ^ uVar1;
    uVar1 = FUN_00b74b90(local_48[0],local_4c,local_6c);
    local_2c = local_2c ^ uVar1;
    *(uint *)(param_1 + 0xa8 + uVar8 * 0x10) = local_48[0] & 0x1f;
    *(uint *)(param_1 + 0xac + uVar8 * 0x10) = local_48[2] & 0x1f;
    *(uint *)(param_1 + 0xb0 + uVar8 * 0x10) = local_38 & 0x1f;
    *(uint *)(param_1 + 0xb4 + uVar8 * 0x10) = local_30 & 0x1f;
    *(uint *)(param_1 + 0x168 + uVar8 * 0x10) = local_2c;
    *(uint *)(param_1 + 0x16c + uVar8 * 0x10) = local_34;
    *(uint *)(param_1 + 0x170 + uVar8 * 0x10) = local_48[3];
    *(uint *)(param_1 + 0x174 + uVar8 * 0x10) = local_48[1];
    uVar1 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar1;
  } while (uVar1 != 0xc);
  FUN_0040d200(local_48,0x20,0xff);
  return;
}

