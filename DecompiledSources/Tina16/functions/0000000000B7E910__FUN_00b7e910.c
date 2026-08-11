/* Ghidra address: 00b7e910 */
/* Ghidra symbol: FUN_00b7e910 */


void FUN_00b7e910(longlong param_1,int *param_2,uint *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    param_2 = (int *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    uVar2 = FUN_0044d490(&PTR_FUN_00b6aec8,param_2,L"Cipher not initialized");
    FUN_004134c0(uVar2);
  }
  uVar3 = *param_2 + *(int *)(param_1 + 0x98);
  uVar4 = param_2[1] + *(int *)(param_1 + 0x9c);
  iVar5 = 1;
  do {
    iVar1 = FUN_00b7e580(uVar3 ^ uVar4,uVar4);
    uVar3 = iVar1 + *(int *)(param_1 + 0x98 + (ulonglong)(uint)(iVar5 * 2) * 4);
    iVar1 = FUN_00b7e580(uVar4 ^ uVar3,uVar3);
    uVar4 = iVar1 + *(int *)(param_1 + 0x98 + (ulonglong)(iVar5 * 2 + 1) * 4);
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0xd);
  *param_3 = uVar3;
  param_3[1] = uVar4;
  return;
}

