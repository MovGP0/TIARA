/* Ghidra address: 01521c50 */
/* Ghidra symbol: FUN_01521c50 */


ushort * FUN_01521c50(ushort *param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  ushort *puVar4;
  ushort uVar5;
  uint uVar6;
  short local_3e;
  
  FUN_004095f0(*(undefined8 *)(param_1 + 0xce2c));
  param_1[0xce2c] = 0;
  param_1[0xce2d] = 0;
  param_1[0xce2e] = 0;
  param_1[0xce2f] = 0;
  uVar5 = param_1[0xce30];
  if (uVar5 != 0) {
    puVar4 = param_1 + 0xce34;
    do {
      FUN_004095f0(*(undefined8 *)puVar4);
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4 = puVar4 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (*(longlong *)(param_1 + 0xd2e4) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0xd2e4));
    param_1[0xd2e4] = 0;
    param_1[0xd2e5] = 0;
    param_1[0xd2e6] = 0;
    param_1[0xd2e7] = 0;
  }
  if (*(longlong *)(param_1 + 0xd2e8) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0xd2e8));
    param_1[0xd2e8] = 0;
    param_1[0xd2e9] = 0;
    param_1[0xd2ea] = 0;
    param_1[0xd2eb] = 0;
  }
  if (*PTR_DAT_02002b78 != '\0') {
    uVar2 = (**(code **)*DAT_0210ed38)(DAT_0210ed38);
    FUN_00418590(uVar2,&DAT_01cf1390);
  }
  iVar3 = 1;
  for (uVar6 = (uint)param_1[8]; uVar6 != 0; uVar6 = uVar6 - 1) {
    FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 0xce20) + -8 + (longlong)iVar3 * 8));
    iVar3 = iVar3 + 1;
  }
  FUN_004095f0(*(undefined8 *)(param_1 + 0xce20),(ulonglong)param_1[8] << 3);
  iVar3 = 1;
  for (uVar6 = (uint)*param_1; uVar6 != 0; uVar6 = uVar6 - 1) {
    puVar1 = *(uint **)(*(longlong *)(param_1 + 0xce1c) + -8 + (longlong)iVar3 * 8);
    local_3e = (short)*puVar1;
    if (local_3e == 0) {
      FUN_004095f0(puVar1);
    }
    else {
      FUN_004095f0(puVar1,(*puVar1 & 0xffff) * 6);
    }
    iVar3 = iVar3 + 1;
  }
  FUN_004095f0(*(undefined8 *)(param_1 + 0xce1c),(ulonglong)*param_1 << 3);
  FUN_00410f20(*(undefined8 *)(param_1 + 0xce24));
  FUN_00410f20(*(undefined8 *)PTR_DAT_02003c40);
  FUN_01aad710(param_1);
  return param_1;
}

