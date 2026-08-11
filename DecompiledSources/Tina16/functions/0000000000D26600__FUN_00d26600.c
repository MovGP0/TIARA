/* Ghidra address: 00d26600 */
/* Ghidra symbol: FUN_00d26600 */


void FUN_00d26600(longlong param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  lVar3 = *(longlong *)(param_1 + 0x68);
  lVar1 = lVar3 + 0xa0;
  local_24 = *param_2 ^ *(uint *)(lVar3 + 0x10);
  local_28 = param_2[1] ^ *(uint *)(lVar3 + 0x14);
  piVar5 = (int *)(lVar3 + 0x90);
  iVar9 = 8;
  local_20 = param_2[3] ^ *(uint *)(lVar3 + 0x1c);
  local_1c = param_2[2] ^ *(uint *)(lVar3 + 0x18);
  do {
    uVar6 = *(uint *)(lVar1 + (ulonglong)(byte)local_24 * 4) ^
            *(uint *)(lVar3 + 0x4a0 + (ulonglong)local_24._1_1_ * 4) ^
            *(uint *)(lVar3 + 0x8a0 + (ulonglong)local_24._2_1_ * 4) ^
            *(uint *)(lVar3 + 0xca0 + (ulonglong)local_24._3_1_ * 4);
    uVar7 = *(uint *)(lVar1 + (ulonglong)local_28._3_1_ * 4) ^
            *(uint *)(lVar3 + 0x4a0 + (ulonglong)(byte)local_28 * 4) ^
            *(uint *)(lVar3 + 0x8a0 + (ulonglong)local_28._1_1_ * 4) ^
            *(uint *)(lVar3 + 0xca0 + (ulonglong)local_28._2_1_ * 4);
    uVar2 = local_20 ^ uVar6 + uVar7 * 2 + piVar5[3];
    uVar6 = local_1c ^ uVar6 + uVar7 + piVar5[2];
    local_1c._0_1_ = (byte)uVar6;
    local_1c._1_1_ = (byte)(uVar6 >> 8);
    local_1c._2_1_ = (byte)(uVar6 >> 0x10);
    local_1c._3_1_ = (byte)(uVar6 >> 0x18);
    uVar7 = *(uint *)(lVar1 + (ulonglong)(byte)local_1c * 4) ^
            *(uint *)(lVar3 + 0x4a0 + (ulonglong)local_1c._1_1_ * 4) ^
            *(uint *)(lVar3 + 0x8a0 + (ulonglong)local_1c._2_1_ * 4) ^
            *(uint *)(lVar3 + 0xca0 + (ulonglong)local_1c._3_1_ * 4);
    local_20._3_1_ = (byte)(uVar2 >> 0x18);
    local_20._0_1_ = (byte)uVar2;
    local_20._1_1_ = (byte)(uVar2 >> 8);
    local_20._2_1_ = (byte)(uVar2 >> 0x10);
    uVar8 = *(uint *)(lVar1 + (ulonglong)local_20._3_1_ * 4) ^
            *(uint *)(lVar3 + 0x4a0 + (ulonglong)(byte)local_20 * 4) ^
            *(uint *)(lVar3 + 0x8a0 + (ulonglong)local_20._1_1_ * 4) ^
            *(uint *)(lVar3 + 0xca0 + (ulonglong)local_20._2_1_ * 4);
    local_28 = local_28 ^ uVar7 + uVar8 * 2 + piVar5[1];
    local_24 = local_24 ^ uVar7 + uVar8 + *piVar5;
    piVar5 = piVar5 + -4;
    iVar9 = iVar9 + -1;
    local_20 = uVar2;
    local_1c = uVar6;
  } while (iVar9 != 0);
  puVar4 = *(uint **)(param_1 + 0x68);
  *param_2 = uVar6 ^ *puVar4;
  param_2[1] = uVar2 ^ puVar4[1];
  param_2[2] = local_24 ^ puVar4[2];
  param_2[3] = local_28 ^ puVar4[3];
  return;
}

