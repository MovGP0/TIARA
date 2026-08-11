/* Ghidra address: 00d23590 */
/* Ghidra symbol: FUN_00d23590 */


void FUN_00d23590(longlong param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 0x68);
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar1 = 0;
  do {
    if ((uVar1 & 3) == 0) {
      piVar6 = *(int **)(param_1 + 0x68);
    }
    uVar5 = uVar3 + *piVar6;
    uVar4 = uVar4 ^ *(uint *)(&DAT_01ebbdc8 + (ulonglong)(uVar5 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc1c8 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc5c8 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc9c8 + (ulonglong)(uVar5 >> 0x18) * 4);
    uVar5 = uVar4 + piVar6[1];
    uVar3 = uVar3 ^ *(uint *)(&DAT_01ebbdc8 + (ulonglong)(uVar5 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc1c8 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc5c8 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc9c8 + (ulonglong)(uVar5 >> 0x18) * 4);
    piVar6 = piVar6 + 2;
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0xc);
  piVar6 = (int *)(*(longlong *)(param_1 + 0x68) + 0x18);
  iVar2 = 4;
  do {
    uVar1 = uVar3 + piVar6[1];
    uVar4 = uVar4 ^ *(uint *)(&DAT_01ebbdc8 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc1c8 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc5c8 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc9c8 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar4 + *piVar6;
    uVar3 = uVar3 ^ *(uint *)(&DAT_01ebbdc8 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc1c8 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc5c8 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc9c8 + (ulonglong)(uVar1 >> 0x18) * 4);
    piVar6 = piVar6 + -2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *param_2 = uVar4;
  param_2[1] = uVar3;
  return;
}

