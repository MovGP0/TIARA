/* Ghidra address: 017da6e0 */
/* Ghidra symbol: FUN_017da6e0 */


void FUN_017da6e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  double *pdVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  code *pcVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulonglong in_stack_ffffffffffffff58;
  ulonglong in_stack_ffffffffffffff60;
  int local_70;
  int local_58;
  int local_4c [9];
  
  uVar17 = FUN_00b92140(0);
  *(undefined8 *)(param_1 + 0x1e0) = uVar17;
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (*(char *)(param_1 + 0x91) == '\0') {
      FUN_017d8290(param_1);
      piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x12c4);
      *piVar1 = *piVar1 + 1;
      *(undefined1 *)(param_1 + 0x91) = 1;
    }
    local_70 = 1;
LAB_017daa29:
    do {
      if (*(int *)(param_1 + 8) + -1 < local_70) goto code_r0x017daa41;
      if ((*(char *)(param_1 + 0x90) == '\0') && (local_70 < *(int *)(param_1 + 8) + -1)) {
        FUN_017d9060(param_1,local_70);
      }
      dVar20 = (double)FUN_017d99c0(param_1,local_70,local_70);
      if (dVar20 == 0.0) {
        FUN_017d9d40(param_1,2,0,0);
      }
      if ((*(char *)(param_1 + 0x92) != '\0') && (*(char *)(param_1 + 0x90) != '\0')) {
        dVar18 = (double)FUN_017d8770(param_1,*(longlong *)(param_1 + 0x28) +
                                              (longlong)local_70 * 0x18,local_70);
        dVar19 = (double)FUN_0040c850(dVar20);
        if (dVar19 <= dVar18 * *(double *)(param_1 + 0x30)) {
          *(undefined1 *)(param_1 + 0x90) = 0;
          *(undefined1 *)(param_1 + 0x92) = 0;
          goto LAB_017daa29;
        }
      }
      if (local_70 < *(int *)(param_1 + 8) + -1) {
        lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)local_70 * 0x18);
        iVar9 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10 + (longlong)local_70 * 0x18);
        iVar8 = 0;
        iVar14 = iVar9;
        if (-1 < iVar9 + -1) {
          do {
            lVar10 = (longlong)iVar8;
            if (local_70 < *(int *)(lVar16 + 0x10 + lVar10 * 0x18)) {
              *(double *)(lVar16 + lVar10 * 0x18) = *(double *)(lVar16 + lVar10 * 0x18) / dVar20;
            }
            iVar8 = iVar8 + 1;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)local_70 * 0x18);
        lVar10 = *plVar2;
        uVar15 = plVar2[2];
        local_58 = (int)uVar15;
        iVar14 = 0;
        if (-1 < local_58 + -1) {
          uVar15 = uVar15 & 0xffffffff;
          do {
            sVar4 = *(short *)(lVar10 + (longlong)iVar14 * 2);
            if (local_70 < sVar4) {
              dVar20 = (double)FUN_017d99c0(param_1,(int)sVar4,local_70);
              local_4c[0] = 0;
              iVar8 = iVar9;
              if (-1 < iVar9 + -1) {
                do {
                  lVar11 = (longlong)local_4c[0];
                  if (local_70 < *(int *)(lVar16 + 0x10 + lVar11 * 0x18)) {
                    dVar18 = dVar20 * *(double *)(lVar16 + lVar11 * 0x18);
                    sVar4 = *(short *)(lVar10 + (longlong)iVar14 * 2);
                    iVar6 = *(int *)(lVar16 + 0x10 + lVar11 * 0x18);
                    sVar5 = *(short *)(*(longlong *)
                                        (*(longlong *)(param_1 + 0x20) + 8 +
                                        (longlong)(int)sVar4 * 0x18) + (longlong)iVar6 * 2);
                    if (sVar5 < 0) {
                      in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffffffffff00;
                      in_stack_ffffffffffffff60 = in_stack_ffffffffffffff60 & 0xffffffffffffff00;
                      FUN_017d9580(param_1,(int)sVar4,iVar6,-dVar18,in_stack_ffffffffffffff58,
                                   in_stack_ffffffffffffff60);
                    }
                    else {
                      pdVar3 = (double *)
                               (*(longlong *)
                                 (*(longlong *)(param_1 + 0x20) + (longlong)(int)sVar4 * 0x18) +
                               (longlong)(int)sVar5 * 0x18);
                      *pdVar3 = *pdVar3 - dVar18;
                    }
                  }
                  local_4c[0] = local_4c[0] + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
            }
            iVar14 = iVar14 + 1;
            uVar13 = (int)uVar15 - 1;
            uVar15 = (ulonglong)uVar13;
          } while (uVar13 != 0);
        }
      }
      local_70 = local_70 + 1;
    } while( true );
  }
LAB_017daa5a:
  if (*(char *)(param_1 + 0x18) == '\x01') {
    if (*(char *)(param_1 + 0x91) == '\0') {
      FUN_017d8290(param_1);
      piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x12c4);
      *piVar1 = *piVar1 + 1;
      *(undefined1 *)(param_1 + 0x91) = 1;
    }
    if ((*(char *)(param_1 + 0x90) == '\0') ||
       ((*(char *)(param_1 + 0x92) != '\0' &&
        (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x2f8) == 1)))) {
      FUN_017d9d10(param_1,0);
      if (*(longlong *)(param_1 + 0x10) != 0) {
        uVar17 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x110);
        FUN_01662fd0(uVar17);
        FUN_01664490(uVar17);
      }
      iVar9 = thunk_FUN_041ccfc6(*(undefined8 *)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x38),
                                 *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40));
      piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x12c8);
      *piVar1 = *piVar1 + 1;
      if (iVar9 != 0) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x12cc);
        *piVar1 = *piVar1 + 1;
        FUN_017d9d40(param_1,iVar9,*(undefined4 *)(*(longlong *)(param_1 + 0x1d0) + 0xd8),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x1d0) + 0xdc));
      }
      *(undefined1 *)(param_1 + 0x90) = 1;
    }
    else {
      iVar9 = 0;
      if (1 < *(int *)(param_1 + 8)) {
        if (*(longlong *)(param_1 + 0x10) == 0) {
          pcVar12 = (code *)0x0;
        }
        else {
          lVar16 = FUN_0041f930();
          *(undefined8 *)(lVar16 + 0x288) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x110);
          if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x110) + 0xe) == '\0') {
            if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x110) + 0xd) == '\0') {
              pcVar12 = (code *)0x0;
            }
            else {
              pcVar12 = (code *)0xffffffffffffffff;
              piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x110) + 0x1c);
              *piVar1 = *piVar1 + 1;
              FUN_01663000(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x110));
              piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x12dc);
              *piVar1 = *piVar1 + 1;
            }
          }
          else {
            pcVar12 = FUN_01662ae0;
            piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x12d8);
            *piVar1 = *piVar1 + 1;
          }
        }
        *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x110) + 0xf) =
             *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x110) + 0xe);
        iVar9 = thunk_FUN_041d2029(*(undefined8 *)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x38),
                                   *(undefined8 *)(param_1 + 0x40),pcVar12);
      }
      if (iVar9 != 0) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x12d0);
        *piVar1 = *piVar1 + 1;
        FUN_017d9d40(param_1,iVar9,*(undefined4 *)(*(longlong *)(param_1 + 0x1d0) + 0xd8),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x1d0) + 0xdc));
      }
    }
  }
  if (*(char *)(param_1 + 0x18) == '\x02') {
    lVar16 = *(longlong *)(param_1 + 0x10);
    if ((((*(char *)(param_1 + 0x92) != '\0') && (*(char *)(lVar16 + 0x89) == '\x06')) &&
        (*(longlong *)(lVar16 + 0x2f8) == 1)) &&
       ((iVar9 = *(int *)(lVar16 + 0x120c) - *(int *)(lVar16 + 0x122c), 1000 < iVar9 &&
        (*(double *)(lVar16 + 0x1248 + (longlong)*(int *)(param_1 + 0x1d8) * 0x20) =
              (double)(*(int *)(lVar16 + 0x1218) - *(int *)(lVar16 + 0x1238)) / (double)iVar9,
        0.01 < *(double *)(lVar16 + 0x1248 + (longlong)*(int *)(param_1 + 0x1d8) * 0x20))))) {
      uVar15 = (longlong)(*(int *)(param_1 + 0x1d8) + 1) % (longlong)*(int *)(lVar16 + 0x12c0);
      while( true ) {
        iVar9 = (int)uVar15;
        dVar20 = *(double *)(lVar16 + 0x1248 + (longlong)iVar9 * 0x20);
        pdVar3 = (double *)(lVar16 + 0x1248 + (longlong)*(int *)(param_1 + 0x1d8) * 0x20);
        if ((dVar20 < *pdVar3 || dVar20 == *pdVar3) || (iVar9 == *(int *)(param_1 + 0x1d8))) break;
        uVar15 = (longlong)(iVar9 + 1) % (longlong)*(int *)(lVar16 + 0x12c0);
      }
      if (iVar9 != *(int *)(param_1 + 0x1d8)) {
        FUN_017d9b40(param_1,uVar15 & 0xffffffff);
      }
    }
    if (*(char *)(param_1 + 0x91) == '\0') {
      FUN_017d8290(param_1);
      piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x12c4);
      *piVar1 = *piVar1 + 1;
    }
    if (*(char *)(param_1 + 0x90) == '\0') {
      if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_017d9d10(param_1,0);
        FUN_01664490(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x110));
      }
      thunk_FUN_03dc4200(param_1 + 0xe0,param_1 + 0xe8);
      uVar17 = thunk_FUN_0417676b(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
                                  *(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),
                                  param_1 + 0xe8);
      *(undefined8 *)(param_1 + 0xe0) = uVar17;
      piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x12c8);
      *piVar1 = *piVar1 + 1;
      iVar9 = *(int *)(param_1 + 0x158);
      if (iVar9 != 0) {
        if (0 < *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x10)) {
          FUN_017d7470(*(undefined8 *)(param_1 + 0x1b0),*(undefined4 *)(param_1 + 0x168),local_4c);
        }
        piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x12cc);
        *piVar1 = *piVar1 + 1;
        FUN_017d9d40(param_1,iVar9,*(undefined4 *)(param_1 + 0x168),*(undefined4 *)(param_1 + 0x168)
                    );
      }
      *(undefined1 *)(param_1 + 0x90) = 1;
    }
    else {
      lVar16 = 0;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        pcVar12 = (code *)0x0;
      }
      else {
        lVar16 = FUN_0041f930();
        *(undefined8 *)(lVar16 + 0x288) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x110);
        lVar16 = 0;
        if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x110) + 0xe) == '\0') {
          if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x110) + 0xd) == '\0') {
            pcVar12 = (code *)0x0;
          }
          else {
            pcVar12 = (code *)0x0;
            piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x110) + 0x1c);
            *piVar1 = *piVar1 + 1;
            lVar16 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x110) + 0x168);
            piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x12dc);
            *piVar1 = *piVar1 + 1;
          }
        }
        else {
          pcVar12 = FUN_01662ae0;
          FUN_00419260(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x110) + 0x170,&DAT_0165b868,1,
                       (longlong)*(int *)(*(longlong *)(param_1 + 0xd8) + 0x28));
          piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x12d8);
          *piVar1 = *piVar1 + 1;
        }
      }
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x110);
      *(undefined1 *)(lVar10 + 0xf) = *(undefined1 *)(lVar10 + 0xe);
      thunk_FUN_040b3254(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
                         *(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),
                         *(undefined8 *)(param_1 + 0xe0),param_1 + 0xe8,pcVar12,lVar16,
                         *(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x110) + 0x170));
      if (lVar16 != 0) {
        iVar14 = *(int *)(param_1 + 0xb8) / 8;
        iVar9 = 0;
        if (-1 < iVar14 + -1) {
          do {
            cVar7 = FUN_00526f10(*(undefined8 *)
                                  (*(longlong *)(param_1 + 0x1c8) + (longlong)iVar9 * 8));
            if (cVar7 != '\0') {
              FUN_0040d200(*(undefined8 *)(param_1 + 0x1c8),(longlong)*(int *)(param_1 + 0xb8),0);
              *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
              break;
            }
            iVar9 = iVar9 + 1;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
      }
      iVar9 = *(int *)(param_1 + 0x158);
      if (iVar9 == 0) {
        if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x110) + 0xd) == '\0') {
          uVar17 = 0;
        }
        else {
          uVar17 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x110) + 0x170);
        }
        if ((*(char *)(*(longlong *)(param_1 + 0x10) + 0x89) != '\x06') ||
           ((*(char *)(param_1 + 0x92) != '\0' &&
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x2f8) == 1)))) {
          thunk_FUN_04003cb4(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe0),
                             param_1 + 0xe8,uVar17);
          FUN_017d9d10(param_1,0);
          if (*(double *)(param_1 + 0x178) <= *(double *)(PTR_DAT_02004010 + 0x100) &&
              *(double *)(PTR_DAT_02004010 + 0x100) != *(double *)(param_1 + 0x178)) {
            FUN_017d9d40(param_1,0xfffffffc,0,0);
          }
        }
      }
      else {
        if (0 < *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x10)) {
          FUN_017d7470(*(undefined8 *)(param_1 + 0x1b0),*(undefined4 *)(param_1 + 0x168),local_4c);
        }
        piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x12d0);
        *piVar1 = *piVar1 + 1;
        FUN_017d9d40(param_1,iVar9,*(undefined4 *)(param_1 + 0x168),*(undefined4 *)(param_1 + 0x168)
                    );
      }
    }
    *(undefined1 *)(param_1 + 0x91) = 1;
  }
  dVar20 = (double)FUN_00b92140(*(undefined8 *)(param_1 + 0x1e0));
  *(double *)PTR_DAT_02001898 = dVar20 + *(double *)PTR_DAT_02001898;
  return;
code_r0x017daa41:
  *(undefined1 *)(param_1 + 0x90) = 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x12c8);
  *piVar1 = *piVar1 + 1;
  goto LAB_017daa5a;
}

