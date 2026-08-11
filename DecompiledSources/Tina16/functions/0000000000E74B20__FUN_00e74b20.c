/* Ghidra address: 00e74b20 */
/* Ghidra symbol: FUN_00e74b20 */


double FUN_00e74b20(longlong param_1,undefined8 param_2,short *param_3,undefined8 param_4,
                   char param_5,int param_6)

{
  short sVar1;
  short sVar2;
  double in_XMM0_Qa;
  double dVar3;
  double dVar4;
  
  if (param_5 == '\0') {
    if (param_6 == 1) {
      in_XMM0_Qa = (double)(int)*param_3 * *(double *)(param_3 + 0xc);
    }
    else if (param_6 == 2) {
      in_XMM0_Qa = (double)(int)*param_3 * *(double *)(param_3 + 0x10);
    }
    else if (param_6 == 3) {
      in_XMM0_Qa = (double)(int)*param_3 * (-*(double *)(param_3 + 8) - *(double *)(param_3 + 0x14))
      ;
    }
  }
  else if (param_5 == '\x01') {
    dVar3 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_1 + 0x118),(char)param_3[2],
                                 *(undefined1 *)((longlong)param_3 + 7),0);
    sVar1 = *param_3;
    FUN_016ee810(param_2,*(undefined8 *)(param_1 + 0x118),(char)param_3[2],(char)param_3[3],0);
    dVar4 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_1 + 0x118),(char)param_3[3],
                                 *(undefined1 *)((longlong)param_3 + 7),0);
    sVar2 = *param_3;
    in_XMM0_Qa = (double)FUN_0040c850(*(double *)(param_3 + 0xc) * (double)(int)sVar1 * dVar3);
    dVar3 = (double)FUN_0040c850(*(double *)(param_3 + 0x10) * (double)(int)sVar2 * dVar4);
    in_XMM0_Qa = in_XMM0_Qa + dVar3;
  }
  return in_XMM0_Qa;
}

