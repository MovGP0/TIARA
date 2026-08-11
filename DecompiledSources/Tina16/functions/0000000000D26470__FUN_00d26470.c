/* Ghidra address: 00d26470 */
/* Ghidra symbol: FUN_00d26470 */


void FUN_00d26470(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar2 = *(uint **)(param_1 + 0x68);
  local_1c = *param_2 ^ *puVar2;
  local_20 = param_2[1] ^ puVar2[1];
  puVar4 = puVar2 + 8;
  iVar8 = 8;
  local_28 = param_2[3] ^ puVar2[3];
  local_24 = param_2[2] ^ puVar2[2];
  do {
    uVar5 = puVar2[(ulonglong)(byte)local_1c + 0x28] ^ puVar2[(ulonglong)local_1c._1_1_ + 0x128] ^
            puVar2[(ulonglong)local_1c._2_1_ + 0x228] ^ puVar2[(ulonglong)local_1c._3_1_ + 0x328];
    uVar6 = puVar2[(ulonglong)(byte)local_20 + 0x128] ^ puVar2[(ulonglong)local_20._1_1_ + 0x228] ^
            puVar2[(ulonglong)local_20._2_1_ + 0x328] ^ puVar2[(ulonglong)local_20._3_1_ + 0x28];
    uVar1 = local_24 ^ uVar5 + uVar6 + *puVar4;
    uVar5 = local_28 ^ uVar5 + uVar6 * 2 + puVar4[1];
    local_24._0_1_ = (byte)uVar1;
    local_24._1_1_ = (byte)(uVar1 >> 8);
    local_24._2_1_ = (byte)(uVar1 >> 0x10);
    local_24._3_1_ = (byte)(uVar1 >> 0x18);
    uVar6 = puVar2[(ulonglong)(byte)local_24 + 0x28] ^ puVar2[(ulonglong)local_24._1_1_ + 0x128] ^
            puVar2[(ulonglong)local_24._2_1_ + 0x228] ^ puVar2[(ulonglong)local_24._3_1_ + 0x328];
    local_28._0_1_ = (byte)uVar5;
    local_28._1_1_ = (byte)(uVar5 >> 8);
    local_28._2_1_ = (byte)(uVar5 >> 0x10);
    local_28._3_1_ = (byte)(uVar5 >> 0x18);
    uVar7 = puVar2[(ulonglong)(byte)local_28 + 0x128] ^ puVar2[(ulonglong)local_28._1_1_ + 0x228] ^
            puVar2[(ulonglong)local_28._2_1_ + 0x328] ^ puVar2[(ulonglong)local_28._3_1_ + 0x28];
    local_1c = local_1c ^ uVar6 + uVar7 + puVar4[2];
    local_20 = local_20 ^ uVar6 + uVar7 * 2 + puVar4[3];
    puVar4 = puVar4 + 4;
    iVar8 = iVar8 + -1;
    local_28 = uVar5;
    local_24 = uVar1;
  } while (iVar8 != 0);
  lVar3 = *(longlong *)(param_1 + 0x68);
  *param_2 = uVar1 ^ *(uint *)(lVar3 + 0x10);
  param_2[1] = uVar5 ^ *(uint *)(lVar3 + 0x14);
  param_2[2] = local_1c ^ *(uint *)(lVar3 + 0x18);
  param_2[3] = local_20 ^ *(uint *)(lVar3 + 0x1c);
  return;
}

