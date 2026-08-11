/* Ghidra address: 00d28250 */
/* Ghidra symbol: FUN_00d28250 */


void FUN_00d28250(longlong param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  puVar2 = *(uint **)(param_1 + 0x68);
  uVar8 = param_2[3] ^ puVar2[3];
  iVar6 = 7;
  puVar1 = puVar2 + 4;
  uVar3 = *param_2 ^ *puVar2;
  uVar4 = param_2[1] ^ puVar2[1];
  uVar7 = param_2[2] ^ puVar2[2];
  do {
    puVar2 = puVar1;
    uVar9 = *(uint *)(&DAT_01ec8850 + (ulonglong)(uVar3 & 0xff) * 4) ^
            *(uint *)(&DAT_01ec8c50 + (ulonglong)(uVar4 & 0xff) * 4) ^
            *(uint *)(&DAT_01ec9050 + (ulonglong)(uVar7 & 0xff) * 4) ^
            *(uint *)(&DAT_01ec9450 + (ulonglong)(uVar8 & 0xff) * 4) ^ *puVar2;
    uVar10 = *(uint *)(&DAT_01ec8850 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_01ec8c50 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_01ec9050 + (ulonglong)(uVar7 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_01ec9450 + (ulonglong)(uVar8 >> 8 & 0xff) * 4) ^ puVar2[1];
    uVar5 = *(uint *)(&DAT_01ec8850 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01ec8c50 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01ec9050 + (ulonglong)(uVar7 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01ec9450 + (ulonglong)(uVar8 >> 0x10 & 0xff) * 4) ^ puVar2[2];
    uVar8 = *(uint *)(&DAT_01ec8850 + (ulonglong)(uVar3 >> 0x18) * 4) ^
            *(uint *)(&DAT_01ec8c50 + (ulonglong)(uVar4 >> 0x18) * 4) ^
            *(uint *)(&DAT_01ec9050 + (ulonglong)(uVar7 >> 0x18) * 4) ^
            *(uint *)(&DAT_01ec9450 + (ulonglong)(uVar8 >> 0x18) * 4) ^ puVar2[3];
    iVar6 = iVar6 + -1;
    puVar1 = puVar2 + 4;
    uVar3 = uVar9;
    uVar4 = uVar10;
    uVar7 = uVar5;
  } while (iVar6 != 0);
  *param_2 = CONCAT13((&DAT_01ec8250)[uVar8 & 0xff],
                      CONCAT12((&DAT_01ec8250)[uVar5 & 0xff],
                               CONCAT11((&DAT_01ec8250)[uVar10 & 0xff],(&DAT_01ec8250)[uVar9 & 0xff]
                                       ))) ^ puVar2[4];
  param_2[1] = CONCAT13((&DAT_01ec8250)[uVar8 >> 8 & 0xff],
                        CONCAT12((&DAT_01ec8250)[uVar5 >> 8 & 0xff],
                                 CONCAT11((&DAT_01ec8250)[uVar10 >> 8 & 0xff],
                                          (&DAT_01ec8250)[uVar9 >> 8 & 0xff]))) ^ puVar2[5];
  param_2[2] = CONCAT13((&DAT_01ec8250)[uVar8 >> 0x10 & 0xff],
                        CONCAT12((&DAT_01ec8250)[uVar5 >> 0x10 & 0xff],
                                 CONCAT11((&DAT_01ec8250)[uVar10 >> 0x10 & 0xff],
                                          (&DAT_01ec8250)[uVar9 >> 0x10 & 0xff]))) ^ puVar2[6];
  param_2[3] = CONCAT13((&DAT_01ec8250)[uVar8 >> 0x18],
                        CONCAT12((&DAT_01ec8250)[uVar5 >> 0x18],
                                 CONCAT11((&DAT_01ec8250)[uVar10 >> 0x18],
                                          (&DAT_01ec8250)[uVar9 >> 0x18]))) ^ puVar2[7];
  return;
}

