/* Ghidra address: 00a1b2c0 */
/* Ghidra symbol: FUN_00a1b2c0 */


undefined8 FUN_00a1b2c0(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  uint *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  char *pcVar16;
  ulonglong uVar17;
  char *pcVar18;
  ulonglong uVar19;
  uint uVar20;
  char *pcVar21;
  longlong lVar22;
  char *pcVar23;
  uint uVar24;
  ulonglong uVar25;
  uint local_54;
  
  puVar6 = (undefined8 *)param_1[5];
  pcVar21 = (char *)*puVar6;
  lVar22 = puVar6[1];
  lVar13 = param_1[0x49];
  puVar10 = *(undefined8 **)(lVar13 + 0xf8);
  if (puVar10 == (undefined8 *)0x0) {
    if (lVar22 == 0) {
      iVar8 = (*(code *)puVar6[3])(param_1);
      if (iVar8 == 0) {
        return 0;
      }
      pcVar21 = (char *)*puVar6;
      lVar22 = puVar6[1];
    }
    cVar2 = *pcVar21;
    lVar22 = lVar22 + -1;
    if (lVar22 == 0) {
      iVar8 = (*(code *)puVar6[3])(param_1);
      if (iVar8 == 0) {
        return 0;
      }
      pcVar16 = (char *)*puVar6;
      lVar22 = puVar6[1];
    }
    else {
      pcVar16 = pcVar21 + 1;
    }
    pcVar21 = pcVar16 + 1;
    lVar22 = lVar22 + -1;
    local_54 = CONCAT11(cVar2,*pcVar16) - 2;
    if (-1 < (int)local_54) {
      if (*(int *)((longlong)param_1 + 0x21c) == 0xfe) {
        puVar9 = (uint *)(lVar13 + 0xb0);
      }
      else {
        puVar9 = (uint *)(lVar13 + 0xb4 +
                         (longlong)(*(int *)((longlong)param_1 + 0x21c) + -0xe0) * 4);
      }
      uVar20 = *puVar9;
      if (local_54 < *puVar9) {
        uVar20 = local_54;
      }
      uVar17 = (ulonglong)uVar20;
      puVar10 = (undefined8 *)(**(code **)(param_1[1] + 8))(param_1,1,uVar17 + 0x20);
      uVar25 = 0;
      *puVar10 = 0;
      *(undefined1 *)(puVar10 + 1) = *(undefined1 *)((longlong)param_1 + 0x21c);
      *(uint *)((longlong)puVar10 + 0xc) = local_54;
      *(uint *)(puVar10 + 2) = uVar20;
      pcVar16 = (char *)(puVar10 + 4);
      puVar10[3] = pcVar16;
      *(undefined8 **)(lVar13 + 0xf8) = puVar10;
      *(undefined4 *)(lVar13 + 0x100) = 0;
      goto LAB_00a1b420;
    }
    pcVar16 = (char *)0x0;
    uVar17 = 0;
  }
  else {
    uVar25 = (ulonglong)*(uint *)(lVar13 + 0x100);
    pcVar16 = (char *)(puVar10[3] + uVar25);
    uVar17 = (ulonglong)*(uint *)(puVar10 + 2);
    local_54 = 0;
LAB_00a1b420:
    uVar20 = (uint)uVar17;
    if ((uint)uVar25 < uVar20) {
      pcVar18 = pcVar16;
      do {
        *puVar6 = pcVar21;
        puVar6[1] = lVar22;
        uVar24 = (uint)uVar25;
        *(uint *)(lVar13 + 0x100) = uVar24;
        pcVar23 = pcVar21;
        if (lVar22 == 0) {
          iVar8 = (*(code *)puVar6[3])(param_1);
          if (iVar8 == 0) {
            return 0;
          }
          pcVar23 = (char *)*puVar6;
          lVar22 = puVar6[1];
        }
        pcVar16 = pcVar18;
        pcVar21 = pcVar23;
        if ((uVar24 < uVar20) && (lVar22 != 0)) {
          uVar11 = (ulonglong)((uVar20 - 1) - uVar24);
          uVar14 = ~uVar11;
          uVar19 = -lVar22;
          if (uVar14 <= uVar19 && -uVar14 != lVar22) {
            uVar14 = uVar19;
          }
          pcVar21 = pcVar23 + -uVar14;
          pcVar16 = pcVar18 + -uVar14;
          uVar11 = ~uVar11;
          uVar25 = (ulonglong)(uVar24 + 1 + ~(uint)uVar14);
          if (uVar11 <= uVar19 && -uVar11 != lVar22) {
            uVar11 = uVar19;
          }
          lVar12 = -uVar11;
          do {
            *pcVar18 = *pcVar23;
            pcVar18 = pcVar18 + 1;
            pcVar23 = pcVar23 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          lVar22 = lVar22 + uVar14;
        }
        pcVar18 = pcVar16;
      } while ((uint)uVar25 < uVar20);
    }
  }
  uVar20 = (uint)uVar17;
  if (puVar10 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)param_1[0x32];
    if ((undefined8 *)param_1[0x32] == (undefined8 *)0x0) {
      param_1[0x32] = (longlong)puVar10;
    }
    else {
      do {
        puVar15 = puVar7;
        puVar7 = (undefined8 *)*puVar15;
      } while (puVar7 != (undefined8 *)0x0);
      *puVar15 = puVar10;
    }
    local_54 = *(int *)((longlong)puVar10 + 0xc) - uVar20;
    pcVar16 = (char *)puVar10[3];
  }
  *(undefined8 *)(lVar13 + 0xf8) = 0;
  if (*(int *)((longlong)param_1 + 0x21c) == 0xee) {
    if ((((0xb < uVar20) && (*pcVar16 == 'A')) && (pcVar16[1] == 'd')) &&
       (((pcVar16[2] == 'o' && (pcVar16[3] == 'b')) && (pcVar16[4] == 'e')))) {
      bVar1 = pcVar16[0xb];
      cVar2 = pcVar16[10];
      cVar3 = pcVar16[9];
      cVar4 = pcVar16[8];
      cVar5 = pcVar16[7];
      lVar13 = *param_1;
      *(uint *)(lVar13 + 0x2c) = (uint)CONCAT11(pcVar16[5],pcVar16[6]);
      *(uint *)(lVar13 + 0x30) = (uint)CONCAT11(cVar5,cVar4);
      *(uint *)(lVar13 + 0x34) = (uint)CONCAT11(cVar3,cVar2);
      *(uint *)(lVar13 + 0x38) = (uint)bVar1;
      *(undefined4 *)(lVar13 + 0x28) = 0x4c;
      (**(code **)(lVar13 + 8))(param_1,1);
      *(undefined4 *)(param_1 + 0x30) = 1;
      *(byte *)((longlong)param_1 + 0x184) = bVar1;
      goto LAB_00a1b653;
    }
    lVar13 = *param_1;
    *(undefined4 *)(lVar13 + 0x28) = 0x4e;
    *(uint *)(lVar13 + 0x2c) = uVar20 + local_54;
  }
  else {
    if (*(int *)((longlong)param_1 + 0x21c) == 0xe0) {
      FUN_00a1b6d0(param_1,pcVar16,uVar17,local_54);
      goto LAB_00a1b653;
    }
    lVar13 = *param_1;
    *(undefined4 *)(lVar13 + 0x28) = 0x5b;
    *(undefined4 *)(lVar13 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x21c);
    *(uint *)(lVar13 + 0x30) = uVar20 + local_54;
  }
  (**(code **)(lVar13 + 8))(param_1,1);
LAB_00a1b653:
  *puVar6 = pcVar21;
  puVar6[1] = lVar22;
  if (0 < (int)local_54) {
    (**(code **)(param_1[5] + 0x20))(param_1,local_54);
  }
  return 1;
}

