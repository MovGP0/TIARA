/* Ghidra address: 00b7dc30 */
/* Ghidra symbol: FUN_00b7dc30 */


void FUN_00b7dc30(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    param_2 = (undefined4 *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    uVar6 = FUN_0044d490(&PTR_FUN_00b6aec8,param_2,L"Cipher not initialized");
    FUN_004134c0(uVar6);
  }
  local_30 = *param_2;
  local_2c = param_2[1];
  iVar7 = 0;
  do {
    uVar1 = iVar7 * 4;
    uVar2 = FUN_00b7d930((short)local_30 + (local_30._2_2_ & ~local_2c._2_2_) +
                         ((ushort)local_2c & local_2c._2_2_) +
                         *(short *)(param_1 + 0x98 + (ulonglong)uVar1 * 2),1);
    uVar3 = FUN_00b7d930(local_30._2_2_ + ((ushort)local_2c & ~uVar2) + (local_2c._2_2_ & uVar2) +
                         *(short *)(param_1 + 0x98 + (ulonglong)(uVar1 + 1) * 2),2);
    local_30 = CONCAT22(uVar3,uVar2);
    uVar4 = FUN_00b7d930((ushort)local_2c + (local_2c._2_2_ & ~uVar3) + (uVar2 & uVar3) +
                         *(short *)(param_1 + 0x98 + (ulonglong)(uVar1 + 2) * 2),3);
    uVar5 = FUN_00b7d930(local_2c._2_2_ + (uVar2 & ~uVar4) + (uVar3 & uVar4) +
                         *(short *)(param_1 + 0x98 + (ulonglong)(uVar1 + 3) * 2),5);
    local_2c = CONCAT22(uVar5,uVar4);
    if ((iVar7 == 4) || (iVar7 == 10)) {
      uVar2 = uVar2 + *(short *)(param_1 + 0x98 + (ulonglong)(uVar5 & 0x3f) * 2);
      uVar3 = uVar3 + *(short *)(param_1 + 0x98 + (ulonglong)(uVar2 & 0x3f) * 2);
      local_30 = CONCAT22(uVar3,uVar2);
      uVar4 = uVar4 + *(short *)(param_1 + 0x98 + (ulonglong)(uVar3 & 0x3f) * 2);
      local_2c = CONCAT22(uVar5 + *(short *)(param_1 + 0x98 + (ulonglong)(uVar4 & 0x3f) * 2),uVar4);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x10);
  *param_3 = local_30;
  param_3[1] = local_2c;
  return;
}

