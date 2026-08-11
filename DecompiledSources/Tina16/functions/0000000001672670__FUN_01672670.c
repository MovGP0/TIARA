/* Ghidra address: 01672670 */
/* Ghidra symbol: FUN_01672670 */


double FUN_01672670(longlong param_1,undefined8 param_2,int *param_3,undefined8 param_4,char param_5
                   ,int param_6)

{
  int iVar1;
  int iVar2;
  double in_XMM0_Qa;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (param_3[1] < 0) {
    dVar6 = (double)-*param_3 * *(double *)(param_3 + 0x2a);
  }
  else {
    dVar6 = (double)*param_3 * *(double *)(param_3 + 0x2a);
  }
  if (param_5 == '\0') {
    if (param_6 == 1) {
      in_XMM0_Qa = dVar6 + (double)*param_3 *
                           (-*(double *)(param_3 + 0x1c) - *(double *)(param_3 + 0x2e));
    }
    else if (param_6 == 2) {
      in_XMM0_Qa = (double)*param_3 *
                   (*(double *)(param_3 + 0x2c) + *(double *)(param_3 + 0x2e) +
                   *(double *)(param_3 + 0x30));
    }
    else if (param_6 == 3) {
      in_XMM0_Qa = -dVar6 + (double)*param_3 *
                            (-*(double *)(param_3 + 0x18) - *(double *)(param_3 + 0x2c));
    }
    else if (param_6 == 4) {
      in_XMM0_Qa = (double)*param_3 *
                   ((*(double *)(param_3 + 0x18) + *(double *)(param_3 + 0x1c)) -
                   *(double *)(param_3 + 0x30));
    }
  }
  else if (param_5 == '\x01') {
    dVar3 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_1 + 0x118),
                                 *(undefined1 *)((longlong)param_3 + 0xb),(char)param_3[3],0);
    iVar1 = *param_3;
    FUN_016ee810(param_2,*(undefined8 *)(param_1 + 0x118),*(undefined1 *)((longlong)param_3 + 0xb),
                 *(undefined1 *)((longlong)param_3 + 0xd),0);
    dVar4 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_1 + 0x118),
                                 *(undefined1 *)((longlong)param_3 + 0xd),(char)param_3[3],0);
    iVar2 = *param_3;
    dVar5 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_1 + 0x118),
                                 *(undefined1 *)((longlong)param_3 + 0xe),(char)param_3[3],0);
    in_XMM0_Qa = (dVar6 + (double)*param_3 *
                          (-*(double *)(param_3 + 0x1c) - *(double *)(param_3 + 0x2e))) *
                 (double)iVar1 * dVar3 +
                 (double)*param_3 *
                 (*(double *)(param_3 + 0x2c) + *(double *)(param_3 + 0x2e) +
                 *(double *)(param_3 + 0x30)) * (double)iVar2 * dVar4 +
                 (double)*param_3 *
                 ((*(double *)(param_3 + 0x18) + *(double *)(param_3 + 0x1c)) -
                 *(double *)(param_3 + 0x30)) * (double)*param_3 * dVar5;
  }
  return in_XMM0_Qa;
}

