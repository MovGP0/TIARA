/* Ghidra address: 00b7ea10 */
/* Ghidra symbol: FUN_00b7ea10 */


void FUN_00b7ea10(longlong param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    param_2 = (uint *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    uVar3 = FUN_0044d490(&PTR_FUN_00b6aec8,param_2,L"Cipher not initialized");
    FUN_004134c0(uVar3);
  }
  uVar2 = *param_2;
  uVar1 = param_2[1];
  iVar4 = 0xc;
  do {
    uVar1 = FUN_00b7e5a0(uVar1 - *(int *)(param_1 + 0x98 + (ulonglong)(iVar4 * 2 + 1) * 4),uVar2);
    uVar1 = uVar1 ^ uVar2;
    uVar2 = FUN_00b7e5a0(uVar2 - *(int *)(param_1 + 0x98 + (ulonglong)(uint)(iVar4 * 2) * 4),uVar1);
    uVar2 = uVar2 ^ uVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *param_3 = uVar2 - *(int *)(param_1 + 0x98);
  param_3[1] = uVar1 - *(int *)(param_1 + 0x9c);
  return;
}

