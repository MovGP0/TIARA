/* Ghidra address: 00408b00 */
/* Ghidra symbol: FUN_00408b00 */


void FUN_00408b00(void)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar6;
  int iVar7;
  undefined *puVar8;
  ushort *puVar9;
  undefined *puVar10;
  int *piVar11;
  ulonglong *puVar12;
  int *piVar13;
  int iVar14;
  undefined1 auStack_3e088 [32];
  int iStack_3e068;
  char cStack_3e061;
  undefined1 *puStack_3e060;
  char cStack_3e051;
  int iStack_3e050;
  int iStack_3e04c;
  undefined1 auStack_3e040 [30719];
  undefined1 auStack_36841 [2049];
  ulonglong auStack_36040 [4096];
  char cStack_2e039;
  undefined1 auStack_2e038 [4088];
  int aiStack_2d040 [45060];
  undefined1 auStack_1030 [4096];
  ulonglong uVar5;
  
  uVar5 = 0xfa8;
  do {
    uVar4 = uVar5 - 0x1000;
    auStack_1030[uVar5] = (char)uVar4;
    uVar5 = uVar4;
  } while (0xfffffffffffc1fa8 < uVar4);
  FUN_0040d200(auStack_3e040,0x8000,0);
  FUN_0040d200(auStack_2e038,0x2e000,0);
  FUN_0040d200(auStack_36040,0x8000,0);
  iStack_3e068 = 0;
  cStack_2e039 = '\x01';
  for (puVar10 = DAT_02006b90; puVar8 = DAT_0200ac50, puVar10 != &DAT_02006b88;
      puVar10 = *(undefined **)(puVar10 + 8)) {
    for (lVar6 = FUN_00408490(puVar10); lVar6 != 0; lVar6 = FUN_00408470(lVar6)) {
      uVar5 = *(ulonglong *)(lVar6 + -8);
      if ((uVar5 & 1) == 0) {
        if ((uVar5 & 4) == 0) {
          if (iStack_3e068 < 0x1000) {
            cVar2 = FUN_00408860(lVar6);
            if (cVar2 == '\0') {
              cStack_2e039 = '\0';
              auStack_36040[iStack_3e068] = (ulonglong)(((uint)uVar5 & 0xfffffff0) - 8);
              iStack_3e068 = iStack_3e068 + 1;
            }
          }
        }
        else {
          FUN_00408900(auStack_3e088,lVar6);
        }
      }
    }
  }
  while ((puVar8 != &DAT_0200ac48 && (iStack_3e068 < 0x1000))) {
    cVar2 = FUN_00408860(puVar8 + 0x20);
    if (cVar2 == '\0') {
      cStack_2e039 = '\0';
      auStack_36040[iStack_3e068] = (*(ulonglong *)(puVar8 + 0x18) & 0xfffffffffffffff0) - 0x28;
      iStack_3e068 = iStack_3e068 + 1;
    }
    puVar8 = *(undefined **)(puVar8 + 8);
  }
  if (cStack_2e039 == '\0') {
    cStack_3e061 = '\0';
    iStack_3e04c = 0;
    uVar3 = FUN_00414ce0(PTR_s_An_unexpected_memory_leak_has_oc_01db90a0);
    puStack_3e060 =
         (undefined1 *)
         FUN_00408590(PTR_s_An_unexpected_memory_leak_has_oc_01db90a0,auStack_3e040,uVar3);
    iVar14 = 0x2e;
    puVar9 = &DAT_01db90fa;
    piVar11 = aiStack_2d040;
    do {
      uVar1 = *puVar9;
      iVar7 = uVar1 - 8;
      cStack_3e051 = '\0';
      iStack_3e050 = 0xff;
      piVar13 = piVar11;
      do {
        if (auStack_36841 < puStack_3e060) break;
        if (*piVar13 != 0) {
          if (cStack_3e061 == '\0') {
            uVar3 = FUN_00414ce0(PTR_s_The_unexpected_small_block_leaks_01db90a8);
            puStack_3e060 =
                 (undefined1 *)
                 FUN_00408590(PTR_s_The_unexpected_small_block_leaks_01db90a8,puStack_3e060,uVar3);
            cStack_3e061 = '\x01';
          }
          if (cStack_3e051 == '\0') {
            *puStack_3e060 = 0xd;
            puStack_3e060[1] = 10;
            puStack_3e060 = puStack_3e060 + 2;
            puStack_3e060 = (undefined1 *)FUN_00408520(iStack_3e04c + 1,puStack_3e060);
            *puStack_3e060 = 0x20;
            puStack_3e060[1] = 0x2d;
            puStack_3e060[2] = 0x20;
            puStack_3e060 = puStack_3e060 + 3;
            puStack_3e060 = (undefined1 *)FUN_00408520(iVar7,puStack_3e060);
            uVar3 = FUN_00414ce0(PTR_s_bytes__01db90b8);
            puStack_3e060 = (undefined1 *)FUN_00408590(PTR_s_bytes__01db90b8,puStack_3e060,uVar3);
            cStack_3e051 = '\x01';
          }
          else {
            *puStack_3e060 = 0x2c;
            puStack_3e060[1] = 0x20;
            puStack_3e060 = puStack_3e060 + 2;
          }
          if (iStack_3e050 == 0) {
            uVar3 = FUN_00414ce0(PTR_s_Unknown_01db90c0);
            puStack_3e060 = (undefined1 *)FUN_00408590(PTR_s_Unknown_01db90c0,puStack_3e060,uVar3);
          }
          else if (iStack_3e050 == 1) {
            uVar3 = FUN_00414ce0(PTR_s_AnsiString_01db90c8);
            puStack_3e060 =
                 (undefined1 *)FUN_00408590(PTR_s_AnsiString_01db90c8,puStack_3e060,uVar3);
          }
          else if (iStack_3e050 == 2) {
            uVar3 = FUN_00414ce0(PTR_s_UnicodeString_01db90d0);
            puStack_3e060 =
                 (undefined1 *)FUN_00408590(PTR_s_UnicodeString_01db90d0,puStack_3e060,uVar3);
          }
          else {
            puStack_3e060 = (undefined1 *)FUN_004085c0(*(undefined8 *)(piVar13 + -2),puStack_3e060);
          }
          *puStack_3e060 = 0x20;
          puStack_3e060[1] = 0x78;
          puStack_3e060[2] = 0x20;
          puStack_3e060 = puStack_3e060 + 3;
          puStack_3e060 = (undefined1 *)FUN_00408520(*piVar13,puStack_3e060);
        }
        iStack_3e050 = iStack_3e050 + -1;
        piVar13 = piVar13 + -4;
      } while (iStack_3e050 != -1);
      if (((cStack_3e051 != '\0') || (DAT_01db9c78 == '\0')) || ((uVar1 & 0xf) == 0)) {
        iStack_3e04c = iVar7;
      }
      piVar11 = piVar11 + 0x400;
      puVar9 = puVar9 + 0x20;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    if (0 < iStack_3e068) {
      if (cStack_3e061 != '\0') {
        *puStack_3e060 = 0xd;
        puStack_3e060[1] = 10;
        puStack_3e060[2] = 0xd;
        puStack_3e060[3] = 10;
        puStack_3e060 = puStack_3e060 + 4;
      }
      uVar3 = FUN_00414ce0(PTR_s_The_sizes_of_unexpected_leaked_m_01db90b0);
      puStack_3e060 =
           (undefined1 *)
           FUN_00408590(PTR_s_The_sizes_of_unexpected_leaked_m_01db90b0,puStack_3e060,uVar3);
      iVar7 = 0;
      puVar12 = auStack_36040;
      iVar14 = iStack_3e068;
      do {
        if (iVar7 != 0) {
          *puStack_3e060 = 0x2c;
          puStack_3e060[1] = 0x20;
          puStack_3e060 = puStack_3e060 + 2;
        }
        puStack_3e060 = (undefined1 *)FUN_00408520(*puVar12,puStack_3e060);
        if (auStack_36841 < puStack_3e060) break;
        iVar7 = iVar7 + 1;
        puVar12 = puVar12 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    uVar3 = FUN_00414ce0(PTR_DAT_01db90d8);
    FUN_00408590(PTR_DAT_01db90d8,puStack_3e060,uVar3);
    FUN_00408390(auStack_3e040,PTR_s_Unexpected_Memory_Leak_01db90e0);
  }
  return;
}

