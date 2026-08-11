/* Ghidra address: 01684500 */
/* Ghidra symbol: FUN_01684500 */


double FUN_01684500(longlong param_1,undefined8 param_2,short *param_3,undefined8 param_4,
                   char param_5,int param_6)

{
  short sVar1;
  double in_XMM0_Qa;
  double dVar2;
  double dVar3;
  
  if (param_5 == '\0') {
    if (param_6 == 1) {
      in_XMM0_Qa = (double)(int)*param_3 * *(double *)(param_3 + 0x1c);
    }
    else if (param_6 == 2) {
      in_XMM0_Qa = (double)(int)*param_3 * *(double *)(param_3 + 8);
    }
    else if (param_6 == 3) {
      in_XMM0_Qa = (double)(int)*param_3 * *(double *)(param_3 + 0x14);
    }
    else if (param_6 == 4) {
      in_XMM0_Qa = (double)(int)*param_3 * *(double *)(param_3 + 0x18);
    }
  }
  else if (param_5 == '\x01') {
    dVar2 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_1 + 0x118),
                                 *(undefined1 *)((longlong)param_3 + 5),
                                 *(undefined1 *)((longlong)param_3 + 7),0);
    sVar1 = *param_3;
    FUN_016ee810(param_2,*(undefined8 *)(param_1 + 0x118),*(undefined1 *)((longlong)param_3 + 5),
                 (char)param_3[3],0);
    dVar3 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_1 + 0x118),(char)param_3[3],
                                 *(undefined1 *)((longlong)param_3 + 7),0);
    in_XMM0_Qa = (double)FUN_0040c850(*(double *)(param_3 + 0x14) * (double)(int)*param_3 * dVar3);
    dVar2 = (double)FUN_0040c850(*(double *)(param_3 + 8) * (double)(int)sVar1 * dVar2);
    in_XMM0_Qa = in_XMM0_Qa + dVar2;
  }
  return in_XMM0_Qa;
}

