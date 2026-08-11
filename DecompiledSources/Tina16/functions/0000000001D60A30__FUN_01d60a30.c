/* Ghidra address: 01d60a30 */
/* Ghidra symbol: FUN_01d60a30 */


/* WARNING: Removing unreachable block (ram,0x01d60b34) */

double FUN_01d60a30(longlong param_1,undefined8 param_2,longlong param_3,double param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double unaff_XMM6_Qa;
  double unaff_XMM7_Qa;
  int local_d0;
  bool local_c9;
  
  dVar15 = 0.0;
  cVar1 = *(char *)(param_1 + 299);
  if (cVar1 == '\x01') {
    bVar2 = param_4 != *(double *)(param_1 + 0x40);
    local_c9 = *(double *)(param_1 + 0x40) <= param_4;
    if (local_c9 && bVar2) {
      local_d0 = FUN_01b10d30(*(undefined8 *)(param_3 + 0x4b0),param_4 - *(double *)(param_1 + 0x40)
                             );
    }
    local_c9 = local_c9 && bVar2;
    lVar7 = FUN_01b10cd0(*(undefined8 *)(param_3 + 0x4b0));
    iVar3 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    dVar12 = param_4 - *(double *)(lVar7 + (longlong)iVar3 * 8);
    dVar16 = (double)FUN_01d5f070(dVar12,*(undefined8 *)(param_1 + 0x60));
    dVar12 = (double)FUN_01d5e3b0(0,dVar12,0,dVar16,0,dVar12);
    lVar7 = FUN_01b10cd0(*(undefined8 *)(param_3 + 0x4b0));
    iVar3 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    dVar12 = dVar16 * 0.5 * (param_4 - *(double *)(lVar7 + (longlong)iVar3 * 8)) - dVar12;
    if (local_c9) {
      lVar7 = FUN_01b10cd0(*(undefined8 *)(param_3 + 0x4b0));
      dVar13 = param_4 - *(double *)(lVar7 + (longlong)local_d0 * 8);
      lVar7 = FUN_01b10cd0(*(undefined8 *)(param_3 + 0x4b0));
      iVar3 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
      lVar6 = FUN_01b10cd0(*(undefined8 *)(param_3 + 0x4b0));
      uVar10 = FUN_00b90620(*(undefined8 *)(param_1 + 0x40),
                            *(double *)(lVar7 + (longlong)iVar3 * 8) -
                            *(double *)(lVar6 + (longlong)local_d0 * 8));
      uVar8 = FUN_01d5ee20(dVar13,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x58),
                           *(undefined8 *)(param_1 + 0x60));
      uVar9 = FUN_01d5ee20(uVar10,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x58),
                           *(undefined8 *)(param_1 + 0x60));
      dVar16 = (double)FUN_01d5e440(uVar10,dVar13,uVar10,uVar9,uVar8,uVar10,dVar13);
      dVar11 = (double)FUN_01d5e5a0(uVar10,dVar13,uVar10,uVar10,uVar9,uVar8,uVar10,dVar13);
      lVar7 = FUN_01b10cd0(*(undefined8 *)(param_3 + 0x4b0));
      unaff_XMM6_Qa =
           dVar16 * 0.5 *
           ((param_4 - *(double *)(param_1 + 0x40)) - *(double *)(lVar7 + (longlong)local_d0 * 8)) -
           dVar11;
      uVar8 = FUN_01d5f150(dVar13,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x60));
      uVar9 = FUN_01d5f150(uVar10,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x60));
      dVar16 = (double)FUN_01d5e3b0(uVar10,dVar13,uVar9,uVar8,uVar10,dVar13);
      dVar11 = (double)FUN_01d5e440(uVar10,dVar13,uVar10,uVar9,uVar8,uVar10,dVar13);
      lVar7 = FUN_01b10cd0(*(undefined8 *)(param_3 + 0x4b0));
      unaff_XMM7_Qa =
           dVar16 * 0.5 *
           ((param_4 - *(double *)(param_1 + 0x40)) - *(double *)(lVar7 + (longlong)local_d0 * 8)) -
           dVar11;
    }
    iVar3 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    lVar7 = *(longlong *)(param_1 + 0x148);
    iVar4 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    iVar5 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    uVar10 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 1),
                          *(undefined1 *)(param_1 + 2),0);
    dVar16 = (double)FUN_01d60920(param_3,iVar3 + 1,param_4,
                                  *(undefined8 *)(lVar7 + (longlong)(iVar4 + -1) * 8),
                                  *(undefined8 *)(lVar7 + (longlong)iVar5 * 8),uVar10);
    dVar16 = (double)FUN_0040c850(dVar16 * dVar12);
    dVar16 = *(double *)(param_1 + 0x50) * dVar16 + 0.0;
    if (local_c9) {
      dVar15 = (double)FUN_01d60920(param_3,local_d0 + 1,param_4,
                                    *(undefined8 *)(lVar7 + (longlong)(local_d0 + -1) * 8),
                                    *(undefined8 *)
                                     (*(longlong *)(param_1 + 0x148) + (longlong)local_d0 * 8),
                                    *(undefined8 *)
                                     (*(longlong *)(param_1 + 0x148) + (longlong)(local_d0 + 1) * 8)
                                   );
      dVar15 = (double)FUN_0040c850(dVar15 * unaff_XMM7_Qa);
      dVar15 = *(double *)(param_1 + 0x50) * dVar15 + 0.0;
    }
    iVar3 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    lVar7 = *(longlong *)(param_1 + 0x158);
    iVar4 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    iVar5 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    uVar10 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 3),
                          *(undefined1 *)(param_1 + 4),0);
    dVar11 = (double)FUN_01d60920(param_3,iVar3 + 1,param_4,
                                  *(undefined8 *)(lVar7 + (longlong)(iVar4 + -1) * 8),
                                  *(undefined8 *)(lVar7 + (longlong)iVar5 * 8),uVar10);
    dVar12 = (double)FUN_0040c850(dVar11 * dVar12);
    dVar12 = dVar15 + *(double *)(param_1 + 0x50) * dVar12;
    if (local_c9) {
      dVar15 = (double)FUN_01d60920(param_3,local_d0 + 1,param_4,
                                    *(undefined8 *)(lVar7 + (longlong)(local_d0 + -1) * 8),
                                    *(undefined8 *)
                                     (*(longlong *)(param_1 + 0x158) + (longlong)local_d0 * 8),
                                    *(undefined8 *)
                                     (*(longlong *)(param_1 + 0x158) + (longlong)(local_d0 + 1) * 8)
                                   );
      dVar11 = (double)FUN_0040c850(dVar15 * unaff_XMM7_Qa);
      dVar15 = *(double *)(param_1 + 0x50);
      dVar13 = (double)FUN_01d60920(param_3,local_d0 + 1,param_4,
                                    *(undefined8 *)
                                     (*(longlong *)(param_1 + 0x150) + (longlong)(local_d0 + -1) * 8
                                     ),*(undefined8 *)
                                        (*(longlong *)(param_1 + 0x150) + (longlong)local_d0 * 8),
                                    *(undefined8 *)
                                     (*(longlong *)(param_1 + 0x150) + (longlong)(local_d0 + 1) * 8)
                                   );
      dVar13 = (double)FUN_0040c850(dVar13 * unaff_XMM6_Qa);
      dVar14 = (double)FUN_01d60920(param_3,local_d0 + 1,param_4,
                                    *(undefined8 *)
                                     (*(longlong *)(param_1 + 0x160) + (longlong)(local_d0 + -1) * 8
                                     ),*(undefined8 *)
                                        (*(longlong *)(param_1 + 0x160) + (longlong)local_d0 * 8),
                                    *(undefined8 *)
                                     (*(longlong *)(param_1 + 0x160) + (longlong)(local_d0 + 1) * 8)
                                   );
      dVar14 = (double)FUN_0040c850(dVar14 * unaff_XMM6_Qa);
      dVar12 = dVar12 + dVar13;
      dVar16 = dVar16 + dVar15 * dVar11 + dVar14;
    }
  }
  else if (cVar1 == '\x02') {
    lVar7 = FUN_01b10cd0(*(undefined8 *)(param_3 + 0x4b0));
    iVar3 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    dVar16 = param_4 - *(double *)(lVar7 + (longlong)iVar3 * 8);
    uVar10 = FUN_01d5f260(dVar16,*(undefined8 *)(param_1 + 0x70));
    FUN_01d5e3b0(0,dVar16,0,uVar10,0,dVar16);
    FUN_01b10cd0(*(undefined8 *)(param_3 + 0x4b0));
    FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    uVar10 = FUN_01d5f2a0(dVar16,*(undefined8 *)(param_1 + 0x78));
    FUN_01d5e3b0(0,dVar16,0,uVar10,0,dVar16);
    FUN_01b10cd0(*(undefined8 *)(param_3 + 0x4b0));
    FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    dVar15 = (double)FUN_01d5f2a0(dVar16,*(undefined8 *)(param_1 + 0x78));
    dVar16 = (double)FUN_01d5e3b0(0,dVar16,0,dVar15,0,dVar16);
    lVar7 = FUN_01b10cd0(*(undefined8 *)(param_3 + 0x4b0));
    iVar3 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    dVar16 = dVar15 * 0.5 * (param_4 - *(double *)(lVar7 + (longlong)iVar3 * 8)) - dVar16;
    iVar3 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    lVar7 = *(longlong *)(param_1 + 0x148);
    iVar4 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    iVar5 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    uVar10 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 1),
                          *(undefined1 *)(param_1 + 2),0);
    dVar15 = (double)FUN_01d60920(param_3,iVar3 + 1,param_4,
                                  *(undefined8 *)(lVar7 + (longlong)(iVar4 + -1) * 8),
                                  *(undefined8 *)(lVar7 + (longlong)iVar5 * 8),uVar10);
    dVar11 = (double)FUN_0040c850(dVar15 * dVar16);
    dVar15 = (double)FUN_0040c850(dVar15 * unaff_XMM7_Qa);
    iVar3 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    lVar7 = *(longlong *)(param_1 + 0x158);
    iVar4 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    iVar5 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    uVar10 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 3),
                          *(undefined1 *)(param_1 + 4),0);
    dVar12 = (double)FUN_01d60920(param_3,iVar3 + 1,param_4,
                                  *(undefined8 *)(lVar7 + (longlong)(iVar4 + -1) * 8),
                                  *(undefined8 *)(lVar7 + (longlong)iVar5 * 8),uVar10);
    dVar16 = (double)FUN_0040c850(dVar12 * dVar16);
    dVar13 = (double)FUN_0040c850(dVar12 * unaff_XMM7_Qa);
    iVar3 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    lVar7 = *(longlong *)(param_1 + 0x150);
    iVar4 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    iVar5 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    uVar10 = FUN_016ee570(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 5));
    dVar12 = (double)FUN_01d60920(param_3,iVar3 + 1,param_4,
                                  *(undefined8 *)(lVar7 + (longlong)(iVar4 + -1) * 8),
                                  *(undefined8 *)(lVar7 + (longlong)iVar5 * 8),uVar10);
    dVar12 = (double)FUN_0040c850(dVar12 * unaff_XMM6_Qa);
    iVar3 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    lVar7 = *(longlong *)(param_1 + 0x160);
    iVar4 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    iVar5 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
    uVar10 = FUN_016ee570(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 6));
    dVar14 = (double)FUN_01d60920(param_3,iVar3 + 1,param_4,
                                  *(undefined8 *)(lVar7 + (longlong)(iVar4 + -1) * 8),
                                  *(undefined8 *)(lVar7 + (longlong)iVar5 * 8),uVar10);
    dVar14 = (double)FUN_0040c850(dVar14 * unaff_XMM6_Qa);
    dVar12 = dVar15 + 0.0 + dVar16 + dVar12;
    dVar16 = dVar11 + 0.0 + dVar13 + dVar14;
  }
  else {
    dVar12 = 0.0;
    dVar16 = 0.0;
    if (cVar1 != '\x03') {
      dVar12 = dVar15;
      dVar16 = 0.0;
    }
  }
  dVar15 = (double)FUN_0040c850(dVar16);
  dVar16 = (double)FUN_0040c850(dVar12);
  return dVar15 + dVar16;
}

