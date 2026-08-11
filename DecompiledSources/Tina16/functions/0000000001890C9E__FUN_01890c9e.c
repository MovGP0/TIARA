/* Ghidra address: 01890c9e */
/* Ghidra symbol: FUN_01890c9e */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x01890d91) overlaps instruction at (ram,0x01890d90)
    */

void FUN_01890c9e(uint *param_1,byte *param_2)

{
  byte bVar1;
  uint *puVar2;
  undefined1 uVar3;
  char cVar4;
  undefined2 uVar5;
  undefined3 uVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  char *in_RAX;
  undefined7 uVar14;
  int *piVar10;
  byte *pbVar12;
  char *pcVar13;
  byte bVar15;
  undefined4 *puVar16;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RDI;
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  char *pcVar11;
  
  *in_RAX = *in_RAX + (char)((ulonglong)in_RAX >> 8);
  uVar5 = SUB82(param_2,0);
  *param_2 = *param_2 + (byte)in_RAX;
  uVar14 = (undefined7)((ulonglong)in_RAX >> 8);
  piVar10 = (int *)(CONCAT71(uVar14,(byte)in_RAX | (byte)param_2) | 0x89);
  *piVar10 = *piVar10 + (int)piVar10;
  cVar7 = (char)piVar10;
  *(char *)piVar10 = (char)*piVar10 + cVar7;
  *(char *)piVar10 = (char)*piVar10 + cVar7;
  pcVar13 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (longlong)param_2 * 2);
  *pcVar13 = *pcVar13 + cVar7;
  pcVar13 = unaff_RDI + 1;
  uVar3 = in(uVar5);
  *unaff_RDI = uVar3;
  cVar7 = cVar7 + (char)*piVar10;
  pcVar11 = (char *)CONCAT71(uVar14,cVar7);
  pcVar11[0x4010] = pcVar11[0x4010] + unaff_BH;
  *pcVar11 = *pcVar11 + cVar7;
  *pcVar11 = *pcVar11 + cVar7;
  DAT_76f56e1a = DAT_76f56e1a + cVar7;
  cVar7 = cVar7 + pcVar11[unaff_GS_OFFSET] +
          *(char *)CONCAT71(uVar14,cVar7 + pcVar11[unaff_GS_OFFSET]);
  pcVar11 = (char *)CONCAT71(uVar14,cVar7);
  *pcVar11 = *pcVar11 + cVar7;
  *pcVar11 = *pcVar11 + cVar7;
  *pcVar11 = *pcVar11 + cVar7;
  piVar10 = (int *)(CONCAT71(uVar14,cVar7 + unaff_BL) | 0x89);
  *piVar10 = *piVar10 + (uint)piVar10;
  *(char *)piVar10 = (char)*piVar10 + (char)piVar10;
  *pcVar13 = *pcVar13 + (char)piVar10;
  uVar9 = (uint)piVar10 | 0x78726654;
  pbVar12 = (byte *)(ulonglong)uVar9;
  cVar7 = in(uVar5);
  *pcVar13 = cVar7;
  puVar2 = (uint *)(unaff_RDI + 3);
  uVar3 = in(uVar5);
  unaff_RDI[2] = uVar3;
  cVar7 = (char)uVar9;
  *pbVar12 = *pbVar12 + cVar7;
  pbVar12[0x32] = pbVar12[0x32] + (byte)param_2;
  pbVar12[in_FS_OFFSET] = pbVar12[in_FS_OFFSET] + cVar7;
  *pbVar12 = *pbVar12 + cVar7;
  bVar15 = (byte)param_1;
  *(byte *)puVar2 = (char)*puVar2 + bVar15;
  bVar8 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar15;
  bVar1 = *pbVar12;
  uVar6 = (undefined3)(uVar9 >> 8);
  if (CARRY1(bVar8,bVar15)) {
    *puVar2 = uVar9;
    if (-1 < (char)bVar1) {
      bVar8 = cVar7 + *pbVar12;
      cVar7 = (char)(uVar9 >> 8) + bVar15;
      uVar9 = CONCAT22((short)(uVar9 >> 0x10),CONCAT11(cVar7,bVar8));
      pbVar12 = (byte *)(ulonglong)uVar9;
      if (cVar7 < '\0') {
        *param_2 = *param_2 + bVar8;
        bVar1 = *param_2;
        *param_2 = *param_2 + bVar8;
        pbVar12 = (byte *)(ulonglong)((uVar9 - 0x18910) - (uint)CARRY1(bVar1,bVar8));
      }
      goto code_r0x01890d88;
    }
  }
  else {
    if (*pbVar12 != 0) {
      cVar4 = in(uVar5);
      *(char *)puVar2 = cVar4;
      DAT_0f220f09 = DAT_0f220f09 + bVar15;
      *param_1 = uVar9;
      *pbVar12 = *pbVar12 + cVar7;
      *pbVar12 = *pbVar12 + cVar7;
      uVar9 = CONCAT31(uVar6,cVar7 + *pbVar12) | 0x189;
      *(char *)(ulonglong)uVar9 = *(char *)(ulonglong)uVar9 + (char)uVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar8 = *pbVar12;
    pbVar12 = (byte *)(ulonglong)CONCAT31(uVar6,cVar7 + bVar8);
    param_1 = (uint *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                               CONCAT11((char)((ulonglong)param_1 >> 8) +
                                        *(char *)(CONCAT62(unaff_0000001a,
                                                           CONCAT11(unaff_BH,unaff_BL)) + 0x1890f),
                                        bVar15));
    *pbVar12 = *pbVar12 + cVar7 + bVar8;
  }
  cVar7 = (char)pbVar12;
  *param_2 = *param_2 + cVar7;
  *param_2 = *param_2 + cVar7;
  puVar16 = (undefined4 *)((longlong)param_1 + -1);
  if (puVar16 == (undefined4 *)0x0 || *param_2 != 0) {
    *puVar16 = (int)pbVar12;
    *pbVar12 = *pbVar12 + cVar7;
    *pbVar12 = *pbVar12 + cVar7;
  }
  else {
    *pbVar12 = *pbVar12 + cVar7;
    uVar14 = (undefined7)((ulonglong)pbVar12 >> 8);
    cVar7 = cVar7 + *pbVar12 + *(char *)CONCAT71(uVar14,cVar7 + *pbVar12);
    pbVar12 = (byte *)CONCAT71(uVar14,cVar7);
    *pbVar12 = *pbVar12 + cVar7;
    *pbVar12 = *pbVar12 ^ (byte)puVar16;
    pbVar12[in_FS_OFFSET] = pbVar12[in_FS_OFFSET] + cVar7;
  }
code_r0x01890d88:
  cVar7 = (char)pbVar12 + *pbVar12;
  pcVar13 = (char *)CONCAT71((int7)((ulonglong)pbVar12 >> 8),cVar7);
  *pcVar13 = *pcVar13 + cVar7;
  *param_2 = *param_2 + cVar7;
  *param_2 = *param_2 + cVar7;
  *pcVar13 = *pcVar13 + cVar7;
  *pcVar13 = *pcVar13 + (char)((ulonglong)param_2 >> 8);
  *(byte *)((longlong)pcVar13 * 2) =
       *(byte *)((longlong)pcVar13 * 2) | (byte)((ulonglong)pbVar12 >> 8);
  *pcVar13 = *pcVar13 + cVar7;
                    /* WARNING: Read-only address (ram,0x01890da9) is written */
  cRam0000000001890da9 = unaff_BL + '\\';
  *pcVar13 = *pcVar13 + cVar7;
  (**(code **)pcVar13)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

