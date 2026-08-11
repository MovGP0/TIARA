/* Ghidra address: 00a3f870 */
/* Ghidra symbol: FUN_00a3f870 */


void FUN_00a3f870(longlong param_1,byte param_2,byte param_3,byte param_4,undefined1 *param_5,
                 undefined1 *param_6,undefined1 *param_7)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  uVar5 = (uint)(param_2 >> 3) | (uint)(param_3 & 0xf8) * 4 | (uint)(param_4 & 0xf8) << 7;
  if (*(short *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar5 * 2) == -1) {
    iVar8 = 0x30000;
    uVar4 = 0;
    iVar9 = *(int *)(param_1 + 8);
    uVar3 = 0;
    if (-1 < iVar9 + -1) {
      do {
        pbVar1 = (byte *)(*(longlong *)(param_1 + 0x10) + (longlong)(int)uVar3 * 4);
        uVar7 = (int)((uint)*pbVar1 - (uint)param_2) >> 0x1f;
        uVar10 = (int)((uint)pbVar1[1] - (uint)param_3) >> 0x1f;
        uVar11 = (int)((uint)pbVar1[2] - (uint)param_4) >> 0x1f;
        iVar6 = (((uint)*pbVar1 - (uint)param_2 ^ uVar7) - uVar7) +
                (((uint)pbVar1[1] - (uint)param_3 ^ uVar10) - uVar10) +
                (((uint)pbVar1[2] - (uint)param_4 ^ uVar11) - uVar11);
        if (iVar6 < iVar8) {
          uVar4 = (ulonglong)uVar3;
          iVar8 = iVar6;
        }
        uVar3 = uVar3 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    *(short *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar5 * 2) = (short)uVar4;
  }
  else {
    uVar4 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar5 * 2);
  }
  puVar2 = (undefined1 *)(*(longlong *)(param_1 + 0x10) + (uVar4 & 0xff) * 4);
  *param_5 = *puVar2;
  *param_6 = puVar2[1];
  *param_7 = puVar2[2];
  return;
}

