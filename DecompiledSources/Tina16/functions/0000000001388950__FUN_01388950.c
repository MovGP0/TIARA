/* Ghidra address: 01388950 */
/* Ghidra symbol: FUN_01388950 */


void FUN_01388950(longlong param_1,byte param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double unaff_XMM12_Qa;
  int local_f0;
  double local_e0;
  double local_d8;
  double local_d0 [20];
  longlong *plVar7;
  
  bVar1 = true;
  dVar10 = 0.0;
  dVar11 = 0.0;
  dVar8 = 0.0;
  dVar9 = 0.0;
  dVar12 = 0.0;
  dVar13 = 0.0;
  local_d0[0] = 0.0;
  dVar16 = 0.0;
  dVar14 = 0.0;
  local_d8 = *(double *)(*(longlong *)(param_1 + 0xe78) + 0x40);
  dVar15 = *(double *)(*(longlong *)(param_1 + 0xe78) + 0x48);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xe78) + 0x50);
  if (lVar4 != 0) {
    local_e0 = *(double *)(lVar4 + 0x40);
    unaff_XMM12_Qa = *(double *)(*(longlong *)(*(longlong *)(param_1 + 0xe78) + 0x50) + 0x48);
  }
  *(undefined1 *)(param_1 + 0xe46) = 0;
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0) + 0x28))();
  local_f0 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
      lVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,local_f0);
      dVar14 = dVar16;
      if (((*(longlong *)(lVar4 + 0x40) != 0) && (*(longlong *)(lVar4 + 0x98) != 0)) &&
         (*(char *)(lVar4 + 0x11) != '\0')) {
        plVar5 = (longlong *)0x0;
        plVar7 = (longlong *)0x0;
        plVar6 = (longlong *)0x0;
        if (param_2 < 6) {
          if (param_2 == 5) {
            plVar5 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cb8fa8,1,*(undefined8 *)(lVar4 + 0x98));
            plVar6 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cb9528,1,*(undefined8 *)(lVar4 + 0x98));
          }
          else if (param_2 < 2) {
            plVar5 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cb8ae0,1,*(undefined8 *)(lVar4 + 0x98));
          }
          else if (param_2 == 2) {
            plVar5 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cb8fa8,1,*(undefined8 *)(lVar4 + 0x98));
          }
          else {
            plVar6 = plVar7;
            if (param_2 == 3) {
              plVar5 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cb9268,1,*(undefined8 *)(lVar4 + 0x98));
            }
            else {
              plVar5 = (longlong *)0x0;
              if (param_2 == 4) {
                plVar5 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cb9528,1,*(undefined8 *)(lVar4 + 0x98))
                ;
              }
            }
          }
        }
        else if (param_2 == 6) {
          plVar5 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cb9c30,1,*(undefined8 *)(lVar4 + 0x98));
        }
        else if (param_2 == 7) {
          plVar5 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cbab10,1,*(undefined8 *)(lVar4 + 0x98));
        }
        else if (param_2 == 8) {
          plVar5 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cb9c30,1,*(undefined8 *)(lVar4 + 0x98));
        }
        else if (param_2 == 9) {
          plVar5 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cba688,1,*(undefined8 *)(lVar4 + 0x98));
        }
        if (param_2 < 8) {
          if ((param_2 == 7) || (param_2 < 5)) {
            dVar10 = (double)(**(code **)(*plVar5 + 0x58))(plVar5,*(undefined8 *)(lVar4 + 0x40));
            dVar11 = (double)(**(code **)(*plVar5 + 0x60))(plVar5,*(undefined8 *)(lVar4 + 0x40));
            dVar8 = (double)(**(code **)(*plVar5 + 0x68))(plVar5,*(undefined8 *)(lVar4 + 0x40));
            dVar9 = (double)(**(code **)(*plVar5 + 0x70))(plVar5,*(undefined8 *)(lVar4 + 0x40));
          }
          else if (param_2 == 5) {
            dVar10 = (double)(**(code **)(*plVar5 + 0x58))(plVar5,*(undefined8 *)(lVar4 + 0x40));
            dVar11 = (double)(**(code **)(*plVar5 + 0x60))(plVar5,*(undefined8 *)(lVar4 + 0x40));
            dVar8 = (double)(**(code **)(*plVar5 + 0x68))(plVar5,*(undefined8 *)(lVar4 + 0x40));
            dVar9 = (double)(**(code **)(*plVar5 + 0x70))(plVar5,*(undefined8 *)(lVar4 + 0x40));
            dVar12 = (double)(**(code **)(*plVar6 + 0x68))(plVar6,*(undefined8 *)(lVar4 + 0x40));
            dVar13 = (double)(**(code **)(*plVar6 + 0x70))(plVar6,*(undefined8 *)(lVar4 + 0x40));
          }
          else if (param_2 == 6) goto LAB_01388d7d;
        }
        else if (param_2 == 8) {
LAB_01388d7d:
          FUN_01cc92d0(plVar5,*(undefined8 *)(lVar4 + 0x40));
          (**(code **)(*plVar5 + 0xa0))(plVar5,*(undefined8 *)(lVar4 + 0x40));
          dVar10 = (double)(**(code **)(*plVar5 + 0x58))(plVar5,*(undefined8 *)(lVar4 + 0x40));
          dVar11 = (double)(**(code **)(*plVar5 + 0x60))(plVar5,*(undefined8 *)(lVar4 + 0x40));
          dVar12 = (double)(**(code **)(*plVar5 + 0x68))(plVar5,*(undefined8 *)(lVar4 + 0x40));
          dVar13 = (double)(**(code **)(*plVar5 + 0x70))(plVar5,*(undefined8 *)(lVar4 + 0x40));
          dVar9 = dVar11;
          dVar8 = dVar10;
        }
        else if (param_2 == 9) {
          FUN_01cc92d0(plVar5,*(undefined8 *)(lVar4 + 0x40));
          (**(code **)(*plVar5 + 0xa0))(plVar5,*(undefined8 *)(lVar4 + 0x40));
          dVar10 = -1.0;
          dVar11 = 1.0;
          dVar8 = -1.0;
          dVar9 = 1.0;
          dVar12 = -1.0;
          dVar13 = 1.0;
        }
        if (bVar1) {
          bVar1 = false;
          dVar14 = dVar11;
          dVar15 = dVar9;
          unaff_XMM12_Qa = dVar13;
          local_e0 = dVar12;
          local_d8 = dVar8;
          local_d0[0] = dVar10;
        }
        else {
          local_d0[0] = (double)FUN_00b90650(local_d0[0],dVar10);
          dVar14 = (double)FUN_00b90620(dVar16,dVar11);
          local_d8 = (double)FUN_00b90650(local_d8,dVar8);
          dVar15 = (double)FUN_00b90620(dVar15,dVar9);
          local_e0 = (double)FUN_00b90650(local_e0,dVar12);
          unaff_XMM12_Qa = (double)FUN_00b90620(unaff_XMM12_Qa,dVar13);
        }
        FUN_00410f20(plVar5);
        FUN_00410f20(plVar6);
      }
      local_f0 = local_f0 + 1;
      iVar3 = iVar3 + -1;
      dVar16 = dVar14;
    } while (iVar3 != 0);
  }
  if (dVar14 <= local_d0[0]) {
    FUN_010bfa60(local_d0,0x3f50624dd2f1a9fc,0);
  }
  if (dVar15 <= local_d8) {
    dVar15 = (double)FUN_010bfa60(&local_d8,0x3f50624dd2f1a9fc,0);
  }
  if (unaff_XMM12_Qa <= local_e0) {
    unaff_XMM12_Qa = (double)FUN_010bfa60(&local_e0,0x3f50624dd2f1a9fc,0);
  }
  if (*(double *)(*(longlong *)(param_1 + 0xe78) + 0x40) != local_d8) {
    *(undefined1 *)(param_1 + 0xe46) = 1;
    *(double *)(*(longlong *)(param_1 + 0xe78) + 0x40) = local_d8;
  }
  if (*(double *)(*(longlong *)(param_1 + 0xe78) + 0x48) != dVar15) {
    *(undefined1 *)(param_1 + 0xe46) = 1;
    *(double *)(*(longlong *)(param_1 + 0xe78) + 0x48) = dVar15;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xe78) + 0x50);
  if (lVar4 != 0) {
    if (*(double *)(lVar4 + 0x40) != local_e0) {
      *(undefined1 *)(param_1 + 0xe46) = 1;
      *(double *)(*(longlong *)(*(longlong *)(param_1 + 0xe78) + 0x50) + 0x40) = local_e0;
    }
    if (*(double *)(*(longlong *)(*(longlong *)(param_1 + 0xe78) + 0x50) + 0x48) != unaff_XMM12_Qa)
    {
      *(undefined1 *)(param_1 + 0xe46) = 1;
      *(double *)(*(longlong *)(*(longlong *)(param_1 + 0xe78) + 0x50) + 0x48) = unaff_XMM12_Qa;
    }
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0xc70) + 0xf0))(*(longlong **)(param_1 + 0xc70));
  if ((cVar2 == '\0') || (*(char *)(*(longlong *)(param_1 + 0xc70) + 0x328) == '\0')) {
    FUN_00b90440(*(undefined8 *)(param_1 + 0xc50),
                 *(undefined8 *)(*(longlong *)(param_1 + 0xe78) + 0x40));
    FUN_00b90440(*(undefined8 *)(param_1 + 0xc48),
                 *(undefined8 *)(*(longlong *)(param_1 + 0xe78) + 0x48));
  }
  else {
    FUN_00b90440(*(undefined8 *)(param_1 + 0xc50),
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe78) + 0x50) + 0x40));
    FUN_00b90440(*(undefined8 *)(param_1 + 0xc48),
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe78) + 0x50) + 0x48));
  }
  FUN_01389820(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x9b0) + 0x18))
            (*(longlong **)(param_1 + 0x9b0),*(undefined1 *)(param_1 + 0x990));
  FUN_010f67e0(param_1,1,1);
  FUN_01389900(param_1);
  return;
}

