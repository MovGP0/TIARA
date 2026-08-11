/* Ghidra address: 00b7de50 */
/* Ghidra symbol: FUN_00b7de50 */


void FUN_00b7de50(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  short sVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    param_2 = (undefined4 *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    uVar3 = FUN_0044d490(&PTR_FUN_00b6aec8,param_2,L"Cipher not initialized");
    FUN_004134c0(uVar3);
  }
  local_30 = *param_2;
  local_2c = param_2[1];
  iVar8 = 0xf;
  do {
    uVar1 = iVar8 * 4;
    sVar2 = FUN_00b7d950(local_2c._2_2_,5);
    uVar4 = ((sVar2 - ((ushort)local_30 & ~(ushort)local_2c)) - (local_30._2_2_ & (ushort)local_2c))
            - *(short *)(param_1 + 0x98 + (ulonglong)(uVar1 + 3) * 2);
    sVar2 = FUN_00b7d950((ushort)local_2c,3);
    uVar5 = ((sVar2 - (uVar4 & ~local_30._2_2_)) - ((ushort)local_30 & local_30._2_2_)) -
            *(short *)(param_1 + 0x98 + (ulonglong)(uVar1 + 2) * 2);
    local_2c = CONCAT22(uVar4,uVar5);
    sVar2 = FUN_00b7d950(local_30._2_2_,2);
    uVar6 = ((sVar2 - (uVar5 & ~(ushort)local_30)) - (uVar4 & (ushort)local_30)) -
            *(short *)(param_1 + 0x98 + (ulonglong)(uVar1 + 1) * 2);
    sVar2 = FUN_00b7d950((ushort)local_30,1);
    uVar7 = ((sVar2 - (uVar6 & ~uVar4)) - (uVar5 & uVar4)) -
            *(short *)(param_1 + 0x98 + (ulonglong)uVar1 * 2);
    local_30 = CONCAT22(uVar6,uVar7);
    if ((iVar8 == 5) || (iVar8 == 0xb)) {
      uVar4 = uVar4 - *(short *)(param_1 + 0x98 + (ulonglong)(uVar5 & 0x3f) * 2);
      local_2c = CONCAT22(uVar4,uVar5 - *(short *)(param_1 + 0x98 + (ulonglong)(uVar6 & 0x3f) * 2));
      local_30 = CONCAT22(uVar6 - *(short *)(param_1 + 0x98 + (ulonglong)(uVar7 & 0x3f) * 2),
                          uVar7 - *(short *)(param_1 + 0x98 + (ulonglong)(uVar4 & 0x3f) * 2));
    }
    iVar8 = iVar8 + -1;
  } while (iVar8 != -1);
  *param_3 = local_30;
  param_3[1] = local_2c;
  return;
}

