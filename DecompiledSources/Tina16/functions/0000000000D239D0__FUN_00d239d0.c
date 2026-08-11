/* Ghidra address: 00d239d0 */
/* Ghidra symbol: FUN_00d239d0 */


void FUN_00d239d0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  uVar2 = (**(code **)PTR_PTR_02005198)(*param_2);
  uVar2 = uVar2 ^ *(uint *)(lVar1 + 0x1000);
  puVar6 = (uint *)(lVar1 + 0x1004);
  uVar3 = (**(code **)PTR_PTR_02005198)(param_2[1]);
  iVar5 = 8;
  do {
    uVar3 = uVar3 ^ *puVar6 ^
            (*(int *)(lVar1 + (ulonglong)(uVar2 >> 0x18) * 4) +
             *(int *)(lVar1 + 0x400 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
            *(uint *)(lVar1 + 0x800 + (ulonglong)(uVar2 >> 8 & 0xff) * 4)) +
            *(int *)(lVar1 + 0xc00 + (ulonglong)(uVar2 & 0xff) * 4);
    uVar2 = uVar2 ^ puVar6[1] ^
            (*(int *)(lVar1 + (ulonglong)(uVar3 >> 0x18) * 4) +
             *(int *)(lVar1 + 0x400 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
            *(uint *)(lVar1 + 0x800 + (ulonglong)(uVar3 >> 8 & 0xff) * 4)) +
            *(int *)(lVar1 + 0xc00 + (ulonglong)(uVar3 & 0xff) * 4);
    puVar6 = puVar6 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar4 = (**(code **)PTR_PTR_02005198)(uVar3 ^ *puVar6);
  *param_2 = uVar4;
  uVar4 = (**(code **)PTR_PTR_02005198)(uVar2);
  param_2[1] = uVar4;
  return;
}

