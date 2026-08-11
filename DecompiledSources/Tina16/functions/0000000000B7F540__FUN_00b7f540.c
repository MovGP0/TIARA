/* Ghidra address: 00b7f540 */
/* Ghidra symbol: FUN_00b7f540 */


void FUN_00b7f540(longlong param_1,int *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    param_2 = (int *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    uVar8 = FUN_0044d490(&PTR_FUN_00b6aec8,param_2,L"Cipher not initialized");
    FUN_004134c0(uVar8);
  }
  local_30 = param_2[1];
  iVar10 = 0x14;
  uVar9 = param_2[3];
  uVar2 = *param_2 - *(int *)(param_1 + 0x150);
  uVar3 = param_2[2] - *(int *)(param_1 + 0x154);
  do {
    local_2c = uVar3;
    local_34 = uVar2;
    uVar2 = local_30;
    local_30 = local_34;
    uVar4 = FUN_00b7f000(local_2c * (local_2c * 2 + 1),5);
    uVar5 = FUN_00b7f000(local_34 * (local_34 * 2 + 1),5);
    uVar6 = FUN_00b7f020(uVar2 - *(int *)(param_1 + 0xa8 + (ulonglong)(iVar10 * 2 + 1) * 4),uVar5);
    uVar7 = FUN_00b7f020(uVar9 - *(int *)(param_1 + 0xa8 + (ulonglong)(uint)(iVar10 * 2) * 4),uVar4)
    ;
    iVar10 = iVar10 + -1;
    uVar9 = local_2c;
    uVar2 = uVar7 ^ uVar5;
    uVar3 = uVar6 ^ uVar4;
  } while (iVar10 != 0);
  iVar10 = *(int *)(param_1 + 0xac);
  iVar1 = *(int *)(param_1 + 0xa8);
  *param_3 = uVar7 ^ uVar5;
  param_3[1] = local_34 - iVar1;
  param_3[2] = uVar6 ^ uVar4;
  param_3[3] = local_2c - iVar10;
  return;
}

