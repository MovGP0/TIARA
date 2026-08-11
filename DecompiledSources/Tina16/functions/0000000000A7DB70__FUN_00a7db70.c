/* Ghidra address: 00a7db70 */
/* Ghidra symbol: FUN_00a7db70 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00a7dc9f) */
/* WARNING: Removing unreachable block (ram,0x00a7dd3b) */
/* WARNING: Removing unreachable block (ram,0x00a7dd47) */
/* WARNING: Removing unreachable block (ram,0x00a7dd4b) */
/* WARNING: Removing unreachable block (ram,0x00a7dd4d) */
/* WARNING: Removing unreachable block (ram,0x00a7dd52) */
/* WARNING: Removing unreachable block (ram,0x00a7dd9b) */
/* WARNING: Removing unreachable block (ram,0x00a7ddf4) */
/* WARNING: Removing unreachable block (ram,0x00a7dda8) */
/* WARNING: Removing unreachable block (ram,0x00a7ddb4) */
/* WARNING: Removing unreachable block (ram,0x00a7dccd) */

void FUN_00a7db70(undefined8 param_1,byte *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  char *in_RAX;
  char *pcVar9;
  undefined7 uVar11;
  longlong lVar10;
  byte bVar12;
  char cVar13;
  undefined6 uVar14;
  undefined2 uVar15;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RSI;
  undefined1 *puVar16;
  undefined1 *unaff_RDI;
  
  uVar14 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar13 = (char)((ulonglong)param_1 >> 8);
  cVar8 = (char)in_RAX;
  *param_2 = *param_2 + cVar8;
  bVar12 = (char)param_1 + (char)((ulonglong)param_2 >> 8);
  *(int *)((longlong)in_RAX * 2) = *(int *)((longlong)in_RAX * 2) + 1;
  puVar2 = (uint *)(unaff_RSI + (longlong)in_RAX * 2 + 0x6f);
  *puVar2 = *puVar2 | (uint)param_2;
  uVar15 = SUB82(param_2,0);
  out(*unaff_RSI,uVar15);
  cVar7 = (char)((ulonglong)in_RAX >> 8);
  if (*puVar2 == 0) {
    *in_RAX = *in_RAX + bVar12;
    pcVar9 = (char *)(ulonglong)(uint)(int)(short)in_RAX;
    *pcVar9 = *pcVar9 + cVar8;
    *(char *)CONCAT62(uVar14,CONCAT11(cVar13,bVar12)) =
         *(char *)CONCAT62(uVar14,CONCAT11(cVar13,bVar12)) + cVar8;
    cVar8 = cVar8 + *pcVar9 + *(char *)(ulonglong)CONCAT31((int3)cVar7,cVar8 + *pcVar9);
    pcVar9 = (char *)(ulonglong)CONCAT31((int3)cVar7,cVar8);
    pcVar9[0xa949] = pcVar9[0xa949] + cVar8;
    *pcVar9 = *pcVar9 + cVar8;
    *(byte *)CONCAT62(uVar14,CONCAT11(cVar13,bVar12)) =
         *(char *)CONCAT62(uVar14,CONCAT11(cVar13,bVar12)) + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar16 = (undefined1 *)
            (ulonglong)
            (uint)(*(int *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x74) *
                  0x4870005b);
  bVar3 = *param_2;
  *param_2 = *param_2 + bVar12;
  if (!CARRY1(bVar3,bVar12)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *puVar16;
  *in_RAX = *in_RAX + cVar8;
  *in_RAX = *in_RAX + cVar8;
  *in_RAX = *in_RAX + cVar13;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar8;
  in_RAX[0xa7dd] = in_RAX[0xa7dd] | unaff_BL;
  *in_RAX = *in_RAX + cVar8;
  *in_RAX = *in_RAX + cVar8;
  pcVar9 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (longlong)param_2 * 2);
  *pcVar9 = *pcVar9 + cVar8;
  uVar5 = in(uVar15);
  unaff_RDI[1] = uVar5;
  uVar11 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar6 = cVar8 + *in_RAX;
  pcVar9 = (char *)CONCAT71(uVar11,bVar6);
  pcVar9[0x4010] = pcVar9[0x4010] + unaff_BH;
  *pcVar9 = *pcVar9 + bVar6;
  *pcVar9 = *pcVar9 + bVar6;
  pbVar1 = (byte *)(pcVar9 + (longlong)param_2 * 2);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar6;
  puVar4 = (undefined4 *)(puVar16 + 5);
  out(*(undefined4 *)(puVar16 + 1),uVar15);
  if (!CARRY1(bVar3,bVar6)) {
    if (*pbVar1 == 0) {
      out(*(undefined1 *)puVar4,uVar15);
      cVar8 = bVar6 + *(char *)(longlong)(int)pcVar9;
      pcVar9 = (char *)CONCAT71(uVar11,cVar8);
      *pcVar9 = *pcVar9 - cVar7;
      *pcVar9 = *pcVar9 + cVar8;
      *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
           *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(*puVar4,uVar15);
    out(puVar16[9],uVar15);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar7 = bVar6 + *pcVar9;
  pcVar9 = (char *)CONCAT71(uVar11,cVar7);
  pcVar9[0x4010] = pcVar9[0x4010] & unaff_BH;
  *pcVar9 = *pcVar9 + cVar7;
  *pcVar9 = *pcVar9 + cVar7;
  DAT_6f092487 = DAT_6f092487 + cVar7;
  cVar7 = cVar7 + *(char *)(longlong)(int)pcVar9;
  lVar10 = CONCAT71(uVar11,cVar7 + *(char *)CONCAT71(uVar11,cVar7));
  pcVar9 = (char *)(lVar10 + 0x4a);
  *pcVar9 = *pcVar9 + (char)param_2;
  pcVar9 = unaff_RDI + lVar10 * 2 + 2;
  *pcVar9 = *pcVar9 + bVar12;
  if (*pcVar9 != '\0') {
    out(*puVar4,uVar15);
    out(puVar16[9],uVar15);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

