/* Ghidra address: 013715b0 */
/* Ghidra symbol: FUN_013715b0 */


double FUN_013715b0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  longlong lVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double unaff_XMM7_Qa;
  char local_c1;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  
  dVar17 = 0.0;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x2b);
  dVar10 = (double)FUN_013711f0(param_1,*param_2);
  iVar9 = *(int *)(*(longlong *)((longlong)param_2 + 0x1b) + 0x10);
  iVar7 = 0;
  dVar11 = 0.0;
  if (-1 < iVar9 + -1) {
    do {
      pcVar5 = (char *)FUN_004aeac0(*(undefined8 *)((longlong)param_2 + 0x1b),iVar7);
      pcVar8 = &local_c1;
      for (lVar6 = 5; lVar6 != 0; lVar6 = lVar6 + -1) {
        *(undefined8 *)pcVar8 = *(undefined8 *)pcVar5;
        pcVar5 = pcVar5 + 8;
        pcVar8 = pcVar8 + 8;
      }
      *pcVar8 = *pcVar5;
      cVar2 = local_c1;
      if ((byte)(local_c1 - 1U) < 4) {
        uVar4 = FUN_0040c840(local_a8);
        uVar14 = FUN_013712e0(param_1,local_b8,uVar4);
        dVar11 = (double)FUN_00f53fc0(*(undefined8 *)(param_1 + 0x1440),uVar1,uVar14,cVar2);
        dVar12 = (double)FUN_0040c850(local_c0 - dVar11);
        uVar14 = FUN_0040c850(local_c0);
        uVar15 = FUN_0040c850(dVar11);
        dVar13 = (double)FUN_00b90620(uVar14,uVar15);
        dVar12 = dVar12 / (dVar13 + dVar10);
        unaff_XMM7_Qa = dVar12 * dVar12;
        uVar14 = FUN_0040c850(local_c0);
        uVar15 = FUN_0040c850(dVar11);
        dVar12 = (double)FUN_00b90620(uVar14,uVar15);
        dVar13 = local_b0 / 100.0;
        if ((*(char *)(param_1 + 0x1439) != '\0') ||
           (dVar11 = (double)FUN_0040c850(dVar11 - local_c0), dVar13 * (dVar12 + dVar10) < dVar11))
        {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
        *(undefined1 *)(param_1 + 0x1439) = uVar3;
      }
      else if ((byte)(local_c1 - 5U) < 2) {
        if (local_c1 == '\x05') {
          dVar11 = (double)(**(code **)(**(longlong **)(param_1 + 0x1440) + 0x70))
                                     (*(longlong **)(param_1 + 0x1440),uVar1);
        }
        else {
          dVar11 = (double)(**(code **)(**(longlong **)(param_1 + 0x1440) + 0x68))
                                     (*(longlong **)(param_1 + 0x1440),uVar1);
        }
        uVar4 = FUN_0040c840(local_b0);
        dVar12 = (double)FUN_013712e0(param_1,local_c0,uVar4);
        dVar13 = (double)FUN_0040c850(dVar12 - dVar11);
        uVar14 = FUN_0040c850(dVar12);
        uVar15 = FUN_0040c850(dVar11);
        dVar16 = (double)FUN_00b90620(uVar14,uVar15);
        dVar13 = dVar13 / (dVar16 + dVar10);
        unaff_XMM7_Qa = dVar13 * dVar13;
        uVar14 = FUN_0040c850(dVar12);
        uVar15 = FUN_0040c850(dVar11);
        dVar13 = (double)FUN_00b90620(uVar14,uVar15);
        dVar16 = local_b8 / 100.0;
        if ((*(char *)(param_1 + 0x1439) != '\0') ||
           (dVar11 = (double)FUN_0040c850(dVar11 - dVar12), dVar16 * (dVar13 + dVar10) < dVar11)) {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
        *(undefined1 *)(param_1 + 0x1439) = uVar3;
      }
      dVar17 = dVar17 + unaff_XMM7_Qa;
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + -1;
      dVar11 = dVar17;
    } while (iVar9 != 0);
  }
  dVar11 = (double)FUN_0040c760(dVar11);
  return dVar11 / (double)*(int *)(*(longlong *)((longlong)param_2 + 0x1b) + 0x10);
}

