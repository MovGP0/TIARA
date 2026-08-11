/* Ghidra address: 00a25e20 */
/* Ghidra symbol: FUN_00a25e20 */


void FUN_00a25e20(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  int *piVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  char *pcVar13;
  char *pcVar14;
  ulonglong uVar15;
  char cStack_879;
  undefined8 local_878;
  undefined8 uStack_870;
  char local_868 [32];
  int local_848 [260];
  uint local_438 [258];
  
  local_868[0] = '\0';
  local_868[1] = '\0';
  local_868[2] = '\0';
  local_868[3] = '\0';
  local_868[4] = '\0';
  local_868[5] = '\0';
  local_868[6] = '\0';
  local_868[7] = '\0';
  local_868[8] = '\0';
  local_868[9] = '\0';
  local_868[10] = '\0';
  local_868[0xb] = '\0';
  local_868[0xc] = '\0';
  local_868[0xd] = '\0';
  local_868[0xe] = '\0';
  local_868[0xf] = '\0';
  local_878 = 0;
  uStack_870 = 0;
  local_868[0x10] = 0;
  uVar10 = 0;
  FUN_00626680(local_848,0,0x404);
  FUN_00626680(local_438,0xff,0x404);
  *(undefined4 *)(param_3 + 0x400) = 1;
  uVar15 = 0xffffffff;
  iVar6 = 1000000000;
  while( true ) {
    do {
      iVar8 = *(int *)(param_3 + uVar10 * 4);
      if (iVar8 <= iVar6 && iVar8 != 0) {
        uVar15 = uVar10 & 0xffffffff;
        iVar6 = iVar8;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0x101);
    uVar10 = 0xffffffff;
    iVar6 = 1000000000;
    uVar11 = 0;
    while( true ) {
      iVar8 = *(int *)(param_3 + uVar11 * 4);
      if (uVar15 != uVar11 && (iVar8 <= iVar6 && iVar8 != 0)) {
        uVar10 = uVar11 & 0xffffffff;
        iVar6 = iVar8;
      }
      uVar1 = uVar11 + 1;
      if (uVar1 == 0x101) break;
      iVar8 = *(int *)(param_3 + 4 + uVar11 * 4);
      if (uVar1 != uVar15 && (iVar8 <= iVar6 && iVar8 != 0)) {
        uVar10 = uVar1 & 0xffffffff;
        iVar6 = iVar8;
      }
      uVar11 = uVar11 + 2;
    }
    uVar7 = (uint)uVar10;
    if ((int)uVar7 < 0) break;
    piVar3 = (int *)(param_3 + (longlong)(int)uVar15 * 4);
    *piVar3 = *piVar3 + *(int *)(param_3 + (longlong)(int)uVar7 * 4);
    *(undefined4 *)(param_3 + (longlong)(int)uVar7 * 4) = 0;
    do {
      iVar6 = (int)uVar15;
      local_848[iVar6] = local_848[iVar6] + 1;
      uVar15 = (ulonglong)local_438[iVar6];
    } while (-1 < (int)local_438[iVar6]);
    local_438[iVar6] = uVar7;
    do {
      iVar6 = (int)uVar10;
      local_848[iVar6] = local_848[iVar6] + 1;
      uVar10 = (ulonglong)local_438[iVar6];
    } while (-1 < (int)local_438[iVar6]);
    uVar15 = 0xffffffff;
    iVar6 = 1000000000;
    uVar10 = 0;
  }
  lVar12 = 0;
  do {
    iVar6 = local_848[lVar12];
    if ((longlong)iVar6 != 0) {
      if (0x20 < iVar6) {
        puVar4 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar4 + 5) = 0x27;
        (*(code *)*puVar4)(param_1);
      }
      pcVar14 = (char *)((longlong)&local_878 + (longlong)iVar6);
      *pcVar14 = *pcVar14 + '\x01';
    }
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0x101);
  pcVar14 = local_868 + 0xf;
  lVar12 = 0x2000000000;
  uVar15 = 0x20;
  do {
    while( true ) {
      lVar9 = lVar12;
      pcVar13 = pcVar14;
      if (*(char *)((longlong)&local_878 + uVar15) == '\0') break;
      do {
        lVar9 = lVar9 + -0x100000000;
        pcVar2 = pcVar13 + -1;
        pcVar13 = pcVar13 + -1;
      } while (*pcVar2 == '\0');
      *(char *)((longlong)&local_878 + uVar15) = *(char *)((longlong)&local_878 + uVar15) + -2;
      (&cStack_879)[uVar15] = (&cStack_879)[uVar15] + '\x01';
      pcVar2 = (char *)((longlong)&local_878 + (lVar9 >> 0x20));
      *pcVar2 = *pcVar2 + '\x02';
      *pcVar13 = *pcVar13 + -1;
    }
    lVar12 = lVar12 + -0x100000000;
    pcVar14 = pcVar14 + -1;
    bVar5 = 0x11 < uVar15;
    uVar15 = uVar15 - 1;
  } while (bVar5);
  pcVar14 = local_868 + 1;
  do {
    pcVar13 = pcVar14 + -1;
    pcVar14 = pcVar14 + -1;
  } while (*pcVar13 == '\0');
  *pcVar14 = *pcVar13 + -1;
  *(char *)(param_2 + 2) = local_868[0];
  *param_2 = local_878;
  param_2[1] = uStack_870;
  iVar6 = 0;
  iVar8 = 1;
  do {
    lVar12 = 0;
    do {
      if (local_848[lVar12] == iVar8) {
        *(char *)((longlong)param_2 + (longlong)iVar6 + 0x11) = (char)lVar12;
        iVar6 = iVar6 + 1;
      }
      if (local_848[lVar12 + 1] == iVar8) {
        *(char *)((longlong)param_2 + (longlong)iVar6 + 0x11) = (char)lVar12 + '\x01';
        iVar6 = iVar6 + 1;
      }
      lVar12 = lVar12 + 2;
    } while (lVar12 != 0x100);
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x21);
  *(undefined4 *)((longlong)param_2 + 0x114) = 0;
  return;
}

