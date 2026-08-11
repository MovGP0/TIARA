/* Ghidra address: 00d25e40 */
/* Ghidra symbol: FUN_00d25e40 */


void FUN_00d25e40(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint local_34;
  uint local_30;
  
  lVar3 = *(longlong *)(param_1 + 0x68);
  uVar5 = *(uint *)(lVar3 + 0x3c);
  uVar1 = *(uint *)(lVar3 + 0x40);
  uVar2 = *(uint *)(lVar3 + 0x44);
  puVar11 = (uint *)(lVar3 + 0x48);
  local_34 = FUN_00cd7330(param_2[2]);
  local_30 = FUN_00cd7330(param_2[1]);
  uVar4 = FUN_00cd7330(*param_2);
  iVar8 = 0xb;
  do {
    local_34 = local_34 ^ uVar5;
    uVar7 = local_34 ^ *puVar11 << 0x10;
    local_30 = local_30 ^ uVar1;
    uVar4 = uVar4 ^ uVar2 ^ *puVar11;
    puVar11 = puVar11 + 1;
    uVar9 = uVar7 ^ uVar7 >> 0x10 ^ local_30 << 0x10 ^ local_30 >> 0x10 ^ uVar4 << 0x10 ^
            local_30 >> 0x18 ^ uVar4 << 8 ^ uVar4 >> 8 ^ local_34 << 0x18 ^ uVar4 >> 0x10 ^
            local_34 << 0x10 ^ uVar4 >> 0x18 ^ uVar7 << 8;
    uVar10 = local_30 ^ local_30 >> 0x10 ^ uVar4 << 0x10 ^ uVar4 >> 0x10 ^ local_34 << 0x10 ^
             uVar4 >> 0x18 ^ uVar7 << 8 ^ uVar7 >> 8 ^ local_30 << 0x18 ^ uVar7 >> 0x10 ^
             local_30 << 0x10 ^ uVar7 >> 0x18 ^ local_30 << 8;
    uVar4 = uVar4 ^ uVar4 >> 0x10 ^ local_34 << 0x10 ^ uVar7 >> 0x10 ^ local_30 << 0x10 ^
            uVar7 >> 0x18 ^ local_30 << 8 ^ local_30 >> 8 ^ uVar4 << 0x18 ^ local_30 >> 0x10 ^
            uVar4 << 0x10 ^ local_30 >> 0x18 ^ uVar4 << 8;
    local_34 = uVar9 ^ (uVar10 | ~uVar4);
    local_30 = uVar10 ^ (uVar4 | ~uVar9);
    uVar4 = uVar4 ^ (uVar9 | ~uVar10);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  local_34 = local_34 ^ uVar5;
  uVar7 = local_34 ^ *puVar11 << 0x10;
  local_30 = local_30 ^ uVar1;
  uVar5 = uVar4 ^ uVar2 ^ *puVar11;
  uVar6 = FUN_00cd7330(uVar7 ^ uVar7 >> 0x10 ^ local_30 << 0x10 ^ local_30 >> 0x10 ^ uVar5 << 0x10 ^
                       local_30 >> 0x18 ^ uVar5 << 8 ^ uVar5 >> 8 ^ local_34 << 0x18 ^ uVar5 >> 0x10
                       ^ local_34 << 0x10 ^ uVar5 >> 0x18 ^ uVar7 << 8);
  param_2[2] = uVar6;
  uVar6 = FUN_00cd7330(local_30 ^ local_30 >> 0x10 ^ uVar5 << 0x10 ^ uVar5 >> 0x10 ^
                       local_34 << 0x10 ^ uVar5 >> 0x18 ^ uVar7 << 8 ^ uVar7 >> 8 ^ local_30 << 0x18
                       ^ uVar7 >> 0x10 ^ local_30 << 0x10 ^ uVar7 >> 0x18 ^ local_30 << 8);
  param_2[1] = uVar6;
  uVar6 = FUN_00cd7330(uVar5 ^ uVar5 >> 0x10 ^ local_34 << 0x10 ^ uVar7 >> 0x10 ^ local_30 << 0x10 ^
                       uVar7 >> 0x18 ^ local_30 << 8 ^ local_30 >> 8 ^ uVar5 << 0x18 ^
                       local_30 >> 0x10 ^ uVar5 << 0x10 ^ local_30 >> 0x18 ^ uVar5 << 8);
  *param_2 = uVar6;
  return;
}

