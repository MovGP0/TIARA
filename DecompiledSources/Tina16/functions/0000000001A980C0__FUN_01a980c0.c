/* Ghidra address: 01a980c0 */
/* Ghidra symbol: FUN_01a980c0 */


void FUN_01a980c0(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  
  local_48 = *param_2;
  local_40 = param_2[1];
  FUN_01a98210(param_1,&local_58);
  uVar3 = (int)local_48 - (int)local_40 >> 0x1f;
  uVar4 = local_58 - local_50 >> 0x1f;
  dVar5 = (double)(int)(((int)local_48 - (int)local_40 ^ uVar3) - uVar3) /
          (double)(int)((local_58 - local_50 ^ uVar4) - uVar4);
  uVar3 = local_48._4_4_ - local_40._4_4_ >> 0x1f;
  uVar4 = local_54 - local_4c >> 0x1f;
  dVar6 = (double)(int)((local_48._4_4_ - local_40._4_4_ ^ uVar3) - uVar3) /
          (double)(int)((local_54 - local_4c ^ uVar4) - uVar4);
  if (dVar5 < dVar6) {
    dVar5 = dVar6;
  }
  uVar3 = local_58 - local_50 >> 0x1f;
  uVar4 = local_54 - local_4c >> 0x1f;
  uVar1 = FUN_0040c770(dVar5 * (double)(int)((local_58 - local_50 ^ uVar3) - uVar3));
  local_60 = FUN_00b905e0(uVar1,1);
  iVar2 = ((int)local_48 + (int)local_40) - local_60;
  local_68 = iVar2 / 2;
  local_60 = local_68 + local_60;
  uVar1 = FUN_0040c770(dVar5 * (double)(int)((local_54 - local_4c ^ uVar4) - uVar4),
                       (longlong)iVar2 % 2 & 0xffffffff);
  local_5c = FUN_00b905e0(uVar1,1);
  local_64 = ((local_48._4_4_ + local_40._4_4_) - local_5c) / 2;
  local_5c = local_64 + local_5c;
  (**(code **)(*param_1 + 0x18))(param_1,&local_68);
  return;
}

