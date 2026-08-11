/* Ghidra address: 00b7f3a0 */
/* Ghidra symbol: FUN_00b7f3a0 */


void FUN_00b7f3a0(longlong param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    param_2 = (uint *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    uVar5 = FUN_0044d490(&PTR_FUN_00b6aec8,param_2,L"Cipher not initialized");
    FUN_004134c0(uVar5);
  }
  local_34 = *param_2;
  iVar7 = 1;
  uVar4 = param_2[3] + *(int *)(param_1 + 0xac);
  uVar1 = param_2[1] + *(int *)(param_1 + 0xa8);
  local_2c = param_2[2];
  do {
    local_30 = uVar1;
    uVar6 = uVar4;
    uVar1 = FUN_00b7f000(local_30 * (local_30 * 2 + 1),5);
    uVar2 = FUN_00b7f000(uVar6 * (uVar6 * 2 + 1),5);
    iVar3 = FUN_00b7f000(local_34 ^ uVar1,uVar2);
    uVar4 = iVar3 + *(int *)(param_1 + 0xa8 + (ulonglong)(uint)(iVar7 * 2) * 4);
    iVar3 = FUN_00b7f000(local_2c ^ uVar2,uVar1);
    uVar1 = iVar3 + *(int *)(param_1 + 0xa8 + (ulonglong)(iVar7 * 2 + 1) * 4);
    local_34 = local_30;
    iVar7 = iVar7 + 1;
    local_2c = uVar6;
  } while (iVar7 != 0x15);
  iVar7 = *(int *)(param_1 + 0x154);
  *param_3 = local_30 + *(int *)(param_1 + 0x150);
  param_3[1] = uVar1;
  param_3[2] = uVar6 + iVar7;
  param_3[3] = uVar4;
  return;
}

