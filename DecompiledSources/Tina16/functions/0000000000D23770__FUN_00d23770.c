/* Ghidra address: 00d23770 */
/* Ghidra symbol: FUN_00d23770 */


void FUN_00d23770(longlong param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  piVar6 = *(int **)(param_1 + 0x68);
  iVar1 = 4;
  do {
    uVar4 = uVar2 + *piVar6;
    uVar3 = uVar3 ^ *(uint *)(&DAT_01ebbdc8 + (ulonglong)(uVar4 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc1c8 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc5c8 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc9c8 + (ulonglong)(uVar4 >> 0x18) * 4);
    uVar4 = uVar3 + piVar6[1];
    uVar2 = uVar2 ^ *(uint *)(&DAT_01ebbdc8 + (ulonglong)(uVar4 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc1c8 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc5c8 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc9c8 + (ulonglong)(uVar4 >> 0x18) * 4);
    piVar6 = piVar6 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uVar4 = 0;
  do {
    if ((uVar4 & 3) == 0) {
      piVar6 = (int *)(*(longlong *)(param_1 + 0x68) + 0x18);
    }
    uVar5 = uVar2 + piVar6[1];
    uVar3 = uVar3 ^ *(uint *)(&DAT_01ebbdc8 + (ulonglong)(uVar5 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc1c8 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc5c8 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc9c8 + (ulonglong)(uVar5 >> 0x18) * 4);
    uVar5 = uVar3 + *piVar6;
    uVar2 = uVar2 ^ *(uint *)(&DAT_01ebbdc8 + (ulonglong)(uVar5 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc1c8 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc5c8 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebc9c8 + (ulonglong)(uVar5 >> 0x18) * 4);
    piVar6 = piVar6 + -2;
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0xc);
  *param_2 = uVar3;
  param_2[1] = uVar2;
  return;
}

