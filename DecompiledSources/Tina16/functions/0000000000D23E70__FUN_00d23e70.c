/* Ghidra address: 00d23e70 */
/* Ghidra symbol: FUN_00d23e70 */


void FUN_00d23e70(undefined8 param_1,undefined4 *param_2,undefined2 *param_3)

{
  ushort uVar1;
  short sVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined2 *local_50;
  undefined4 local_3c;
  
  uVar5 = (**(code **)PTR_PTR_02005198)(*param_2);
  uVar7 = uVar5 >> 0x10;
  uVar5 = uVar5 & 0xffff;
  uVar6 = (**(code **)PTR_PTR_02005198)(param_2[1]);
  uVar11 = uVar6 >> 0x10;
  uVar6 = uVar6 & 0xffff;
  local_3c = 0;
  puVar3 = param_3;
  do {
    local_50 = puVar3;
    uVar7 = FUN_00d23e60(uVar7,*local_50);
    uVar1 = local_50[1];
    uVar12 = uVar11 + (ushort)local_50[2];
    uVar6 = FUN_00d23e60(uVar6,local_50[3]);
    iVar8 = FUN_00d23e60(uVar12 ^ uVar7,local_50[4]);
    uVar9 = FUN_00d23e60((uVar5 + uVar1 ^ uVar6) + iVar8,local_50[5]);
    uVar7 = uVar7 ^ uVar9;
    uVar6 = uVar6 ^ iVar8 + uVar9;
    uVar11 = iVar8 + uVar9 ^ uVar5 + uVar1;
    uVar5 = uVar12 ^ uVar9;
    local_3c = local_3c + 1;
    puVar3 = local_50 + 6;
  } while (local_3c != 8);
  uVar4 = FUN_00d23e60(uVar7,local_50[6]);
  local_3c = CONCAT22(uVar4,(short)uVar11 + local_50[7]);
  uVar10 = (**(code **)PTR_PTR_02005198)(local_3c);
  *param_2 = uVar10;
  sVar2 = local_50[8];
  uVar4 = FUN_00d23e60(uVar6,local_50[9]);
  local_3c = CONCAT22((short)uVar5 + sVar2,uVar4);
  uVar10 = (**(code **)PTR_PTR_02005198)(local_3c);
  param_2[1] = uVar10;
  return;
}

