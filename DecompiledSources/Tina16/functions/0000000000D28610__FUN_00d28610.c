/* Ghidra address: 00d28610 */
/* Ghidra symbol: FUN_00d28610 */


void FUN_00d28610(longlong param_1,uint *param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  uVar9 = param_2[3] ^ *(uint *)(lVar1 + 0x9c);
  iVar7 = 7;
  puVar2 = (uint *)(lVar1 + 0xa0);
  uVar4 = *param_2 ^ *(uint *)(lVar1 + 0x90);
  uVar5 = param_2[1] ^ *(uint *)(lVar1 + 0x94);
  uVar8 = param_2[2] ^ *(uint *)(lVar1 + 0x98);
  do {
    puVar3 = puVar2;
    uVar10 = *(uint *)(&DAT_01ec9850 + (ulonglong)(uVar4 & 0xff) * 4) ^
             *(uint *)(&DAT_01ec9c50 + (ulonglong)(uVar5 & 0xff) * 4) ^
             *(uint *)(&DAT_01eca050 + (ulonglong)(uVar8 & 0xff) * 4) ^
             *(uint *)(&DAT_01eca450 + (ulonglong)(uVar9 & 0xff) * 4) ^ *puVar3;
    uVar11 = *(uint *)(&DAT_01ec9850 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_01ec9c50 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_01eca050 + (ulonglong)(uVar8 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_01eca450 + (ulonglong)(uVar9 >> 8 & 0xff) * 4) ^ puVar3[1];
    uVar6 = *(uint *)(&DAT_01ec9850 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01ec9c50 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01eca050 + (ulonglong)(uVar8 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01eca450 + (ulonglong)(uVar9 >> 0x10 & 0xff) * 4) ^ puVar3[2];
    uVar9 = *(uint *)(&DAT_01ec9850 + (ulonglong)(uVar4 >> 0x18) * 4) ^
            *(uint *)(&DAT_01ec9c50 + (ulonglong)(uVar5 >> 0x18) * 4) ^
            *(uint *)(&DAT_01eca050 + (ulonglong)(uVar8 >> 0x18) * 4) ^
            *(uint *)(&DAT_01eca450 + (ulonglong)(uVar9 >> 0x18) * 4) ^ puVar3[3];
    iVar7 = iVar7 + -1;
    puVar2 = puVar3 + 4;
    uVar4 = uVar10;
    uVar5 = uVar11;
    uVar8 = uVar6;
  } while (iVar7 != 0);
  *param_2 = CONCAT13((&DAT_01ec8350)[uVar9 & 0xff],
                      CONCAT12((&DAT_01ec8350)[uVar6 & 0xff],
                               CONCAT11((&DAT_01ec8350)[uVar11 & 0xff],
                                        (&DAT_01ec8350)[uVar10 & 0xff]))) ^ puVar3[4];
  param_2[1] = CONCAT13((&DAT_01ec8350)[uVar9 >> 8 & 0xff],
                        CONCAT12((&DAT_01ec8350)[uVar6 >> 8 & 0xff],
                                 CONCAT11((&DAT_01ec8350)[uVar11 >> 8 & 0xff],
                                          (&DAT_01ec8350)[uVar10 >> 8 & 0xff]))) ^ puVar3[5];
  param_2[2] = CONCAT13((&DAT_01ec8350)[uVar9 >> 0x10 & 0xff],
                        CONCAT12((&DAT_01ec8350)[uVar6 >> 0x10 & 0xff],
                                 CONCAT11((&DAT_01ec8350)[uVar11 >> 0x10 & 0xff],
                                          (&DAT_01ec8350)[uVar10 >> 0x10 & 0xff]))) ^ puVar3[6];
  param_2[3] = CONCAT13((&DAT_01ec8350)[uVar9 >> 0x18],
                        CONCAT12((&DAT_01ec8350)[uVar6 >> 0x18],
                                 CONCAT11((&DAT_01ec8350)[uVar11 >> 0x18],
                                          (&DAT_01ec8350)[uVar10 >> 0x18]))) ^ puVar3[7];
  return;
}

