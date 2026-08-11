/* Ghidra address: 00d23b00 */
/* Ghidra symbol: FUN_00d23b00 */


void FUN_00d23b00(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  uVar3 = (**(code **)PTR_PTR_02005198)(*param_2);
  uVar3 = uVar3 ^ *(uint *)(lVar1 + 0x1044);
  uVar4 = (**(code **)PTR_PTR_02005198)(param_2[1]);
  iVar6 = 8;
  puVar2 = (uint *)(lVar1 + 0x1044);
  do {
    puVar7 = puVar2;
    uVar4 = uVar4 ^ puVar7[-1] ^
            (*(int *)(lVar1 + (ulonglong)(uVar3 >> 0x18) * 4) +
             *(int *)(lVar1 + 0x400 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
            *(uint *)(lVar1 + 0x800 + (ulonglong)(uVar3 >> 8 & 0xff) * 4)) +
            *(int *)(lVar1 + 0xc00 + (ulonglong)(uVar3 & 0xff) * 4);
    uVar3 = uVar3 ^ puVar7[-2] ^
            (*(int *)(lVar1 + (ulonglong)(uVar4 >> 0x18) * 4) +
             *(int *)(lVar1 + 0x400 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
            *(uint *)(lVar1 + 0x800 + (ulonglong)(uVar4 >> 8 & 0xff) * 4)) +
            *(int *)(lVar1 + 0xc00 + (ulonglong)(uVar4 & 0xff) * 4);
    iVar6 = iVar6 + -1;
    puVar2 = puVar7 + -2;
  } while (iVar6 != 0);
  uVar5 = (**(code **)PTR_PTR_02005198)(uVar4 ^ puVar7[-3]);
  *param_2 = uVar5;
  uVar5 = (**(code **)PTR_PTR_02005198)(uVar3);
  param_2[1] = uVar5;
  return;
}

