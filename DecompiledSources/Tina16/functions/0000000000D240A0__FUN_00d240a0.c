/* Ghidra address: 00d240a0 */
/* Ghidra symbol: FUN_00d240a0 */


void FUN_00d240a0(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  short sVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int local_res18 [4];
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined8 local_38;
  undefined2 local_2c;
  short local_2a;
  
  local_res18[0] = param_3;
  local_40 = param_1;
  local_38 = param_4;
  FUN_00d21150(param_1,local_res18);
  puVar2 = (undefined2 *)local_40[0xd];
  FUN_00409a70(param_2,puVar2,(longlong)local_res18[0]);
  iVar4 = 0;
  do {
    puVar2[iVar4] = puVar2[iVar4] << 8 | (ushort)puVar2[iVar4] >> 8;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 8);
  uVar5 = 0;
  do {
    puVar2[(int)(uVar5 + 8)] =
         puVar2[(int)((uVar5 & 0xfffffff8) + (uVar5 + 1 & 7))] << 9 |
         (ushort)puVar2[(int)((uVar5 & 0xfffffff8) + (uVar5 + 2 & 7))] >> 7;
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0x28);
  iVar4 = 0x29;
  do {
    puVar2[iVar4 + 7] = puVar2[iVar4] << 9 | (ushort)puVar2[iVar4 + 1] >> 7;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x2d);
  local_2c = FUN_00d24000(auStack_68,*puVar2);
  local_2a = -puVar2[1];
  sVar1 = puVar2[2];
  uVar3 = FUN_00d24000(auStack_68,puVar2[3]);
  puVar2[0x67] = uVar3;
  puVar2[0x66] = -sVar1;
  puVar2[0x65] = local_2a;
  puVar2[100] = local_2c;
  puVar7 = puVar2 + 4;
  iVar4 = 8;
  puVar2 = puVar2 + 100;
  do {
    puVar6 = puVar2;
    local_2c = *puVar7;
    puVar6[-1] = puVar7[1];
    puVar6[-2] = local_2c;
    local_2c = FUN_00d24000(auStack_68,puVar7[2]);
    local_2a = -puVar7[3];
    sVar1 = puVar7[4];
    uVar3 = FUN_00d24000(auStack_68,puVar7[5]);
    puVar6[-3] = uVar3;
    puVar6[-4] = local_2a;
    puVar6[-5] = -sVar1;
    puVar6[-6] = local_2c;
    puVar7 = puVar7 + 6;
    iVar4 = iVar4 + -1;
    puVar2 = puVar6 + -6;
  } while (iVar4 != 0);
  local_2c = puVar6[-4];
  puVar6[-4] = puVar6[-5];
  puVar6[-5] = local_2c;
  (**(code **)(*local_40 + 0x40))(local_40,local_38);
  return;
}

