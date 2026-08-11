/* Ghidra address: 00d1b010 */
/* Ghidra symbol: FUN_00d1b010 */


void FUN_00d1b010(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  FUN_00409a70(param_2,&local_98,0x40);
  local_40 = *(undefined8 *)(param_1 + 0x6c);
  local_48 = *(undefined8 *)(param_1 + 0x74);
  local_50 = *(undefined8 *)(param_1 + 0x7c);
  iVar3 = *(int *)(param_1 + 0x98);
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      if (1 < iVar2) {
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 ^ local_98);
      }
      local_48 = CONCAT44(local_48._4_4_ ^ local_84 ^ local_6c,(uint)local_48 ^ local_88 ^ local_70)
      ;
      local_50 = CONCAT44(local_50._4_4_ ^ local_94 ^ local_7c ^ local_64,
                          (uint)local_50 ^ local_80 ^ local_68);
      local_40 = CONCAT44(local_40._4_4_ ^ local_8c ^ local_74 ^ local_5c,
                          (uint)local_40 ^ local_90 ^ local_78 ^ local_60);
      uVar1 = local_40;
      local_40 = local_50;
      local_50 = local_48;
      local_48 = uVar1;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) ^ (uint)local_40;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) ^ local_40._4_4_;
  *(undefined8 *)(param_1 + 0x74) = local_48;
  *(undefined8 *)(param_1 + 0x7c) = local_50;
  return;
}

